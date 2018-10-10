module.exports = grammar ({
    name: 'lwtools6809',

    rules: {
        // a source file is parsed line by line
        source_file: $ => repeat1($._line),

        // a line has up to four fields
        _line: $ => seq(
            optional(seq($.label, ':')),    // label field
            optional($._instruction),       // opcode, assembler directive, or pseudo opcode
            optional($._operand),           // operand(s)
            optional($._comment),           // commend field
            $._line_break                   // end of line
        ),

        // line break
        _line_break: $ => '\n',

        // labels, identifiers, symbols
        // TODO: Check label length, ".:" legal?
        label: $ => seq(optional(/[\@\?]/), $._identifier),
        _identifier: $ => /[a-zA-Z\.\_][a-zA-Z0-9\.\_\$]*/,

        // instructions
        _instruction: $ => choice(
            $.opcode
        ),

        // opcode
        opcode: $ => 'nop',

        // operand
        _operand: $ => 'operand',

        // comments
        _comment: $ => choice(
            $.line_comment
        ),

        // line comments
        line_comment: $ => /\;.*/

    }
});
