use std::error::Error;
use std::fs::File;
use std::io::BufReader;
use std::path::Path;

use serde::Deserialize;

#[derive(Debug, Deserialize)]
struct DocumentationItem {
    pub name: String,
    pub description: String,
    pub operands: Option<Vec<String>>
}
impl DocumentationItem {
    pub fn new(name: String, description: String, operands: Option<&[String]>) -> Self {
        return Self {
            name: name.to_string(),
            description: description.to_string(),
            operands: match operands {
                Some(ops) => Some(ops.to_vec()),
                None => None,
            }
        }
    }
}

#[derive(Debug, Deserialize)]
struct Documentation {
    documentation: Vec<DocumentationItem>
}

pub fn read_from_file<P: AsRef<Path>>(path: P) -> Result<(), Box<dyn Error>> {
    // Open the file in read-only mode with buffer.
    let file = File::open(path).unwrap();
    let reader = BufReader::new(file);

    let v: Documentation = serde_json::from_reader(reader).unwrap();

    eprintln!("{:?}", v);

    Ok(())
}
