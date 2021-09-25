module.exports = grammar({
  name: 'rsh',

  extras: $ => [
	" ",
	"\t",
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => seq(repeat('\n'), repeat($._statement_line)),

    comment: $ => /#[^\n]*\n/,

	_statement_line: $ => seq($._statement, repeat('\n')),

	_statement: $ => choice(
		$.let_statement,
		$._cmd_blk,
	),

	let_statement: $ => seq(
		'let',
		$.var_def,
		';'
	),

	var_def: $ => seq(
		$.identifier,
		'=',
		$._strong_expr,
	),

	_strong_expr: $ => choice(
		$.istr,
		$._value,
		$.identifier
	),

	_expr: $ => choice(
		$.istr,
		$._value,
		$._word,
	),

	_value: $ => choice(
		$.str,
		$.int,
		seq(
			'[', 
			repeat(seq($._strong_expr, ',')), 
			optional($._strong_expr),
			']'
		),
	),

	_cmd_blk: $ => seq(
		'cmd', 
		repeat('\n'), 
		'{', 
		repeat('\n'),
		$._cmd_in_blk,
		//repeat('\n'),
		'}'
	),

	_cmd_in_blk: $ => seq(
		repeat(seq($._cmd_ctx, '\n')), 
		$._cmd_ctx,
		optional('\n'),
	), 

	cmd_vars: $ => seq(
		'let', 
		repeat(seq($.var_def, ',')), 
		optional($.var_def),
		'in',
	),

	_cmd_ctx: $ => seq(optional($.cmd_vars), $._cmd_list),

	_cmd_list: $ => seq(repeat(seq($.cmd_chain, ';')), $.cmd_chain),

	cmd_op: $ => choice(
		'||',
		'&&',
	),

	cmd_chain: $ => choice(
		seq($._cmd_chain_part, $.cmd_op, $.cmd_chain),
		$.pipeline,
	),

	_cmd_chain_part: $ => choice(
		$.pipeline,
		seq('(', $.cmd_chain, ')'),
	),

	pipeline: $ => seq(repeat(seq($.cmd, '|')), $.cmd),

	cmd: $ => seq($._expr, repeat($._expr), repeat($.redir)),

	redir_kind: $ => choice(">", "<", ">>"),

	redir: $ => seq($.redir_kind, $._expr),

	istr: $ => /"(\\[^\n]|[^"\n])*"/,
	int: $ => /[0-9_]+/,
	str: $ => /'(\\[^\n]|[^'\n])*'/,
	identifier: $ => /[a-zA-Z0-9_]+/,
	_word: $ => choice($.identifier, $.word),
	word: $ => /[\w\d:+\-_/.$]+/,
  }
});
