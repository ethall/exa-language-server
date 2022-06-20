use tree_sitter_highlight::HighlightConfiguration;

pub struct ExaHighlight {
    pub config: HighlightConfiguration,
    pub names: Vec<String>,
}
impl ExaHighlight {
    pub fn new() -> Self {
        Self {
            config: HighlightConfiguration::new(
                tree_sitter_exa::language(),
                tree_sitter_exa::HIGHLIGHTS_QUERY,
                "",
                "",
            )
            .unwrap(),
            names: (vec![
                "comment",
                "function",
                "keyword",
                "label",
                "number",
                "operator",
                "variable.builtin",
            ])
            .iter()
            .map(|s| s.to_string())
            .collect(),
        }
    }
}
