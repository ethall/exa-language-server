use lsp_types::Url;
use tree_sitter::{Parser, Tree};

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
            version
        }
    }

    pub fn update_and_reparse(&mut self, version: i64, text: String) {
        self.version = version;
        self.text = text.clone();
        self.tree = self.parser.parse(self.text.clone(), Some(&self.tree)).unwrap();
    }
}
