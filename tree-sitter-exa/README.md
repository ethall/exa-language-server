# `tree-sitter-exa`

The generated [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) parser for the [EXA grammar file](./grammar.js).


## Requirements

Interacting with Tree-sitter from the terminal requires that the [tree-sitter-cli](https://github.com/tree-sitter/tree-sitter/tree/master/cli) crate be installed.

1. Open a terminal in the project root. \
    The project root contains a Cargo.toml whose only entry is `[workspace]`.
2. Install and build the crate.
    ```
    $ cargo install tree-sitter-cli
    ```
3. Verify the installation.
    ```
    $ tree-sitter --version
    ```


## Regenerate

If you change the grammar file, then the parser must be regenerated.

0. Ensure the `tree-sitter-cli` crate is installed. (See [Requirements](#requirements).)
1. Open a terminal and navigate to the directory containing this README.
3. Regenerate the parser without language bindings.
    ```
    $ tree-sitter generate --no-bindings
    ```

The bindings don't change much, so they don't need to be regenerated unless you've updated your version of Tree-sitter.


## Test

Changes to the grammar can be verified by re-running Tree-sitter parser tests.

0. Ensure the `tree-sitter-cli` crate is installed. (See [Requirements](#requirements).)
1. Open a terminal and navigate to the directory containing this README.
2. Run the Tree-sitter test command.
    ```
    $ tree-sitter test
    ```
