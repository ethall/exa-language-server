use lsp_types::request::Request;
use serde::{Deserialize, Serialize};

#[derive(Debug)]
pub enum ReadDocumentation {}
impl Request for ReadDocumentation {
    type Params = ReadDocumentationParams;
    type Result = ();
    const METHOD: &'static str = "exalang/readDocumentation";
}

#[derive(Debug, Eq, PartialEq, Clone, Deserialize, Serialize)]
pub struct ReadDocumentationParams {
    pub uri: String,
}
