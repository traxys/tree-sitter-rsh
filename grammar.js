module.exports = grammar({
  name: 'rsh',

  extras: $ => [
	" ",
	"\t",
  ],

  rules: {
    // TODO: rshcmd injection
    source_file: $ => seq(repeat('\n'), repeat($._statement_line)),

    comment: $ => /#[^\n]*\n/,

	_statement_line: $ => seq($._statement, repeat('\n')),

	_statement: $ => choice(
		$.comment,
		$.let_statement,
		$._cmd_blk,
		seq($._strong_expr, ";"),
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
		$.identifier_value,
		$.call,
	),

	identifier_value: $ => $.identifier,

	call: $ => seq(
		$._callee,
		$.args,
	),

	args: $ => seq(
		"(",
		repeat(seq($._strong_expr, ",")),
		optional($._strong_expr),
		")",
	),

	method: $ => seq(
		$._strong_expr,
		"=>",
		$.identifier,
		$.args,
	),

	_callee: $ => choice(
		$.identifier,
		seq("(", $._strong_expr, ")"),
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

	capture: $ => seq("capture", "(", $.identifier, ")"),

	_cmd_blk: $ => seq(
		optional($.capture),
		'cmd', 
		repeat('\n'), 
		'{', 
		repeat('\n'),
		$._cmd_in_blk,
		//repeat('\n'),
		'}'
	),

	_cmd_in_blk: $ => seq(
		repeat(seq($._cmd_stmt, '\n')), 
		$._cmd_stmt,
		optional('\n'),
	), 

	cmd_vars: $ => seq(
		'let', 
		repeat(seq($.var_def, ',')), 
		optional($.var_def),
		'in',
	),

	cmd_var_stmt: $ => seq(
		'let', 
		repeat(seq($.var_def, ',')), 
		$.var_def,
	),

	_cmd_stmt: $ => choice(
		$.cmd_var_stmt,
		$.cmd_ctx
	),

	cmd_ctx: $ => seq(optional($.cmd_vars), $._cmd_list),

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

	cmd: $ => seq($.cmd_name, repeat($._expr), repeat($.redir)),

	cmd_name: $ => $._expr,

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
