use std::collections::HashMap;
use std::error::Error;
use std::fs::File;
use std::io::BufReader;
use std::path::Path;
use std::sync::{Arc, RwLock};

use serde::Deserialize;

#[derive(Debug, Deserialize)]
pub struct DocumentationItem {
    pub name: String,
    pub key: Option<String>,
    pub description: String,
    pub operands: Option<Vec<String>>,
}
impl DocumentationItem {
    pub fn new(
        name: String,
        key: Option<String>,
        description: String,
        operands: Option<&[String]>,
    ) -> Self {
        return Self {
            name,
            key,
            description,
            operands: match operands {
                Some(ops) => Some(ops.to_vec()),
                None => None,
            },
        };
    }
}

#[derive(Debug, Deserialize)]
struct Documentation {
    pub documentation: Vec<DocumentationItem>,
}

pub type DocumentationMap = HashMap<String, Arc<RwLock<Vec<DocumentationItem>>>>;

pub fn read_from_file<P: AsRef<Path>>(path: P) -> Result<DocumentationMap, Box<dyn Error>> {
    // Open the file in read-only mode with buffer.
    let file = File::open(path).unwrap();
    let reader = BufReader::new(file);

    let docs: Documentation = serde_json::from_reader(reader).unwrap();
    let mut documentation = DocumentationMap::new();
    for item in docs.documentation {
        let key = item.name.clone().to_lowercase();
        if !documentation.contains_key(&key) {
            documentation.insert(key, Arc::new(RwLock::new(vec![item])));
        } else {
            documentation.get(&key).unwrap().write().unwrap().push(item);
        }
    }

    Ok(documentation)
}
