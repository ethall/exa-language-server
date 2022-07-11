use std::collections::HashMap;
use std::error::Error;
use std::sync::{Arc, RwLock};

use exa_language_server::document::Document;
use exa_language_server::documentation::{read_from_file, DocumentationMap};
use exa_language_server::location::{
    is_position_within_positionrange, pointrange_to_positionrange, position_to_point,
};
use exa_language_server::node::get_own_text_pointrange;
use exa_language_server::request::ReadDocumentation;
use exa_language_server::response::{empty_response, make_response};
use lsp_server::{Connection, Message, Notification, Request, RequestId};
use lsp_types::notification::{
    DidChangeTextDocument, DidCloseTextDocument, DidOpenTextDocument, DidSaveTextDocument,
};
use lsp_types::request::HoverRequest;
use lsp_types::{
    Hover, HoverContents, HoverProviderCapability, InitializedParams, MarkupContent,
    ServerCapabilities, TextDocumentSyncCapability, TextDocumentSyncKind, Url,
};

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
                        eprintln!("{:?}", point);
                        eprintln!("{:?}", node.to_sexp());

                        // Only display hover when the cursor is within the own text of this node.
                        // Excludes text of child nodes.
                        //  ❌ TEST X | = T
                        //  ✅ TE|ST X = T
                        let text_positionrange =
                            pointrange_to_positionrange(&get_own_text_pointrange(&node, &document));
                        if !is_position_within_positionrange(
                            &params.text_document_position_params.position,
                            &text_positionrange,
                        ) {
                            connection.sender.send(empty_response(id)).unwrap();
                            continue;
                        }

                        // FIXME: This clones the entire documentation and ought to be done more efficiently.
                        match Document::resolve_documentation(documentation.clone(), node) {
                            Some(result) => {
                                // Construct the result field of the Response.
                                let hover = Hover {
                                    contents: HoverContents::Markup(MarkupContent {
                                        kind: lsp_types::MarkupKind::Markdown,
                                        value: result,
                                    }),
                                    range: Some(text_positionrange),
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
                        let document = documents.get(&params.text_document.uri).unwrap();
                        document
                            .write()
                            .unwrap()
                            .update(params.content_changes, params.text_document.version.into());
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
                            let text = document.read().unwrap().text.clone();
                            eprintln!("we think the document looks like:\n{:?}", text);
                            eprintln!(
                                "and has an AST like:\n{:?}",
                                document.read().unwrap().tree.root_node().to_sexp()
                            );
                            document.write().unwrap().highlighter.highlight(text);
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
