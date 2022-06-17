use std::collections::HashMap;
use std::error::Error;
use std::sync::{Arc, RwLock};

use exa_language_server::document::Document;
use exa_language_server::documentation::{read_from_file, DocumentationMap};
use exa_language_server::request::ReadDocumentation;
use exa_language_server::response::{empty_response, make_response};
use lsp_server::{Connection, Message, Notification, Request, RequestId};
use lsp_text_document::FullTextDocument;
use lsp_types::notification::{
    DidChangeTextDocument, DidCloseTextDocument, DidOpenTextDocument, DidSaveTextDocument,
};
use lsp_types::request::HoverRequest;
use lsp_types::{
    Hover, HoverContents, HoverProviderCapability, InitializedParams, MarkupContent, Position,
    Range, ServerCapabilities, TextDocumentSyncCapability, TextDocumentSyncKind, Url,
};
use tree_sitter::{InputEdit, Point};

fn main() -> Result<(), Box<dyn Error + Sync + Send>> {
    eprintln!("starting EXA LSP server");
    let (connection, io_threads) = Connection::stdio();

    let capabilities = serde_json::to_value(ServerCapabilities {
        text_document_sync: Some(TextDocumentSyncCapability::Kind(
            TextDocumentSyncKind::Incremental,
        )),
        // completion_provider: Some(CompletionOptions {
        //     resolve_provider: Some(true),
        //     ..CompletionOptions::default()
        // }),
        hover_provider: Some(HoverProviderCapability::Simple(true)),
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
    let mut documentation: DocumentationMap = HashMap::new();
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
                let request = match extract_request::<ReadDocumentation>(request) {
                    Ok((id, params)) => {
                        eprintln!(
                            "read documentation request -> {{id: {:?}, params: {:?}}}",
                            id, params
                        );
                        let url = Url::parse(params.uri.as_str()).unwrap();
                        let path = url.to_file_path().unwrap();
                        documentation = read_from_file(path).unwrap();

                        connection
                            .sender
                            .send(make_response(id, "ReadDocumentation OK"))
                            .unwrap();
                        continue;
                    }
                    Err(request) => request,
                };
                let request = match extract_request::<HoverRequest>(request) {
                    Ok((id, params)) => {
                        let document = documents
                            .get(&params.text_document_position_params.text_document.uri)
                            .unwrap()
                            .read()
                            .unwrap();
                        let point =
                            position_to_point(&params.text_document_position_params.position);
                        let node = document
                            .tree
                            .root_node()
                            .named_descendant_for_point_range(point, point)
                            .unwrap();
                        eprintln!("{:?}", node.to_sexp());

                        // FIXME: This clones the entire documentation and ought to be done more efficiently.
                        match Document::resolve_documentation(documentation.clone(), node) {
                            Some(result) => {
                                // Construct the result field of the Response.
                                let hover = Hover {
                                    contents: HoverContents::Markup(MarkupContent {
                                        kind: lsp_types::MarkupKind::Markdown,
                                        value: result,
                                    }),
                                    range: Some(Range {
                                        start: point_to_position(&node.start_position()),
                                        end: point_to_position(&node.end_position()),
                                    }),
                                };
                                // Send it.
                                connection.sender.send(make_response(id, hover)).unwrap();
                            }
                            None => {
                                // Send nothing.
                                connection.sender.send(empty_response(id)).unwrap();
                            }
                        }
                        continue;
                    }
                    Err(request) => request,
                };
                eprintln!("nothing handles request {:?}", request);
            }
            Message::Response(response) => {
                eprintln!("handling as a Response");
                eprintln!("nothing handles response {:?}", response);
            }
            Message::Notification(notification) => {
                eprintln!("handling as a Notification");
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
                        document
                            .write()
                            .unwrap()
                            .update_and_reparse(text_document.version, text_document.text);
                        eprintln!("{:?}", document.read().unwrap().tree.root_node().to_sexp());
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
                let notification = match extract_notification::<DidSaveTextDocument>(notification) {
                    Ok(params) => {
                        eprintln!("DidSaveTextDocument -> {:?}", params);
                        if documents.contains_key(&params.text_document.uri) {
                            let document = documents.get(&params.text_document.uri).unwrap();
                            eprintln!(
                                "we think the document looks like:\n{:?}",
                                document.read().unwrap().text
                            );
                            eprintln!(
                                "and has an AST like:\n{:?}",
                                document.read().unwrap().tree.root_node().to_sexp()
                            );
                        }
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

fn extract_request<R>(request: Request) -> Result<(RequestId, R::Params), Request>
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

fn point_to_position(point: &Point) -> Position {
    return Position {
        line: point.row.try_into().unwrap(),
        character: point.column.try_into().unwrap(),
    };
}
