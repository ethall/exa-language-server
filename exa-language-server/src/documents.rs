use lsp_types::Url;
use tree_sitter::{Parser, Tree};

pub struct Document {
    pub uri: Url,
    pub parser: Parser,
    pub tree: Tree,
}
impl Document {
    pub fn new(uri: Url, text: String) -> Self {
        let mut parser = Parser::new();
        parser.set_language(tree_sitter_exa::language()).unwrap();
        let tree = parser.parse(text, None).unwrap();
        Self {
            uri,
            parser,
            tree
        }
    }
}
