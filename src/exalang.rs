use tree_sitter::{LanguageError, Parser};

pub struct ExaLang {
    pub parser: tree_sitter::Parser
}
impl ExaLang {
    pub fn new() -> Result<ExaLang, LanguageError> {
        let mut parser = Parser::new();
        parser.set_language(tree_sitter_exa::language())?;
        Ok(ExaLang { parser })
    }
}
