module.exports = grammar({
    name: 'exa',

    extras: $ => [
        $.comment,
        /[ ]|\r?\n/
    ],

    rules: {
        exa: $ => repeat($._statement),

        /* PRIMARY RULE */

        _statement: $ => choice(
            $.copy,
            $.addi,
            $.subi,
            $.muli,
            $.divi,
            $.modi,
            $.swiz,
            $.mark,
            $.jump,
            alias($.true_jump, $.tjmp),
            alias($.false_jump, $.fjmp),
            $.test,
            $.repl,
            $.halt,
            $.kill,
            $.link,
            $.host,
            $.mode,
            $.void,
            $.make,
            $.grab,
            $.file,
            $.seek,
            $.drop,
            $.wipe,
            $.noop,
            $.rand,
        ),

        /* MANIPULATING VALUES */

        copy: $ => seq(
            /[cC][oO][pP][yY]/,
            choice($.register, $.number),
            $.register
        ),

        addi: $ => seq(
            /[aA][dD]{2}[iI]/,
            choice($.register, $.number),
            choice($.register, $.number),
            $.register
        ),

        subi: $ => seq(
            /[sS][uU][bB][iI]/,
            choice($.register, $.number),
            choice($.register, $.number),
            $.register
        ),

        muli: $ => seq(
            /[mM][uU][lL][iI]/,
            choice($.register, $.number),
            choice($.register, $.number),
            $.register
        ),

        divi: $ => seq(
            /[dD][iI][vV][iI]/,
            choice($.register, $.number),
            choice($.register, $.number),
            $.register
        ),

        modi: $ => seq(
            /[mM][oO][dD][iI]/,
            choice($.register, $.number),
            choice($.register, $.number),
            $.register
        ),

        swiz: $ => seq(
            /[sS][wW][iI][zZ]/,
            choice($.register, $.number),
            choice($.register, $.number),
            $.register
        ),

        /* BRANCHING */

        mark: $ => seq(
            /[mM][aA][rR][kK]/,
            $.label
        ),

        jump: $ => seq(
            /[jJ][uU][mM][pP]/,
            $.label
        ),

        true_jump: $ => seq(
            /[tT][jJ][mM][pP]/,
            $.label
        ),

        false_jump: $ => seq(
            /[fF][jJ][mM][pP]/,
            $.label
        ),

        /* TESTING VALUES */

        test: $ => seq(
            /[tT][eE][sS][tT]/,
            choice(
                seq(choice($.register, $.number), $.binary_operator, choice($.register, $.number)),
                $.eof,
                $.mrd
            )
        ),

        /* LIFECYCLE */

        repl: $ => seq(
            /[rR][eE][pP][lL]/,
            $.label
        ),

        halt: $ => /[hH][aA][lL][tT]/,

        kill: $ => /[kK][iI][lL]{2}/,

        /* MOVEMENT */

        link: $ => seq(
            /[lL][iI][nN][kK]/,
            choice($.register, $.number)
        ),

        host: $ => seq(
            /[hH][oO][sS][tT]/,
            $.register
        ),

        /* COMMUNICATION */

        mode: $ => /[mM][oO][dD][eE]/,

        void: $ => seq(
            /[vV][oO][iI][dD]/,
            choice(
                alias($._register_f, $.f),
                alias($._register_m, $.m)
            )
        ),

        // test mrd     (See test in "TESTING VALUES".)

        /* FILE MANIPULATION */

        make: $ => /[mM][aA][kK][eE]/,

        grab: $ => seq(
            /[gG][rR][aA][bB]/,
            choice($.register, $.number)
        ),

        file: $ => seq(
            /[fF][iI][lL][eE]/,
            $.register
        ),

        seek: $ => seq(
            /[sS][eE]{2}[kK]/,
            choice($.register, $.number)
        ),

        // void f       (See void in "COMMUNICATION".)

        drop: $ => /[dD][rR][oO][pP]/,

        wipe: $ => /[wW][iI][pP][eE]/,

        // test eof     (See test in "TESTING VALUES".)

        /* MISCELLANEOUS */

        // note + semicolon comment
        comment: $ => choice(
            seq(/[nN][oO][tT][eE]/, /.*/),
            seq(';', /.*/)
        ),

        noop: $ => /[nN][oO]{2}[pP]/,

        rand: $ => seq(
            /[rR][aA][nN][dD]/,
            choice($.register, $.number),
            choice($.register, $.number),
            $.register
        ),

        /* REGISTERS */

        _register_f: $ => /[fF]/,

        _register_hardware: $ => /#[a-zA-Z]{4}/,

        _register_m: $ => /[mM]/,

        _register_t: t => /[tT]/,

        _register_x: $ => /[xX]/,

        register: $ => choice(
            alias($._register_f, $.f),
            alias($._register_hardware, $.hardware),
            alias($._register_m, $.m),
            alias($._register_t, $.t),
            alias($._register_x, $.x)
        ),

        /** PRIMATIVES */

        binary_operator: $ => {
            const equal = '='
            const greater = '>'
            const less = '<'

            return token(choice(equal, greater, less))
        },

        eof: $ => token(/[eE][oO][fF]/),

        label: $ => token(/[a-zA-Z0-9_]{1,19}/),

        mrd: $ => token(/[mM][rR][dD]/),

        number: $ => {
            const digits = /[0-9]{1,4}/
            const signs = choice('-', '+')

            const integer_literal = seq(optional(signs), digits)

            return token(integer_literal)
        },
    }
})
