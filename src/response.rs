use lsp_server::{Message, RequestId, Response};

pub fn empty_response(id: RequestId) -> Message {
    return Message::Response(Response {
        id,
        result: Some(serde_json::to_value("").unwrap()),
        error: None,
    });
}
pub fn make_response<T>(id: RequestId, result: T) -> Message
where
    T: serde::Serialize,
{
    return Message::Response(Response {
        id,
        result: Some(serde_json::to_value(&result).unwrap()),
        error: None,
    });
}
