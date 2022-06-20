use lsp_text_document::FullTextDocument;
use tree_sitter::{Node, Range};

use crate::{document::Document, location::position_to_point};

/// Returns the text [Range] of the given [Node] before the 1st child,
/// excluding trailing whitespace.
///
/// If the given Node has no children, then its entire Range is returned.
pub fn get_own_text_pointrange(node: &Node, document: &Document) -> Range {
    if node.child_count() == 0 {
        return node.range();
    }

    let mut full_text_doc = FullTextDocument::new(
        document.uri.clone(),
        String::from("exalang"),
        document.version,
        document.text.clone(),
    );
    let child_start_byte = node.child(0).unwrap().start_byte();
    let own_text =
        String::from_utf8(document.text.as_bytes()[node.start_byte()..child_start_byte].to_vec())
            .unwrap();
    let end_byte = node.start_byte() + own_text.split_whitespace().next().unwrap().len();
    return Range {
        start_byte: node.start_byte(),
        end_byte,
        start_point: node.start_position(),
        end_point: position_to_point(&full_text_doc.position_at(end_byte.try_into().unwrap())),
    };
}
