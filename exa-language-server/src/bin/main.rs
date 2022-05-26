use std::collections::HashMap;
use std::error::Error;

use lsp_server::{Connection, Message, Notification, Request, RequestId};
use lsp_types::notification::{DidChangeTextDocument, DidCloseTextDocument, DidOpenTextDocument};
use lsp_types::{
    InitializedParams, ServerCapabilities, TextDocumentSyncCapability, TextDocumentSyncKind, Url,
};

use exa_language_server::documents::Document;

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
    let mut documents: HashMap<Url, Document> = HashMap::new();
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
                                Document::new(params.text_document.uri, params.text_document.text),
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
