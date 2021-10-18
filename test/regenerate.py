from enum import Enum, unique
from typing import Any, Iterator, Optional, Union, overload
import itertools
import numpy.random as nprand
import random


MAX_NUMBER = +9999
MIN_NUMBER = -9999

_generator = nprand.default_rng()


class LastElementLoop(Iterator[str]):
    _data: tuple[str, ...]
    _index: int

    def __init__(self, *args: str) -> None:
        super().__init__()
        self._data = args
        self.reset()

    def __iter__(self) -> Iterator[str]:
        return super().__iter__()

    def __next__(self) -> str:
        self._index += 1
        # Return the last element forever.
        if self._index == len(self._data):
            self._index -= 1
        return self._data[self._index]

    def reset(self) -> None:
        self._index = -1


def operator(ops: list[str]) -> Iterator[str]:
    mutable_ops: list[str] = []
    while True:
        if len(mutable_ops) == 0:
            mutable_ops = ops.copy()
        yield mutable_ops.pop(
            _generator.integers(low=0, high=len(mutable_ops), size=1)[0]
        )


def roll() -> Iterator[str]:
    def digit_count(x: int) -> int:
        # Things get complicated when the given number is
        # a factor of 10, so increase by 1.
        numerator = abs(x) if x % 10 != 0 else abs(x) + 1
        digits = 1
        # Keep dividing by powers of 10 until the whole
        # number is 0.
        while numerator // (10 ** digits) > 0:
            digits += 1
        return digits

    max_digits = digit_count(MAX_NUMBER)

    while True:
        value = int(_generator.normal(loc=0, scale=900, size=1)[0])
        sign = ""
        if value >= 0:
            # I just like the distribution of this one more for how often
            # signs ought to appear.
            sign = ["", "+"][random.randint(0, 1)]

        zero_padding = ""
        digits = digit_count(value)
        if digits < max_digits:
            # Most numbers shouldn't have padding, so decide whether to add
            # some to this number by using a random number from a standard
            # normal distribution.
            # If the number is not in the range [-1, 1], then padding is added.
            sample = _generator.standard_normal()
            if sample < -1.5 or sample > +1.5:
                zero_padding = "0" * (max_digits - digits)

        if value < 0:
            sign = "-"
            value = abs(value)
            yield f"{sign}{zero_padding}{value}"
        else:
            yield f"{sign}{zero_padding}{value}"


# avoid_dupes is whether we ought to consider capitialization variants
#   as the same value when deciding what to print.
def shuffle(content: list[list[str]], avoid_dupes: bool = True) -> Iterator[str]:
    def copy_content() -> Union[list[str], list[list[str]]]:
        if avoid_dupes:
            return [i.copy() for i in content]
        else:
            return [j for i in content for j in i]

    mutable_registers: Union[list[str], list[list[str]]]
    mutable_registers = copy_content()
    while True:
        # copy another list if we've run out of items
        if len(mutable_registers) == 0:
            mutable_registers = copy_content()

        selection: Union[str, list[str]]
        # choose a random index
        selection = mutable_registers.pop(random.randint(0, len(mutable_registers) - 1))
        if isinstance(selection, str):
            # do not avoid dupes
            yield selection
        else:
            # choose another random index
            variant: str = selection.pop(random.randint(0, len(selection) - 1))
            yield variant


REGISTERS: Iterator[str] = shuffle(
    [
        ["X", "x"],
        ["T", "t"],
        ["M", "m"],
        ["F", "f"],
    ]
)
HARDWARE: Iterator[str] = shuffle(
    [
        ["#DATA", "#Data", "#data"],
        ["#PAGE", "#Page", "#page"],
        ["#DIAL", "#Dial", "#dial"],
        ["#NERV", "#Nerv", "#nerv"],
    ]
)
NUMBERS: Iterator[str] = roll()
LABELS: Iterator[str] = shuffle(
    [
        ["FOO", "Foo", "foo"],
        ["BAR", "Bar", "bar"],
        ["BAZ", "Baz", "baz"],
        ["FOO_BAR", "Foo_bar", "foo_bar"],
        ["FOO_BAR_BAZ", "Foo_Bar_Baz", "foo_bar_baz"],
        ["ZORKGORK_BORK", "ZorkGork_Bork", "zorkgork_bork"],
    ]
)
OPERATORS: Iterator[str] = operator(["=", ">", "<"])
EOF: Iterator[str] = shuffle([["EOF", "EoF", "eof"]])
MRD: Iterator[str] = shuffle([["MRD", "MRd", "mrd"]])

CASE_STYLE: LastElementLoop = LastElementLoop("^^^^", "^___", "____", "????")


def apply_case_style(target: str, style: str) -> str:
    result = ""
    for group in zip(target, style):
        t, s = group
        if s == "^":
            result += t.upper()
        elif s == "_":
            result += t.lower()
        elif s == "?":
            result += t.upper() if bool(random.randint(0, 1)) else t.lower()
        else:
            raise ValueError(f"Unknown case style -- {s}")
    return result


@unique
class ParamType(Enum):
    REGISTER = "register"
    HARDWARE = "hardware"
    NUMBER = "number"
    LABEL = "label"
    BINARY_OPERATOR = "binary_operator"
    EOF = "eof"
    MRD = "mrd"
    F = "f"
    M = "m"


class Param:
    _value_cache: Optional[str]
    type: ParamType

    @overload
    def __init__(self, type: ParamType) -> None:
        ...

    @overload
    def __init__(self, type: str) -> None:
        ...

    def __init__(self, type: Any):
        self._value_cache = None
        if isinstance(type, str):
            self.type = ParamType(type.lower())
        else:
            self.type = type

    @property
    def name(self) -> str:
        if self.type == ParamType.HARDWARE:
            return ParamType.REGISTER.name.lower()
        return self.type.name.lower()

    @property
    def value(self) -> str:
        if self._value_cache is None:
            if self.type == ParamType.REGISTER:
                self._value_cache = next(REGISTERS)
            elif self.type == ParamType.HARDWARE:
                self._value_cache = next(HARDWARE)
            elif self.type == ParamType.NUMBER:
                self._value_cache = next(NUMBERS)
            elif self.type == ParamType.LABEL:
                self._value_cache = next(LABELS)
            elif self.type == ParamType.BINARY_OPERATOR:
                self._value_cache = next(OPERATORS)
            elif self.type == ParamType.EOF:
                self._value_cache = next(EOF)
            elif self.type == ParamType.MRD:
                self._value_cache = next(MRD)
            elif self.type == ParamType.F or self.type == ParamType.M:
                self._value_cache = apply_case_style(self.type.name, "?")
            else:
                raise TypeError(f"Unsupported ParamType -- {self.type}")
        return self._value_cache

    def as_tree(self) -> str:
        if self.type == ParamType.REGISTER:
            return f"({self.name} ({self.value.lower()}))"
        elif self.type == ParamType.HARDWARE:
            return f"({self.name} ({self.type.name.lower()}))"
        elif (
            self.type == ParamType.NUMBER
            or self.type == ParamType.LABEL
            or self.type == ParamType.BINARY_OPERATOR
            or self.type == ParamType.EOF
            or self.type == ParamType.MRD
            or self.type == ParamType.F
            or self.type == ParamType.M
        ):
            return f"({self.name})"
        else:
            raise TypeError(f"Unsupported ParamType -- {self.type}")

    @staticmethod
    def parse(subrule: str) -> list["Param"]:
        params: list[Param] = []
        for t in subrule.split("|"):
            params.append(Param(t))
        return params


# addi register|hardware|number register|hardware|number register
class Rule:
    _permutation_cache: Optional[list["Rule"]]
    name: str
    #       parameter list
    #        |   valid parameter types
    #        ↓    ↓
    params: list[list[Param]]

    def __init__(self, line: str) -> None:
        self._permutation_cache = None
        self.params = []

        words = line.split(" ")
        name = words.pop(0)
        for subrule in words:
            self.params.append(Param.parse(subrule))

        if name == ";" or name == "NOTE":
            self.name = "comment"
        else:
            self.name = name.lower()

    def as_tests(self) -> str:
        variations: list[str] = []
        for permutations in self.parameter_permutations():
            parameters = ""
            for param in permutations.params:
                parameters += " " + param[0].value
            name = apply_case_style(self.name, next(CASE_STYLE))
            variations.append(name + parameters)
        return "\n".join(variations)

    def as_tree(self) -> str:
        variations: list[str] = []
        for permutations in self.parameter_permutations():
            parameters: list[str] = [
                param[0].as_tree() for param in permutations.params
            ]
            separator = " " if len(parameters) > 0 else ""
            variations.append(f"({self.name}{separator}" + " ".join(parameters) + ")")
        return " ".join(variations)

    def parameter_permutations(self) -> list["Rule"]:
        if self._permutation_cache is None:
            self._permutation_cache = []
            # Cartesian product of all given iterables.
            param_perms: list[tuple[Param]] = list(itertools.product(*self.params))  # type: ignore
            for variant in param_perms:
                rule = Rule(self.name)
                rule.params = [[Param(p.type)] for p in variant]
                self._permutation_cache.append(rule)
        return self._permutation_cache


class Root:
    name = "exa"
    rules: list[Rule]

    def __init__(self, lines: list[str]) -> None:
        self.rules = []
        for l in lines:
            self.rules.append(Rule(l))

    def as_tests(self) -> str:
        tests: list[str] = []
        for r in self.rules:
            tests.append(r.as_tests())
        CASE_STYLE.reset()
        return "\n".join(tests)

    def as_tree(self) -> str:
        rules = ""
        for r in self.rules:
            separator = " " if len(rules) > 0 else ""
            rules += separator + r.as_tree()
        return f"({self.name} {rules})"


class TreeSitterTest:
    indent: str
    name: str
    root: Root

    def __init__(self, name: str, root: Root, indent: str = "    ") -> None:
        self.indent = indent
        self.name = name
        self.root = root

    def __str__(self) -> str:
        content: list[str] = [
            "====",
            self.name,
            "====",
            "",
            self.root.as_tests(),
            "",
            "---",
            "",
            self.format_tree(self.root.as_tree()),
            "",
        ]
        return "\n".join(content)

    def format_tree(self, tree: str) -> str:
        result = ""
        indent_level = 0
        for i in range(len(tree)):
            if tree[i] == " " and tree[i + 1] == "(":
                indent_level += 1
                result += "\n" + (self.indent * indent_level)
                continue
            elif tree[i] == ")":
                indent_level -= 1
            result += tree[i]
        return result

    @property
    def filename(self) -> str:
        return self.name + ".txt"


if __name__ == "__main__":
    import os.path

    rules: list[list[str]] = [
        ["addi register|hardware|number register|hardware|number register|hardware"],
        ["copy register|hardware|number register|hardware"],
        ["divi register|hardware|number register|hardware|number register|hardware"],
        ["drop"] * 3,
        ["file register|hardware"],
        ["fjmp label"] * 3,
        ["grab register|hardware|number"],
        ["halt"] * 3,
        ["host register|hardware"],
        ["jump label"] * 3,
        ["kill"] * 3,
        ["link register|hardware|number"],
        ["make"] * 3,
        ["mark label"] * 3,
        ["mode"] * 3,
        ["modi register|hardware|number register|hardware|number register|hardware"],
        ["muli register|hardware|number register|hardware|number register|hardware"],
        ["noop"] * 3,
        ["rand register|hardware|number register|hardware|number register|hardware"],
        ["repl label"] * 3,
        ["seek register|hardware|number"],
        ["subi register|hardware|number register|hardware|number register|hardware"],
        ["swiz register|hardware|number register|hardware|number register|hardware"],
        [
            "test register|hardware|number binary_operator register|hardware|number",
            "test eof",
            "test eof",
            "test eof",
            "test mrd",
            "test mrd",
            "test mrd",
        ],
        ["tjmp label"] * 3,
        ["void f|m"] * 3,
        ["wipe"] * 3,
        # # TODO comment is broken
    ]

    tests: list[TreeSitterTest] = []
    for r in rules:
        tests.append(TreeSitterTest(r[0].split(" ")[0], Root(r)))

    for t in tests:
        filepath = os.path.join(os.path.dirname(__file__), "generated", t.filename)
        with open(filepath, "w+", encoding="utf-8", newline="\n") as f:
            f.write(str(t))
