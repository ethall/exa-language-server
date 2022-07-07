use lsp_types::{Position, TextDocumentContentChangeEvent, Url};
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
            text,
            tree,
            version,
        }
    }

    /// Convert (character) offset to byte offset. Always assumes UTF-8 encoding.
    pub fn from_char_to_byte_offset(
        &self,
        start_char_offset: usize,
        end_char_offset: usize,
    ) -> (usize, usize) {
        todo!()
    }

    /// (Character) offset at the given [Position].
    pub fn offset_at(&self, position: lsp_types::Position) -> usize {
        let mut doc_lines: Vec<&str> = self.text.split("\n").collect();
        doc_lines.truncate(position.line as usize);
        let mut accum: usize = 0;
        for line in doc_lines {
            accum += line.len() + 1; //add in the \n we split on
        }
        accum += position.character as usize;

        accum
    }

    /// [Position] at the given (character) offset.
    pub fn position_at(&self, offset: usize) -> Position {
        todo!()
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
    use std::path::Path;
    use lsp_types::{Position, Url};

    use super::Document;

    fn make_doc() -> Document {
        //For linux/macos/*bsd/etc...
        #[cfg(not(target_os="windows"))]
        let path: &Path = Path::new("/example.txt");

        // For windows and their wacky directory structure...
        #[cfg(target_os="windows")]
        let path: &Path = Path::new("C:\\example.txt");

        Document::new(
            Url::from_directory_path(path).unwrap(),
            2,
            // Line lengths (including newlines): 14, 21, 11, 19
            String::from(
                r#"This document
just makes sure that
everything
works as it should."#,
            ),
        )
    }

    #[test]
    fn offset_at_works() {
        let pos_offset_pairs: Vec<(Position, usize)> = vec![
            (Position::new(0, 0), 0),
            (Position::new(2, 3), 38),  // 14 + 21 + 3 = 38
            (Position::new(3, 19), 65), // 14 + 21 + 11 + 19 = 65
        ];

        for (pos, expected) in pos_offset_pairs {
            assert_eq!(make_doc().offset_at(pos), expected);
        }
    }

}
