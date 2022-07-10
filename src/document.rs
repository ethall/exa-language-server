use lsp_types::{Position, TextDocumentContentChangeEvent, Url};
use ropey::Rope;
use tree_sitter::{InputEdit, Node, Parser, Tree};

use crate::{
    documentation::DocumentationMap, highlight::ExaHighlighter, location::position_to_point,
};

pub struct Document {
    pub uri: Url,
    pub highlighter: ExaHighlighter,
    pub parser: Parser,
    pub text: String,
    pub tree: Tree,
    pub version: i64,
    buffer: Rope,
}
impl Document {
    pub fn new(uri: Url, version: i64, text: String) -> Self {
        let mut parser = Parser::new();
        parser.set_language(tree_sitter_exa::language()).unwrap();
        let tree = parser.parse(text.clone(), None).unwrap();
        Self {
            uri,
            highlighter: ExaHighlighter::new(),
            parser,
            text: text.clone(),
            tree,
            version,
            buffer: Rope::from_str(text.as_str()),
        }
    }

    /// Convert (character) offset to byte offset. Always assumes UTF-8 encoding.
    pub fn from_char_to_byte_offset(
        &self,
        start_char_offset: usize,
        end_char_offset: usize,
    ) -> (usize, usize) {
        (
            self.buffer.char_to_byte(start_char_offset),
            self.buffer.char_to_byte(end_char_offset),
        )
    }

    /// (Character) offset at the given [Position].
    pub fn offset_at(&self, position: lsp_types::Position) -> usize {
        let pos_line: usize = position.line as usize;

        /*
        Clamp offset to the total number of characters if the given line
        position is greater than the number of available lines.

        The line position is zero-indexed but the value returned from
        `len_lines` is not, so this is equivalent to
            pos_line + 1 > self.buffer.len_lines()
        */
        if pos_line >= self.buffer.len_lines() {
            return self.buffer.len_chars();
        }

        let line_char_offset = self.buffer.line_to_char(pos_line);
        let next_line_char_offset = if pos_line >= self.buffer.len_lines() {
            // Clamp to the total number of characters.
            self.buffer.len_chars()
        } else {
            // Safe to get the character offset of the next line.
            self.buffer.line_to_char(pos_line + 1)
        };

        // Return the character offset of the next line if the given character
        // position exceeds the line length.
        (line_char_offset + (position.character as usize)).min(next_line_char_offset)
    }

    /// [Position] at the given (character) offset.
    pub fn position_at(&self, offset: usize) -> Position {
        let clamped_offset = offset.clamp(0, self.buffer.len_chars());

        if self.buffer.len_lines() == 1 {
            // Values within Position are zero-based.
            return Position {
                line: 0,
                character: clamped_offset as u32,
            };
        }

        // We've already clamped the offset, so this is safe.
        let line = self.buffer.char_to_line(clamped_offset);
        Position {
            line: line as u32,
            character: (clamped_offset - self.buffer.line_to_char(line)) as u32,
        }
    }

    pub fn resolve_documentation(documentation: DocumentationMap, node: Node) -> Option<String> {
        let kind = node.kind();

        if !documentation.contains_key(kind) {
            return None;
        }

        let documentation_items = documentation
            .get(&String::from(kind))
            .unwrap()
            .read()
            .unwrap();

        if documentation_items.len() == 1 {
            return Some(documentation_items[0].description.clone());
        }

        let key = match node.kind() {
            "test" => match node.child_count() {
                3 => "TEST-COMPARE",
                1 => match node.child(0).unwrap().kind() {
                    "mrd" => "TEST-MESSAGE",
                    "eof" => "TEST-FILE",
                    _ => return None,
                },
                _ => return None,
            },
            "void" => match node.child_count() {
                1 => "VOID-FILE",
                0 => "VOID-MESSAGE",
                _ => return None,
            },
            _ => return None,
        };

        documentation_items
            .iter()
            .find(|item| item.key == Some(String::from(key)))
            .map(|item| item.description.clone())
    }

    pub fn update(&mut self, changes: Vec<TextDocumentContentChangeEvent>, version: i64) {
        for change_event in changes {
            let range = change_event.range.unwrap();
            let start_offset = self.offset_at(range.start);
            let end_offset = self.offset_at(range.end);
            let (start_byte, old_end_byte) =
                self.from_char_to_byte_offset(start_offset, end_offset);
            todo!("apply this TextDocumentContentChangeEvent (change_event) to the `ropey` buffer");
            let new_end_byte = start_byte
                + change_event
                    .text
                    .chars()
                    .fold(0, |acc, c| acc + c.len_utf8());
            let new_end_position = self.position_at(new_end_byte.try_into().unwrap());
            /*
             *                  8
             *          fn test(|) {}
             *
             *          fn test(a: u32|) {}
             *                        14
             * Change:
             *  text: "a: u32"
             *    length: 6
             *  range:
             *    start:
             *      line: 0
             *      character: 8
             *    end:
             *      line: 0
             *      character: 8
             *  range_len: 0
             */
            let input_edit = InputEdit {
                start_byte,
                old_end_byte,
                new_end_byte,
                start_position: position_to_point(&range.start),
                old_end_position: position_to_point(&range.end),
                new_end_position: position_to_point(&new_end_position),
            };
            self.tree.edit(&input_edit);
        }
        // Finalize update.
        self.version = version;
        self.text = todo!("update text content from `ropey` buffer");
        self.tree = self
            .parser
            .parse(self.text.clone(), Some(&self.tree))
            .unwrap();
    }
}

#[cfg(test)]
mod test {
    use lsp_types::{Position, Url};
    use std::path::Path;

    use super::Document;

    // ⚠ WARNING ⚠ changing this value means you need to recalculate the expected values below!
    /// 65 characters, 65 bytes \
    /// Character offsets at the start of each line: `[0, 14, 35, 46]`
    /// ```text
    /// "This document\n" ---------- 14 chars, 14 bytes
    /// "just makes sure that\n" --- 21 chars, 21 bytes
    /// "everything\n" ------------- 11 chars, 11 bytes
    /// "works as it should." ------ 19 chars, 19 bytes
    /// ```
    static DOCTEXT1: &str = "This document\njust makes sure that\neverything\nworks as it should.";
    // ⚠ WARNING ⚠ changing this value means you need to recalculate the expected values below!
    /// 47 characters, 56 bytes \
    /// Character offsets at the start of each line: `[0, 7, 28, 40]`
    /// ```text
    ///  1c -|--|
    ///  4b -|--|
    /// "This 📃\n" ----------------------- 07 chars, 10 bytes
    ///
    ///           |--------|- Thin Space
    ///           |   1c   |
    ///           |   3b   |
    /// "just makes\u{2009}sure that\n" --- 21 chars, 23 bytes
    ///           ||      ||         ||
    ///           10b     13b        23b
    ///           10c     11c        21c
    ///
    ///  |--------|- Combining Grave Accent
    ///  |        |    |-|- Latin Small Letter I with Grave
    ///  |   1c   |    |-|- 1c
    ///  |   2b   |    |-|- 2b
    /// "e\u{0300}verythìng\n" ------------ 12 chars, 14 bytes
    ///          ||    ||
    ///          3b    9b
    ///          2c    8c
    ///
    ///   1c -|--|
    ///   3b -|--|
    /// "works ✅" ------------------------- 07 chars, 09 bytes
    /// ```
    static DOCTEXT2: &str = "This 📃\njust makes\u{2009}sure that\ne\u{0300}verythìng\nworks ✅";
    // ⚠ WARNING ⚠ changing this value means you need to recalculate the expected values below!
    /// 40 characters, 42 bytes
    /// ```text
    ///                                     |-|- Katakana Letter Tu
    ///                             1c -|--||-|- 1c
    ///                             1b -|--||-|- 3b
    /// "A document with a single line. ¯\\_(ツ)_/¯"
    ///                                     ||
    ///                                     36b
    ///                                     36c
    /// ```
    static DOCTEST3: &str = "A document with a single line. ¯\\_(ツ)_/¯";

    fn make_doc(text: &str) -> Document {
        //For linux/macos/*bsd/etc...
        #[cfg(not(target_os = "windows"))]
        let path: &Path = Path::new("/this-file-does-not-exist.txt");

        // For windows and their wacky directory structure...
        #[cfg(target_os = "windows")]
        let path: &Path = Path::new("C:\\this-file-does-not-exist.txt");

        Document::new(
            Url::from_directory_path(path).unwrap(),
            rand::random(),
            String::from(text),
        )
    }

    #[test]
    fn offset_at_works() {
        let cases: Vec<Position> = vec![
            Position::new(0, 0),
            Position::new(0, 39), // last line character for DOCTEXT3
            Position::new(0, 40),
            Position::new(2, 3),
            Position::new(3, 18), // last line character for DOCTEXT1
            Position::new(3, 19),
            Position::new(3, 6), // last line character for DOCTEXT2
            Position::new(3, 7),
            Position::new(4, 0),
            Position::new(3, 99),
            Position::new(99, 0),
        ];

        let doc1 = make_doc(DOCTEXT1);
        let expected1: Vec<usize> = vec![0, 14, 14, 38, 64, 65, 52, 53, 65, 65];

        let doc2 = make_doc(DOCTEXT2);
        let expected2: Vec<usize> = vec![0, 7, 7, 31, 47, 47, 46, 47, 47, 47];

        let doc3 = make_doc(DOCTEST3);
        let expected3: Vec<usize> = vec![0, 39, 40, 40, 40, 40, 40, 40, 40, 40];

        // DOCTEXT1
        for (pos, expected) in cases.iter().zip(expected1.iter()) {
            let actual = doc1.offset_at(*pos);
            assert_eq!(
                actual, *expected,
                "Calculated offset {} from {:?} in DOCTEXT1; expected {}",
                actual, *pos, *expected
            );
        }

        // DOCTEXT2
        for (pos, expected) in cases.iter().zip(expected2.iter()) {
            let actual = doc2.offset_at(*pos);
            assert_eq!(
                actual, *expected,
                "Calculated offset {} from {:?} in DOCTEXT2; expected {}",
                actual, *pos, *expected
            );
        }

        // DOCTEXT3
        for (pos, expected) in cases.iter().zip(expected3.iter()) {
            let actual = doc3.offset_at(*pos);
            assert_eq!(
                actual, *expected,
                "Calculated offset {} from {:?} in DOCTEXT3; expected {}",
                actual, *pos, *expected
            );
        }
    }

    #[test]
    fn position_at_works() {
        let cases: Vec<usize> = vec![0, 31, 38, 46, 47, 52, 53, 64, 65];

        let doc1 = make_doc(DOCTEXT1);
        let expected1: Vec<Position> = vec![
            Position::new(0, 0),
            Position::new(1, 17),
            Position::new(2, 3),
            Position::new(3, 0),
            Position::new(3, 1),
            Position::new(3, 6),
            Position::new(3, 7),
            Position::new(3, 18),
            Position::new(3, 19),
        ];

        let doc2 = make_doc(DOCTEXT2);
        let expected2: Vec<Position> = vec![
            Position::new(0, 0),
            Position::new(2, 3),
            Position::new(2, 10),
            Position::new(3, 6),
            Position::new(3, 7),
            Position::new(3, 7),
            Position::new(3, 7),
            Position::new(3, 7),
            Position::new(3, 7),
        ];

        let doc3 = make_doc(DOCTEST3);
        let expected3: Vec<Position> = vec![
            Position::new(0, 0),
            Position::new(0, 31),
            Position::new(0, 38),
            Position::new(0, 40),
            Position::new(0, 40),
            Position::new(0, 40),
            Position::new(0, 40),
            Position::new(0, 40),
            Position::new(0, 40),
        ];

        // DOCTEXT1
        for (offset, expected) in cases.iter().zip(expected1.iter()) {
            let actual = doc1.position_at(*offset);
            assert_eq!(
                actual, *expected,
                "Calculated {:?} from {} in DOCTEXT1; expected {:?}",
                actual, *offset, *expected
            );
        }

        // DOCTEXT2
        for (offset, expected) in cases.iter().zip(expected2.iter()) {
            let actual = doc2.position_at(*offset);
            assert_eq!(
                actual, *expected,
                "Calculated {:?} from {} in DOCTEXT2; expected {:?}",
                actual, *offset, *expected
            );
        }

        // DOCTEXT3
        for (offset, expected) in cases.iter().zip(expected3.iter()) {
            let actual = doc3.position_at(*offset);
            assert_eq!(
                actual, *expected,
                "Calculated {:?} from {} in DOCTEXT3; expected {:?}",
                actual, *offset, *expected
            );
        }
    }

    #[test]
    fn offset_at_and_position_at_are_reciprocal() {
        let cases: Vec<usize> = vec![0, 31, 38, 46, 47, 52, 53, 64, 65];

        let doc1 = make_doc(DOCTEXT1);
        let doc2 = make_doc(DOCTEXT2);
        let doc3 = make_doc(DOCTEST3);

        for offset in cases {
            let actual1 = doc1.offset_at(doc1.position_at(offset));
            let expected1 = offset.clamp(0, doc1.buffer.len_chars());
            assert_eq!(
                actual1, expected1,
                "Calculated {} from {} in DOCTEXT1; expected {}",
                actual1, offset, expected1
            );

            let actual2 = doc2.offset_at(doc2.position_at(offset));
            let expected2 = offset.clamp(0, doc2.buffer.len_chars());
            assert_eq!(
                actual2, expected2,
                "Calculated {} from {} in DOCTEXT2; expected {}",
                actual2, offset, expected2
            );

            let actual3 = doc3.offset_at(doc3.position_at(offset));
            let expected3 = offset.clamp(0, doc3.buffer.len_chars());
            assert_eq!(
                actual3, expected3,
                "Calculated {} from {} in DOCTEXT3; expected {}",
                actual3, offset, expected3
            );
        }
    }

    #[test]
    fn char_to_byte_offset_works() {
        // All cases are character offsets from DOCTEXT2.
        let cases: Vec<(usize, usize)> = vec![
            (0, 0),   // ""
            (5, 6),   // "📃"
            (12, 22), // "makes\u{2009}sure"
            (28, 28), // ""
            (28, 40), // "e\u{0300}verythìng\n"
            (46, 47), // "✅"
            (0, 47),  // all text
        ];

        let doc2 = make_doc(DOCTEXT2);
        let expected2: Vec<(usize, usize)> = vec![
            (0, 0),
            (5, 9),
            (15, 27),
            (33, 33),
            (33, 47),
            (53, 56),
            (0, 56),
        ];

        for (case_tuple, expected_tuple) in cases.iter().zip(expected2.iter()) {
            let (case_start, case_end) = *case_tuple;
            let actual = doc2.from_char_to_byte_offset(case_start, case_end);
            assert_eq!(
                actual, *expected_tuple,
                "Calculated {:?} from {:?} in DOCTEXT2; expected {:?}",
                actual, *case_tuple, *expected_tuple
            );
        }
    }
}
