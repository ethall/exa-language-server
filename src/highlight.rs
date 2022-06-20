use tree_sitter_highlight::{HighlightConfiguration, HighlightEvent, Highlighter};

pub struct ExaHighlighter {
    pub config: HighlightConfiguration,
    highlighter: Highlighter,
    pub names: Vec<String>,
}
impl ExaHighlighter {
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
            highlighter: Highlighter::new(),
            names: Vec::from_iter(names.iter().map(|s| s.to_string())),
        }
    }

    pub fn highlight(&mut self, source: String) {
        let highlights = self
            .highlighter
            .highlight(&self.config, source.as_bytes(), None, |_| None)
            .unwrap();

        for event in highlights {
            match event.unwrap() {
                HighlightEvent::Source { start, end } => {
                    eprintln!("source: {}-{}", start, end);
                }
                HighlightEvent::HighlightStart(s) => {
                    eprintln!("highlight style started: {:?}", s);
                }
                HighlightEvent::HighlightEnd => {
                    eprintln!("highlight style ended");
                }
            }
        }
    }
}
