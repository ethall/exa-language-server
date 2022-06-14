use lsp_types::Url;
use tree_sitter::{Parser, Tree, Node};

use crate::documentation::DocumentationMap;

pub struct Document {
    pub uri: Url,
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
            parser,
            text,
            tree,
            version,
        }
    }

    pub fn resolve_documentation(
        documentation: DocumentationMap,
        node: Node,
    ) -> Option<String> {
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

    pub fn update_and_reparse(&mut self, version: i64, text: String) {
        self.version = version;
        self.text = text.clone();
        self.tree = self
            .parser
            .parse(self.text.clone(), Some(&self.tree))
            .unwrap();
    }
}
