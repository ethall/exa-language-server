[
    (copy)
    (addi)
    (subi)
    (muli)
    (divi)
    (modi)
    (swiz)
    (mark)
    (jump)
    (tjmp)
    (fjmp)
    (test)
    (repl)
    (halt)
    (kill)
    (link)
    (host)
    (mode)
    (void)
    (make)
    (grab)
    (file)
    (seek)
    (drop)
    (wipe)
    (noop)
    (rand)
] @function

; REGISTERS
;----------

(register (_) @variable.builtin)

; PRIMATIVES
;-----------

(binary_operator) @operator

(eof) @keyword

(label) @label

(mrd) @keyword

(number) @number

(comment) @comment
