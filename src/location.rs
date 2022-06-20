use lsp_types::Position;
use tree_sitter::Point;

pub fn is_position_within_positionrange(position: &Position, range: &lsp_types::Range) -> bool {
    return position.line >= range.start.line
        && position.character >= range.start.character
        // lsp_types::Range.end is exclusive to the character but not the line.
        && position.line <= range.end.line
        && position.character < range.end.character;
}

pub fn point_to_position(point: &Point) -> Position {
    return Position {
        line: point.row.try_into().unwrap(),
        character: point.column.try_into().unwrap(),
    };
}

pub fn position_to_point(position: &Position) -> Point {
    return Point {
        row: position.line.try_into().unwrap(),
        column: position.character.try_into().unwrap(),
    };
}
