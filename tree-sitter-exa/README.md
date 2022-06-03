# `tree-sitter-exa`

The generated tree-sitter parser for the [EXA grammar file](./grammar.js).

## Regenerate

If you change the grammar file, then the parser must be regenerated.

1. Open a terminal in the project root. \
    The project root contains a Cargo.toml who only entry is `[workspace]`.
2. Install [tree-sitter-cli](https://github.com/tree-sitter/tree-sitter/tree/master/cli).
    ```
    $ cargo install tree-sitter-cli
    ```
3. Change to the directory containing this README and regenerate the parser without language bindings.
    ```
    $ cd tree-sitter-exa && tree-sitter generate --no-bindings
    ```

The bindings don't change much, so they don't need to be regenerated unless you've updated your version of `tree-sitter`.
