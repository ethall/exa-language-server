use tree_sitter_highlight::HighlightConfiguration;

pub struct ExaHighlight {
    pub config: HighlightConfiguration,
    pub names: Vec<String>,
}
impl ExaHighlight {
    pub fn new() -> Self {
        let names = &[
            "comment",
            "function",
            "keyword",
            "label",
            "number",
            "operator",
            "variable.builtin",
        ];
        let mut config = HighlightConfiguration::new(
            tree_sitter_exa::language(),
            tree_sitter_exa::HIGHLIGHTS_QUERY,
            "",
            "",
        )
        .unwrap();
        config.configure(names);
        Self {
            config,
            names: Vec::from_iter(names.iter().map(|s| s.to_string())),
        }
    }
}
