#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  sym_comment = 2,
  anon_sym_let = 3,
  anon_sym_SEMI = 4,
  anon_sym_EQ = 5,
  anon_sym_LBRACK = 6,
  anon_sym_COMMA = 7,
  anon_sym_RBRACK = 8,
  anon_sym_cmd = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_in = 12,
  anon_sym_PIPE_PIPE = 13,
  anon_sym_AMP_AMP = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_PIPE = 17,
  anon_sym_GT = 18,
  anon_sym_LT = 19,
  anon_sym_GT_GT = 20,
  sym_istr = 21,
  sym_int = 22,
  sym_str = 23,
  sym_identifier = 24,
  sym_word = 25,
  sym_source_file = 26,
  sym__statement_line = 27,
  sym__statement = 28,
  sym_let_statement = 29,
  sym_var_def = 30,
  sym__strong_expr = 31,
  sym__expr = 32,
  sym__value = 33,
  sym__cmd_blk = 34,
  sym__cmd_in_blk = 35,
  sym_cmd_vars = 36,
  sym__cmd_ctx = 37,
  sym__cmd_list = 38,
  sym_cmd_op = 39,
  sym_cmd_chain = 40,
  sym__cmd_chain_part = 41,
  sym_pipeline = 42,
  sym_cmd = 43,
  sym_redir_kind = 44,
  sym_redir = 45,
  sym__word = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_source_file_repeat2 = 48,
  aux_sym__value_repeat1 = 49,
  aux_sym__cmd_in_blk_repeat1 = 50,
  aux_sym_cmd_vars_repeat1 = 51,
  aux_sym__cmd_list_repeat1 = 52,
  aux_sym_pipeline_repeat1 = 53,
  aux_sym_cmd_repeat1 = 54,
  aux_sym_cmd_repeat2 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_let] = "let",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_cmd] = "cmd",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_in] = "in",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE] = "|",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_GT] = ">>",
  [sym_istr] = "istr",
  [sym_int] = "int",
  [sym_str] = "str",
  [sym_identifier] = "identifier",
  [sym_word] = "word",
  [sym_source_file] = "source_file",
  [sym__statement_line] = "_statement_line",
  [sym__statement] = "_statement",
  [sym_let_statement] = "let_statement",
  [sym_var_def] = "var_def",
  [sym__strong_expr] = "_strong_expr",
  [sym__expr] = "_expr",
  [sym__value] = "_value",
  [sym__cmd_blk] = "_cmd_blk",
  [sym__cmd_in_blk] = "_cmd_in_blk",
  [sym_cmd_vars] = "cmd_vars",
  [sym__cmd_ctx] = "_cmd_ctx",
  [sym__cmd_list] = "_cmd_list",
  [sym_cmd_op] = "cmd_op",
  [sym_cmd_chain] = "cmd_chain",
  [sym__cmd_chain_part] = "_cmd_chain_part",
  [sym_pipeline] = "pipeline",
  [sym_cmd] = "cmd",
  [sym_redir_kind] = "redir_kind",
  [sym_redir] = "redir",
  [sym__word] = "_word",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym__value_repeat1] = "_value_repeat1",
  [aux_sym__cmd_in_blk_repeat1] = "_cmd_in_blk_repeat1",
  [aux_sym_cmd_vars_repeat1] = "cmd_vars_repeat1",
  [aux_sym__cmd_list_repeat1] = "_cmd_list_repeat1",
  [aux_sym_pipeline_repeat1] = "pipeline_repeat1",
  [aux_sym_cmd_repeat1] = "cmd_repeat1",
  [aux_sym_cmd_repeat2] = "cmd_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_cmd] = anon_sym_cmd,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [sym_istr] = sym_istr,
  [sym_int] = sym_int,
  [sym_str] = sym_str,
  [sym_identifier] = sym_identifier,
  [sym_word] = sym_word,
  [sym_source_file] = sym_source_file,
  [sym__statement_line] = sym__statement_line,
  [sym__statement] = sym__statement,
  [sym_let_statement] = sym_let_statement,
  [sym_var_def] = sym_var_def,
  [sym__strong_expr] = sym__strong_expr,
  [sym__expr] = sym__expr,
  [sym__value] = sym__value,
  [sym__cmd_blk] = sym__cmd_blk,
  [sym__cmd_in_blk] = sym__cmd_in_blk,
  [sym_cmd_vars] = sym_cmd_vars,
  [sym__cmd_ctx] = sym__cmd_ctx,
  [sym__cmd_list] = sym__cmd_list,
  [sym_cmd_op] = sym_cmd_op,
  [sym_cmd_chain] = sym_cmd_chain,
  [sym__cmd_chain_part] = sym__cmd_chain_part,
  [sym_pipeline] = sym_pipeline,
  [sym_cmd] = sym_cmd,
  [sym_redir_kind] = sym_redir_kind,
  [sym_redir] = sym_redir,
  [sym__word] = sym__word,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym__value_repeat1] = aux_sym__value_repeat1,
  [aux_sym__cmd_in_blk_repeat1] = aux_sym__cmd_in_blk_repeat1,
  [aux_sym_cmd_vars_repeat1] = aux_sym_cmd_vars_repeat1,
  [aux_sym__cmd_list_repeat1] = aux_sym__cmd_list_repeat1,
  [aux_sym_pipeline_repeat1] = aux_sym_pipeline_repeat1,
  [aux_sym_cmd_repeat1] = aux_sym_cmd_repeat1,
  [aux_sym_cmd_repeat2] = aux_sym_cmd_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_istr] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_str] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_line] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_let_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_var_def] = {
    .visible = true,
    .named = true,
  },
  [sym__strong_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__cmd_blk] = {
    .visible = false,
    .named = true,
  },
  [sym__cmd_in_blk] = {
    .visible = false,
    .named = true,
  },
  [sym_cmd_vars] = {
    .visible = true,
    .named = true,
  },
  [sym__cmd_ctx] = {
    .visible = false,
    .named = true,
  },
  [sym__cmd_list] = {
    .visible = false,
    .named = true,
  },
  [sym_cmd_op] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_chain] = {
    .visible = true,
    .named = true,
  },
  [sym__cmd_chain_part] = {
    .visible = false,
    .named = true,
  },
  [sym_pipeline] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_redir_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_redir] = {
    .visible = true,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__cmd_in_blk_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cmd_vars_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__cmd_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pipeline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cmd_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cmd_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '}') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == ']') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == 'i') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == '{') ADVANCE(31);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(35);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_istr);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_istr);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_str);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 17},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 17},
  [71] = {.lex_state = 17},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 17},
  [80] = {.lex_state = 17},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_cmd] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [sym_istr] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_str] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(92),
    [sym__statement_line] = STATE(38),
    [sym__statement] = STATE(53),
    [sym_let_statement] = STATE(53),
    [sym__cmd_blk] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(26),
    [aux_sym_source_file_repeat2] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_cmd] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(11), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(8), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(15), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(47), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(64), 1,
      sym__cmd_chain_part,
    STATE(65), 1,
      sym_cmd_chain,
    STATE(88), 1,
      sym__cmd_in_blk,
    ACTIONS(19), 2,
      sym_istr,
      sym_str,
    STATE(75), 2,
      sym__cmd_ctx,
      sym__cmd_list,
    ACTIONS(21), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [61] = 18,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(15), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(24), 1,
      aux_sym_source_file_repeat1,
    STATE(47), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(64), 1,
      sym__cmd_chain_part,
    STATE(65), 1,
      sym_cmd_chain,
    STATE(88), 1,
      sym__cmd_in_blk,
    ACTIONS(19), 2,
      sym_istr,
      sym_str,
    STATE(75), 2,
      sym__cmd_ctx,
      sym__cmd_list,
    ACTIONS(21), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [122] = 18,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(8), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(15), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(47), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(64), 1,
      sym__cmd_chain_part,
    STATE(65), 1,
      sym_cmd_chain,
    STATE(95), 1,
      sym__cmd_in_blk,
    ACTIONS(19), 2,
      sym_istr,
      sym_str,
    STATE(75), 2,
      sym__cmd_ctx,
      sym__cmd_list,
    ACTIONS(21), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [183] = 18,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(15), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(24), 1,
      aux_sym_source_file_repeat1,
    STATE(47), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(64), 1,
      sym__cmd_chain_part,
    STATE(65), 1,
      sym_cmd_chain,
    STATE(89), 1,
      sym__cmd_in_blk,
    ACTIONS(19), 2,
      sym_istr,
      sym_str,
    STATE(75), 2,
      sym__cmd_ctx,
      sym__cmd_list,
    ACTIONS(21), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [244] = 10,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(31), 1,
      anon_sym_GT,
    STATE(31), 1,
      sym_redir_kind,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      sym_istr,
      sym_str,
    STATE(19), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(37), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(10), 4,
      sym__expr,
      sym__value,
      sym__word,
      aux_sym_cmd_repeat1,
    ACTIONS(27), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [288] = 10,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(31), 1,
      sym_redir_kind,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    ACTIONS(43), 2,
      sym_istr,
      sym_str,
    STATE(21), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(45), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(6), 4,
      sym__expr,
      sym__value,
      sym__word,
      aux_sym_cmd_repeat1,
    ACTIONS(39), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [332] = 15,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(15), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(47), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(64), 1,
      sym__cmd_chain_part,
    STATE(65), 1,
      sym_cmd_chain,
    ACTIONS(19), 2,
      sym_istr,
      sym_str,
    STATE(76), 2,
      sym__cmd_ctx,
      sym__cmd_list,
    ACTIONS(21), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [384] = 15,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(15), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(47), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(64), 1,
      sym__cmd_chain_part,
    STATE(65), 1,
      sym_cmd_chain,
    ACTIONS(56), 2,
      sym_istr,
      sym_str,
    STATE(94), 2,
      sym__cmd_ctx,
      sym__cmd_list,
    ACTIONS(59), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [436] = 6,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 2,
      anon_sym_PIPE,
      anon_sym_GT,
    ACTIONS(69), 2,
      sym_istr,
      sym_str,
    ACTIONS(72), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(10), 4,
      sym__expr,
      sym__value,
      sym__word,
      aux_sym_cmd_repeat1,
    ACTIONS(62), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT_GT,
  [469] = 2,
    ACTIONS(77), 5,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(75), 13,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT_GT,
      sym_istr,
      sym_str,
  [492] = 2,
    ACTIONS(81), 5,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(79), 13,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT_GT,
      sym_istr,
      sym_str,
  [515] = 2,
    ACTIONS(85), 5,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(83), 13,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT_GT,
      sym_istr,
      sym_str,
  [538] = 12,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(47), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(64), 1,
      sym__cmd_chain_part,
    STATE(65), 1,
      sym_cmd_chain,
    STATE(82), 1,
      sym__cmd_list,
    ACTIONS(19), 2,
      sym_istr,
      sym_str,
    ACTIONS(21), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [580] = 11,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(47), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(63), 1,
      sym_cmd_chain,
    STATE(64), 1,
      sym__cmd_chain_part,
    ACTIONS(19), 2,
      sym_istr,
      sym_str,
    ACTIONS(21), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [619] = 11,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(47), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(64), 1,
      sym__cmd_chain_part,
    STATE(93), 1,
      sym_cmd_chain,
    ACTIONS(93), 2,
      sym_istr,
      sym_str,
    ACTIONS(96), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [658] = 10,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(47), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(57), 1,
      sym_cmd_chain,
    STATE(64), 1,
      sym__cmd_chain_part,
    ACTIONS(19), 2,
      sym_istr,
      sym_str,
    ACTIONS(21), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [694] = 10,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(47), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(64), 1,
      sym__cmd_chain_part,
    STATE(91), 1,
      sym_cmd_chain,
    ACTIONS(19), 2,
      sym_istr,
      sym_str,
    ACTIONS(21), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [730] = 6,
    ACTIONS(31), 1,
      anon_sym_GT,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    STATE(31), 1,
      sym_redir_kind,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    STATE(20), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(99), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [756] = 6,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    ACTIONS(107), 1,
      anon_sym_GT,
    STATE(31), 1,
      sym_redir_kind,
    ACTIONS(110), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    STATE(20), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(103), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [782] = 6,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(31), 1,
      anon_sym_GT,
    STATE(31), 1,
      sym_redir_kind,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    STATE(20), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(27), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [808] = 6,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      aux_sym_pipeline_repeat1,
    STATE(90), 1,
      sym_cmd,
    ACTIONS(116), 2,
      sym_istr,
      sym_str,
    ACTIONS(119), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [832] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      aux_sym_pipeline_repeat1,
    STATE(40), 1,
      sym_cmd,
    ACTIONS(19), 2,
      sym_istr,
      sym_str,
    ACTIONS(21), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [856] = 4,
    ACTIONS(122), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(125), 4,
      anon_sym_let,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(127), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [875] = 2,
    ACTIONS(131), 2,
      anon_sym_PIPE,
      anon_sym_GT,
    ACTIONS(129), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT_GT,
  [890] = 7,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      anon_sym_cmd,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      anon_sym_LF,
    STATE(50), 1,
      aux_sym_source_file_repeat1,
    STATE(37), 2,
      sym__statement_line,
      aux_sym_source_file_repeat2,
    STATE(53), 3,
      sym__statement,
      sym_let_statement,
      sym__cmd_blk,
  [915] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym__value_repeat1,
    ACTIONS(139), 2,
      sym_istr,
      sym_str,
    ACTIONS(141), 2,
      sym_int,
      sym_identifier,
    STATE(77), 2,
      sym__strong_expr,
      sym__value,
  [937] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym__value_repeat1,
    ACTIONS(145), 2,
      sym_istr,
      sym_str,
    ACTIONS(147), 2,
      sym_int,
      sym_identifier,
    STATE(72), 2,
      sym__strong_expr,
      sym__value,
  [959] = 6,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym__value_repeat1,
    ACTIONS(154), 2,
      sym_istr,
      sym_str,
    ACTIONS(157), 2,
      sym_int,
      sym_identifier,
    STATE(84), 2,
      sym__strong_expr,
      sym__value,
  [981] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym__value_repeat1,
    ACTIONS(162), 2,
      sym_istr,
      sym_str,
    ACTIONS(164), 2,
      sym_int,
      sym_identifier,
    STATE(78), 2,
      sym__strong_expr,
      sym__value,
  [1003] = 4,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 2,
      sym_istr,
      sym_str,
    ACTIONS(168), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(25), 3,
      sym__expr,
      sym__value,
      sym__word,
  [1021] = 3,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 4,
      anon_sym_let,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(172), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1037] = 3,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 4,
      anon_sym_let,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(172), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1053] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym__value_repeat1,
    ACTIONS(180), 2,
      sym_istr,
      sym_str,
    ACTIONS(182), 2,
      sym_int,
      sym_identifier,
    STATE(69), 2,
      sym__strong_expr,
      sym__value,
  [1075] = 5,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_cmd,
    STATE(35), 2,
      sym__statement_line,
      aux_sym_source_file_repeat2,
    STATE(53), 3,
      sym__statement,
      sym_let_statement,
      sym__cmd_blk,
  [1094] = 2,
    ACTIONS(170), 4,
      anon_sym_let,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(172), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1107] = 5,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      anon_sym_cmd,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    STATE(35), 2,
      sym__statement_line,
      aux_sym_source_file_repeat2,
    STATE(53), 3,
      sym__statement,
      sym_let_statement,
      sym__cmd_blk,
  [1126] = 5,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      anon_sym_cmd,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(35), 2,
      sym__statement_line,
      aux_sym_source_file_repeat2,
    STATE(53), 3,
      sym__statement,
      sym_let_statement,
      sym__cmd_blk,
  [1145] = 2,
    ACTIONS(196), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(194), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1157] = 2,
    ACTIONS(200), 1,
      anon_sym_PIPE,
    ACTIONS(198), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [1169] = 2,
    ACTIONS(204), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(202), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1181] = 4,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(206), 2,
      sym_istr,
      sym_str,
    ACTIONS(208), 2,
      sym_int,
      sym_identifier,
    STATE(68), 2,
      sym__strong_expr,
      sym__value,
  [1197] = 4,
    ACTIONS(210), 1,
      anon_sym_LBRACK,
    ACTIONS(206), 2,
      sym_istr,
      sym_str,
    ACTIONS(208), 2,
      sym_int,
      sym_identifier,
    STATE(68), 2,
      sym__strong_expr,
      sym__value,
  [1213] = 2,
    ACTIONS(214), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(212), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1225] = 2,
    ACTIONS(218), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(216), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1237] = 2,
    ACTIONS(222), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(220), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1249] = 2,
    ACTIONS(200), 1,
      anon_sym_PIPE,
    ACTIONS(224), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [1261] = 2,
    ACTIONS(226), 3,
      anon_sym_LBRACK,
      sym_istr,
      sym_str,
    ACTIONS(228), 3,
      sym_int,
      sym_identifier,
      sym_word,
  [1272] = 2,
    ACTIONS(230), 2,
      sym_int,
      sym_identifier,
    ACTIONS(152), 4,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_istr,
      sym_str,
  [1283] = 3,
    ACTIONS(232), 1,
      anon_sym_LF,
    STATE(50), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(127), 4,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_cmd,
      anon_sym_LBRACE,
  [1296] = 2,
    ACTIONS(235), 3,
      anon_sym_LBRACK,
      sym_istr,
      sym_str,
    ACTIONS(237), 3,
      sym_int,
      sym_identifier,
      sym_word,
  [1307] = 2,
    ACTIONS(241), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(239), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1318] = 3,
    ACTIONS(245), 1,
      anon_sym_LF,
    STATE(54), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_cmd,
  [1330] = 3,
    ACTIONS(135), 1,
      anon_sym_LF,
    STATE(50), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(247), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_cmd,
  [1342] = 1,
    ACTIONS(249), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_let,
      anon_sym_cmd,
  [1349] = 1,
    ACTIONS(251), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_let,
      anon_sym_cmd,
  [1356] = 1,
    ACTIONS(253), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1363] = 4,
    ACTIONS(255), 1,
      anon_sym_in,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(58), 1,
      aux_sym_cmd_vars_repeat1,
    STATE(87), 1,
      sym_var_def,
  [1376] = 1,
    ACTIONS(260), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_let,
      anon_sym_cmd,
  [1383] = 1,
    ACTIONS(262), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_let,
      anon_sym_cmd,
  [1390] = 4,
    ACTIONS(264), 1,
      anon_sym_in,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(58), 1,
      aux_sym_cmd_vars_repeat1,
    STATE(73), 1,
      sym_var_def,
  [1403] = 4,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_in,
    STATE(61), 1,
      aux_sym_cmd_vars_repeat1,
    STATE(71), 1,
      sym_var_def,
  [1416] = 2,
    ACTIONS(272), 1,
      anon_sym_SEMI,
    ACTIONS(270), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1424] = 2,
    STATE(17), 1,
      sym_cmd_op,
    ACTIONS(274), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1432] = 2,
    ACTIONS(272), 1,
      anon_sym_SEMI,
    ACTIONS(276), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1440] = 3,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      aux_sym_source_file_repeat1,
  [1450] = 3,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      aux_sym_source_file_repeat1,
  [1460] = 1,
    ACTIONS(284), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_in,
  [1466] = 2,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
  [1473] = 1,
    ACTIONS(79), 2,
      anon_sym_COMMA,
      anon_sym_in,
  [1478] = 2,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_in,
  [1485] = 2,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
  [1492] = 2,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_in,
  [1499] = 1,
    ACTIONS(255), 2,
      anon_sym_in,
      sym_identifier,
  [1504] = 2,
    ACTIONS(298), 1,
      anon_sym_LF,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
  [1511] = 2,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(302), 1,
      anon_sym_LF,
  [1518] = 2,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
    ACTIONS(286), 1,
      anon_sym_COMMA,
  [1525] = 2,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
    ACTIONS(286), 1,
      anon_sym_COMMA,
  [1532] = 1,
    ACTIONS(83), 2,
      anon_sym_COMMA,
      anon_sym_in,
  [1537] = 1,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      anon_sym_in,
  [1542] = 1,
    ACTIONS(304), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1547] = 1,
    ACTIONS(306), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1552] = 2,
    ACTIONS(308), 1,
      sym_identifier,
    STATE(86), 1,
      sym_var_def,
  [1559] = 1,
    ACTIONS(286), 1,
      anon_sym_COMMA,
  [1563] = 1,
    ACTIONS(310), 1,
      anon_sym_EQ,
  [1567] = 1,
    ACTIONS(312), 1,
      anon_sym_SEMI,
  [1571] = 1,
    ACTIONS(290), 1,
      anon_sym_COMMA,
  [1575] = 1,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
  [1579] = 1,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
  [1583] = 1,
    ACTIONS(318), 1,
      anon_sym_PIPE,
  [1587] = 1,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
  [1591] = 1,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
  [1595] = 1,
    ACTIONS(272), 1,
      anon_sym_SEMI,
  [1599] = 1,
    ACTIONS(324), 1,
      anon_sym_LF,
  [1603] = 1,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
  [1607] = 1,
    ACTIONS(328), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 288,
  [SMALL_STATE(8)] = 332,
  [SMALL_STATE(9)] = 384,
  [SMALL_STATE(10)] = 436,
  [SMALL_STATE(11)] = 469,
  [SMALL_STATE(12)] = 492,
  [SMALL_STATE(13)] = 515,
  [SMALL_STATE(14)] = 538,
  [SMALL_STATE(15)] = 580,
  [SMALL_STATE(16)] = 619,
  [SMALL_STATE(17)] = 658,
  [SMALL_STATE(18)] = 694,
  [SMALL_STATE(19)] = 730,
  [SMALL_STATE(20)] = 756,
  [SMALL_STATE(21)] = 782,
  [SMALL_STATE(22)] = 808,
  [SMALL_STATE(23)] = 832,
  [SMALL_STATE(24)] = 856,
  [SMALL_STATE(25)] = 875,
  [SMALL_STATE(26)] = 890,
  [SMALL_STATE(27)] = 915,
  [SMALL_STATE(28)] = 937,
  [SMALL_STATE(29)] = 959,
  [SMALL_STATE(30)] = 981,
  [SMALL_STATE(31)] = 1003,
  [SMALL_STATE(32)] = 1021,
  [SMALL_STATE(33)] = 1037,
  [SMALL_STATE(34)] = 1053,
  [SMALL_STATE(35)] = 1075,
  [SMALL_STATE(36)] = 1094,
  [SMALL_STATE(37)] = 1107,
  [SMALL_STATE(38)] = 1126,
  [SMALL_STATE(39)] = 1145,
  [SMALL_STATE(40)] = 1157,
  [SMALL_STATE(41)] = 1169,
  [SMALL_STATE(42)] = 1181,
  [SMALL_STATE(43)] = 1197,
  [SMALL_STATE(44)] = 1213,
  [SMALL_STATE(45)] = 1225,
  [SMALL_STATE(46)] = 1237,
  [SMALL_STATE(47)] = 1249,
  [SMALL_STATE(48)] = 1261,
  [SMALL_STATE(49)] = 1272,
  [SMALL_STATE(50)] = 1283,
  [SMALL_STATE(51)] = 1296,
  [SMALL_STATE(52)] = 1307,
  [SMALL_STATE(53)] = 1318,
  [SMALL_STATE(54)] = 1330,
  [SMALL_STATE(55)] = 1342,
  [SMALL_STATE(56)] = 1349,
  [SMALL_STATE(57)] = 1356,
  [SMALL_STATE(58)] = 1363,
  [SMALL_STATE(59)] = 1376,
  [SMALL_STATE(60)] = 1383,
  [SMALL_STATE(61)] = 1390,
  [SMALL_STATE(62)] = 1403,
  [SMALL_STATE(63)] = 1416,
  [SMALL_STATE(64)] = 1424,
  [SMALL_STATE(65)] = 1432,
  [SMALL_STATE(66)] = 1440,
  [SMALL_STATE(67)] = 1450,
  [SMALL_STATE(68)] = 1460,
  [SMALL_STATE(69)] = 1466,
  [SMALL_STATE(70)] = 1473,
  [SMALL_STATE(71)] = 1478,
  [SMALL_STATE(72)] = 1485,
  [SMALL_STATE(73)] = 1492,
  [SMALL_STATE(74)] = 1499,
  [SMALL_STATE(75)] = 1504,
  [SMALL_STATE(76)] = 1511,
  [SMALL_STATE(77)] = 1518,
  [SMALL_STATE(78)] = 1525,
  [SMALL_STATE(79)] = 1532,
  [SMALL_STATE(80)] = 1537,
  [SMALL_STATE(81)] = 1542,
  [SMALL_STATE(82)] = 1547,
  [SMALL_STATE(83)] = 1552,
  [SMALL_STATE(84)] = 1559,
  [SMALL_STATE(85)] = 1563,
  [SMALL_STATE(86)] = 1567,
  [SMALL_STATE(87)] = 1571,
  [SMALL_STATE(88)] = 1575,
  [SMALL_STATE(89)] = 1579,
  [SMALL_STATE(90)] = 1583,
  [SMALL_STATE(91)] = 1587,
  [SMALL_STATE(92)] = 1591,
  [SMALL_STATE(93)] = 1595,
  [SMALL_STATE(94)] = 1599,
  [SMALL_STATE(95)] = 1603,
  [SMALL_STATE(96)] = 1607,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(62),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(27),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(18),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(7),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(7),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_repeat1, 2), SHIFT_REPEAT(27),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_repeat1, 2), SHIFT_REPEAT(10),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_repeat1, 2), SHIFT_REPEAT(10),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 4),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(27),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(18),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(7),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(7),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_repeat2, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_repeat2, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_repeat2, 2), SHIFT_REPEAT(48),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_repeat2, 2), SHIFT_REPEAT(48),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(27),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(7),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(7),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_repeat1, 2), SHIFT_REPEAT(27),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_repeat1, 2), SHIFT_REPEAT(84),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value_repeat1, 2), SHIFT_REPEAT(84),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_in_blk, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_in_blk, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(83),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(66),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cmd_list_repeat1, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_vars, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_vars, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_vars, 4),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_vars, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_vars, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_vars, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_op, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_op, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_kind, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_kind, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_chain, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_chain_part, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_line, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_line, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_blk, 6),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_blk, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_chain, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_vars_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_vars_repeat1, 2), SHIFT_REPEAT(85),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_blk, 4),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_list, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_list, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_def, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_in_blk, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_chain_part, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_ctx, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [322] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rsh(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
