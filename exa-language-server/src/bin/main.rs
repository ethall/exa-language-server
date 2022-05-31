use std::collections::HashMap;
use std::error::Error;
use std::sync::{Arc, RwLock};

use lsp_server::{Connection, Message, Notification, Request, RequestId};
use lsp_text_document::FullTextDocument;
use lsp_types::notification::{DidChangeTextDocument, DidCloseTextDocument, DidOpenTextDocument};
use lsp_types::{
    InitializedParams, Position, ServerCapabilities, TextDocumentSyncCapability,
    TextDocumentSyncKind, Url,
};

use exa_language_server::documents::Document;
use tree_sitter::{InputEdit, Point};

fn main() -> Result<(), Box<dyn Error + Sync + Send>> {
    eprintln!("starting EXA LSP server");
    let (connection, io_threads) = Connection::stdio();

    let capabilities = serde_json::to_value(ServerCapabilities {
        text_document_sync: Some(TextDocumentSyncCapability::Kind(
            TextDocumentSyncKind::Incremental,
        )),
        // Default is None for all fields.
        ..ServerCapabilities::default()
    })
    .unwrap();
    let init_params = connection.initialize(capabilities)?;

    handle_messages(connection, init_params)?;

    eprintln!("stopping EXA LSP server");
    io_threads.join()?;
    Ok(())
}

fn handle_messages(
    connection: Connection,
    init_params: serde_json::Value,
) -> Result<(), Box<dyn Error + Sync + Send>> {
    let mut documents: HashMap<Url, Arc<RwLock<Document>>> = HashMap::new();
    let _init_params: InitializedParams = serde_json::from_value(init_params).unwrap();
    for msg in &connection.receiver {
        eprintln!("received message: {:?}", msg);
        match msg {
            Message::Request(request) => {
                eprintln!("handling as a Request");
                if connection.handle_shutdown(&request)? {
                    eprintln!("shutdown request -> {:?}", request);
                    return Ok(());
                }
                eprintln!("nothing handles request {:?}", request);
            }
            Message::Response(response) => {
                eprintln!("handling as a Response");
                eprintln!("nothing handles response {:?}", response);
            }
            Message::Notification(notification) => {
                eprintln!("handling as a Notification");
                // TODO: this is probably a mess of ownership transfers.
                let notification = match extract_notification::<DidOpenTextDocument>(notification) {
                    Ok(params) => {
                        eprintln!("DidOpenTextDocumentParams -> {:?}", params);
                        let prev_size = documents.len();
                        if !documents.contains_key(&params.text_document.uri) {
                            documents.insert(
                                params.text_document.uri.clone(),
                                Arc::new(RwLock::new(Document::new(
                                    params.text_document.uri,
                                    params.text_document.version.into(),
                                    params.text_document.text,
                                ))),
                            );
                        }
                        eprintln!("open documents: {:?} -> {:?}", prev_size, documents.len());
                        continue;
                    }
                    Err(notification) => notification,
                };
                let notification = match extract_notification::<DidChangeTextDocument>(notification)
                {
                    Ok(params) => {
                        eprintln!("DidChangeTextDocument -> {:?}", params);
                        //let document: &mut Document = documents.get(&params.text_document.uri).unwrap();
                        let document = documents.get(&params.text_document.uri).unwrap();
                        let mut text_document = FullTextDocument::new(
                            document.read().unwrap().uri.clone(),
                            String::from("exalang"),
                            document.read().unwrap().version,
                            document.read().unwrap().text.clone(),
                        );
                        for change_event in params.content_changes {
                            let range = change_event.range.unwrap();
                            let start_offset = text_document.offset_at(range.start);
                            let end_offset = text_document.offset_at(range.end);
                            let (start_byte, old_end_byte) = text_document
                                .transform_offset_to_byte_offset(start_offset, end_offset);
                            text_document.update(
                                vec![change_event.clone()],
                                params.text_document.version.into(),
                            );
                            let new_end_byte = start_byte
                                + change_event
                                    .text
                                    .chars()
                                    .fold(0, |acc, c| acc + c.len_utf8());
                            let new_end_position =
                                text_document.position_at(new_end_byte.try_into().unwrap());
                            /*
                             *                  8
                             *          fn test(|) {}
                             *
                             *          fn test(a: u32|) {}
                             *                        14
                             * Change:
                             *  text: "a: u32"
                             *    length: 6
                             *  range:
                             *    start:
                             *      line: 0
                             *      character: 8
                             *    end:
                             *      line: 0
                             *      character: 8
                             *  range_len: 0
                             */
                            let input_edit = InputEdit {
                                start_byte,
                                old_end_byte,
                                new_end_byte,
                                start_position: position_to_point(&range.start),
                                old_end_position: position_to_point(&range.end),
                                new_end_position: position_to_point(&new_end_position),
                            };
                            document.write().unwrap().tree.edit(&input_edit);
                        }
                        continue;
                    }
                    Err(notification) => notification,
                };
                let notification = match extract_notification::<DidCloseTextDocument>(notification)
                {
                    Ok(params) => {
                        eprintln!("DidCloseTextDocument -> {:?}", params);
                        let prev_size = documents.len();
                        documents.remove(&params.text_document.uri);
                        eprintln!("open documents: {:?} -> {:?}", prev_size, documents.len());
                        continue;
                    }
                    Err(notification) => notification,
                };
                eprintln!("nothing handles notification {:?}", notification);
            }
        }
    }
    Ok(())
}

fn extract_request<R>(request: &Request) -> Result<(RequestId, R::Params), Request>
where
    R: lsp_types::request::Request,
    R::Params: serde::de::DeserializeOwned,
{
    request.to_owned().extract(R::METHOD)
}

fn extract_notification<N>(notification: Notification) -> Result<N::Params, Notification>
where
    N: lsp_types::notification::Notification,
    N::Params: serde::de::DeserializeOwned,
{
    notification.extract(N::METHOD)
}

fn position_to_point(position: &Position) -> Point {
    return Point {
        row: position.line.try_into().unwrap(),
        column: position.character.try_into().unwrap(),
    };
}
