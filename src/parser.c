#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
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
  sym_cmd_var_stmt = 37,
  sym__cmd_stmt = 38,
  sym_cmd_ctx = 39,
  sym__cmd_list = 40,
  sym_cmd_op = 41,
  sym_cmd_chain = 42,
  sym__cmd_chain_part = 43,
  sym_pipeline = 44,
  sym_cmd = 45,
  sym_redir_kind = 46,
  sym_redir = 47,
  sym__word = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_source_file_repeat2 = 50,
  aux_sym__value_repeat1 = 51,
  aux_sym__cmd_in_blk_repeat1 = 52,
  aux_sym_cmd_vars_repeat1 = 53,
  aux_sym__cmd_list_repeat1 = 54,
  aux_sym_pipeline_repeat1 = 55,
  aux_sym_cmd_repeat1 = 56,
  aux_sym_cmd_repeat2 = 57,
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
  [sym_cmd_var_stmt] = "cmd_var_stmt",
  [sym__cmd_stmt] = "_cmd_stmt",
  [sym_cmd_ctx] = "cmd_ctx",
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
  [sym_cmd_var_stmt] = sym_cmd_var_stmt,
  [sym__cmd_stmt] = sym__cmd_stmt,
  [sym_cmd_ctx] = sym_cmd_ctx,
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
  [sym_cmd_var_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym__cmd_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_cmd_ctx] = {
    .visible = true,
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
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
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
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 13},
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
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 17},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 0},
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
  [97] = {.lex_state = 0},
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
    [sym_source_file] = STATE(93),
    [sym__statement_line] = STATE(28),
    [sym__statement] = STATE(51),
    [sym_let_statement] = STATE(51),
    [sym__cmd_blk] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(24),
    [aux_sym_source_file_repeat2] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_cmd] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(15), 1,
      aux_sym__cmd_list_repeat1,
    STATE(22), 1,
      aux_sym_pipeline_repeat1,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
    STATE(42), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(72), 1,
      sym__cmd_chain_part,
    STATE(73), 1,
      sym_cmd_chain,
    STATE(74), 1,
      sym__cmd_list,
    STATE(95), 1,
      sym__cmd_in_blk,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(75), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [65] = 19,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(8), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(15), 1,
      aux_sym__cmd_list_repeat1,
    STATE(22), 1,
      aux_sym_pipeline_repeat1,
    STATE(42), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(72), 1,
      sym__cmd_chain_part,
    STATE(73), 1,
      sym_cmd_chain,
    STATE(74), 1,
      sym__cmd_list,
    STATE(95), 1,
      sym__cmd_in_blk,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(75), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [130] = 19,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(15), 1,
      aux_sym__cmd_list_repeat1,
    STATE(22), 1,
      aux_sym_pipeline_repeat1,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
    STATE(42), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(72), 1,
      sym__cmd_chain_part,
    STATE(73), 1,
      sym_cmd_chain,
    STATE(74), 1,
      sym__cmd_list,
    STATE(89), 1,
      sym__cmd_in_blk,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(75), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [195] = 19,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(8), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(15), 1,
      aux_sym__cmd_list_repeat1,
    STATE(22), 1,
      aux_sym_pipeline_repeat1,
    STATE(42), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(72), 1,
      sym__cmd_chain_part,
    STATE(73), 1,
      sym_cmd_chain,
    STATE(74), 1,
      sym__cmd_list,
    STATE(94), 1,
      sym__cmd_in_blk,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(75), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [260] = 16,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(32), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(15), 1,
      aux_sym__cmd_list_repeat1,
    STATE(22), 1,
      aux_sym_pipeline_repeat1,
    STATE(42), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(72), 1,
      sym__cmd_chain_part,
    STATE(73), 1,
      sym_cmd_chain,
    STATE(74), 1,
      sym__cmd_list,
    ACTIONS(38), 2,
      sym_istr,
      sym_str,
    ACTIONS(41), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(96), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [316] = 10,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      anon_sym_PIPE,
    ACTIONS(48), 1,
      anon_sym_GT,
    STATE(35), 1,
      sym_redir_kind,
    ACTIONS(50), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    ACTIONS(52), 2,
      sym_istr,
      sym_str,
    STATE(19), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(54), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(9), 4,
      sym__expr,
      sym__value,
      sym__word,
      aux_sym_cmd_repeat1,
    ACTIONS(44), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [360] = 16,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(15), 1,
      aux_sym__cmd_list_repeat1,
    STATE(22), 1,
      aux_sym_pipeline_repeat1,
    STATE(42), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(72), 1,
      sym__cmd_chain_part,
    STATE(73), 1,
      sym_cmd_chain,
    STATE(74), 1,
      sym__cmd_list,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(79), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [416] = 10,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(48), 1,
      anon_sym_GT,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    STATE(35), 1,
      sym_redir_kind,
    ACTIONS(50), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    ACTIONS(60), 2,
      sym_istr,
      sym_str,
    STATE(21), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(62), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(10), 4,
      sym__expr,
      sym__value,
      sym__word,
      aux_sym_cmd_repeat1,
    ACTIONS(56), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [460] = 6,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 2,
      anon_sym_PIPE,
      anon_sym_GT,
    ACTIONS(71), 2,
      sym_istr,
      sym_str,
    ACTIONS(74), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(10), 4,
      sym__expr,
      sym__value,
      sym__word,
      aux_sym_cmd_repeat1,
    ACTIONS(64), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT_GT,
  [493] = 2,
    ACTIONS(79), 5,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(77), 13,
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
  [516] = 2,
    ACTIONS(83), 5,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(81), 13,
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
  [539] = 2,
    ACTIONS(87), 5,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(85), 13,
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
  [562] = 12,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      aux_sym__cmd_list_repeat1,
    STATE(22), 1,
      aux_sym_pipeline_repeat1,
    STATE(42), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(72), 1,
      sym__cmd_chain_part,
    STATE(73), 1,
      sym_cmd_chain,
    STATE(77), 1,
      sym__cmd_list,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [604] = 11,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      aux_sym__cmd_list_repeat1,
    STATE(22), 1,
      aux_sym_pipeline_repeat1,
    STATE(42), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(71), 1,
      sym_cmd_chain,
    STATE(72), 1,
      sym__cmd_chain_part,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [643] = 11,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      aux_sym__cmd_list_repeat1,
    STATE(22), 1,
      aux_sym_pipeline_repeat1,
    STATE(42), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(72), 1,
      sym__cmd_chain_part,
    STATE(87), 1,
      sym_cmd_chain,
    ACTIONS(95), 2,
      sym_istr,
      sym_str,
    ACTIONS(98), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [682] = 10,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      aux_sym_pipeline_repeat1,
    STATE(42), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(61), 1,
      sym_cmd_chain,
    STATE(72), 1,
      sym__cmd_chain_part,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [718] = 10,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      aux_sym_pipeline_repeat1,
    STATE(42), 1,
      sym_cmd,
    STATE(52), 1,
      sym_pipeline,
    STATE(72), 1,
      sym__cmd_chain_part,
    STATE(91), 1,
      sym_cmd_chain,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [754] = 6,
    ACTIONS(48), 1,
      anon_sym_GT,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    STATE(35), 1,
      sym_redir_kind,
    ACTIONS(50), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    STATE(20), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(56), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [780] = 6,
    ACTIONS(103), 1,
      anon_sym_PIPE,
    ACTIONS(105), 1,
      anon_sym_GT,
    STATE(35), 1,
      sym_redir_kind,
    ACTIONS(108), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    STATE(20), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(101), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [806] = 6,
    ACTIONS(48), 1,
      anon_sym_GT,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    STATE(35), 1,
      sym_redir_kind,
    ACTIONS(50), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    STATE(20), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(111), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [832] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(46), 1,
      sym_cmd,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [856] = 6,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(85), 1,
      sym_cmd,
    ACTIONS(118), 2,
      sym_istr,
      sym_str,
    ACTIONS(121), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(7), 3,
      sym__expr,
      sym__value,
      sym__word,
  [880] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_cmd,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      anon_sym_LF,
    STATE(47), 1,
      aux_sym_source_file_repeat1,
    STATE(34), 2,
      sym__statement_line,
      aux_sym_source_file_repeat2,
    STATE(51), 3,
      sym__statement,
      sym_let_statement,
      sym__cmd_blk,
  [908] = 2,
    ACTIONS(130), 2,
      anon_sym_PIPE,
      anon_sym_GT,
    ACTIONS(128), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT_GT,
  [923] = 4,
    ACTIONS(132), 1,
      anon_sym_LF,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(135), 4,
      anon_sym_let,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(137), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [942] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym__value_repeat1,
    ACTIONS(141), 2,
      sym_istr,
      sym_str,
    ACTIONS(143), 2,
      sym_int,
      sym_identifier,
    STATE(81), 2,
      sym__strong_expr,
      sym__value,
  [964] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_cmd,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    STATE(33), 2,
      sym__statement_line,
      aux_sym_source_file_repeat2,
    STATE(51), 3,
      sym__statement,
      sym_let_statement,
      sym__cmd_blk,
  [986] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym__value_repeat1,
    ACTIONS(147), 2,
      sym_istr,
      sym_str,
    ACTIONS(149), 2,
      sym_int,
      sym_identifier,
    STATE(78), 2,
      sym__strong_expr,
      sym__value,
  [1008] = 3,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 4,
      anon_sym_let,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(153), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1024] = 6,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym__value_repeat1,
    ACTIONS(162), 2,
      sym_istr,
      sym_str,
    ACTIONS(165), 2,
      sym_int,
      sym_identifier,
    STATE(90), 2,
      sym__strong_expr,
      sym__value,
  [1046] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym__value_repeat1,
    ACTIONS(170), 2,
      sym_istr,
      sym_str,
    ACTIONS(172), 2,
      sym_int,
      sym_identifier,
    STATE(83), 2,
      sym__strong_expr,
      sym__value,
  [1068] = 6,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_let,
    ACTIONS(182), 1,
      anon_sym_cmd,
    STATE(33), 2,
      sym__statement_line,
      aux_sym_source_file_repeat2,
    STATE(51), 3,
      sym__statement,
      sym_let_statement,
      sym__cmd_blk,
  [1090] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_cmd,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    STATE(33), 2,
      sym__statement_line,
      aux_sym_source_file_repeat2,
    STATE(51), 3,
      sym__statement,
      sym_let_statement,
      sym__cmd_blk,
  [1112] = 4,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 2,
      sym_istr,
      sym_str,
    ACTIONS(189), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(25), 3,
      sym__expr,
      sym__value,
      sym__word,
  [1130] = 3,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 4,
      anon_sym_let,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(153), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1146] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym__value_repeat1,
    ACTIONS(195), 2,
      sym_istr,
      sym_str,
    ACTIONS(197), 2,
      sym_int,
      sym_identifier,
    STATE(84), 2,
      sym__strong_expr,
      sym__value,
  [1168] = 2,
    ACTIONS(151), 4,
      anon_sym_let,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(153), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1181] = 4,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 2,
      sym_istr,
      sym_str,
    ACTIONS(201), 2,
      sym_int,
      sym_identifier,
    STATE(56), 2,
      sym__strong_expr,
      sym__value,
  [1197] = 2,
    ACTIONS(205), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(203), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1209] = 2,
    ACTIONS(209), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(207), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1221] = 2,
    ACTIONS(213), 1,
      anon_sym_PIPE,
    ACTIONS(211), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [1233] = 4,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 2,
      sym_istr,
      sym_str,
    ACTIONS(201), 2,
      sym_int,
      sym_identifier,
    STATE(56), 2,
      sym__strong_expr,
      sym__value,
  [1249] = 2,
    ACTIONS(219), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(217), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1261] = 2,
    ACTIONS(223), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(221), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1273] = 2,
    ACTIONS(213), 1,
      anon_sym_PIPE,
    ACTIONS(225), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [1285] = 3,
    ACTIONS(227), 1,
      anon_sym_LF,
    STATE(47), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_let,
      anon_sym_cmd,
      anon_sym_LBRACE,
  [1299] = 2,
    ACTIONS(232), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(230), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1311] = 3,
    ACTIONS(126), 1,
      anon_sym_LF,
    STATE(47), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(234), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_let,
      anon_sym_cmd,
  [1324] = 2,
    ACTIONS(236), 3,
      anon_sym_LBRACK,
      sym_istr,
      sym_str,
    ACTIONS(238), 3,
      sym_int,
      sym_identifier,
      sym_word,
  [1335] = 3,
    ACTIONS(242), 1,
      anon_sym_LF,
    STATE(49), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(240), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_let,
      anon_sym_cmd,
  [1348] = 2,
    ACTIONS(246), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(244), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1359] = 2,
    ACTIONS(248), 3,
      anon_sym_LBRACK,
      sym_istr,
      sym_str,
    ACTIONS(250), 3,
      sym_int,
      sym_identifier,
      sym_word,
  [1370] = 2,
    ACTIONS(252), 2,
      sym_int,
      sym_identifier,
    ACTIONS(160), 4,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_istr,
      sym_str,
  [1381] = 1,
    ACTIONS(254), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_let,
      anon_sym_cmd,
  [1389] = 1,
    ACTIONS(256), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_in,
  [1397] = 1,
    ACTIONS(258), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_let,
      anon_sym_cmd,
  [1405] = 1,
    ACTIONS(260), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_let,
      anon_sym_cmd,
  [1413] = 1,
    ACTIONS(262), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_let,
      anon_sym_cmd,
  [1421] = 4,
    ACTIONS(264), 1,
      anon_sym_in,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(63), 1,
      sym_var_def,
    STATE(64), 1,
      aux_sym_cmd_vars_repeat1,
  [1434] = 1,
    ACTIONS(268), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1441] = 1,
    ACTIONS(77), 4,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_in,
  [1448] = 3,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(274), 1,
      anon_sym_in,
    ACTIONS(270), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1459] = 4,
    ACTIONS(276), 1,
      anon_sym_in,
    ACTIONS(278), 1,
      sym_identifier,
    STATE(64), 1,
      aux_sym_cmd_vars_repeat1,
    STATE(86), 1,
      sym_var_def,
  [1472] = 4,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_in,
    STATE(60), 1,
      aux_sym_cmd_vars_repeat1,
    STATE(66), 1,
      sym_var_def,
  [1485] = 3,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_in,
    ACTIONS(283), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1496] = 1,
    ACTIONS(85), 4,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_in,
  [1503] = 1,
    ACTIONS(81), 4,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_in,
  [1510] = 3,
    ACTIONS(287), 1,
      anon_sym_LF,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      aux_sym_source_file_repeat1,
  [1520] = 3,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      aux_sym_source_file_repeat1,
  [1530] = 2,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    ACTIONS(293), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1538] = 2,
    STATE(17), 1,
      sym_cmd_op,
    ACTIONS(297), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1546] = 2,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    ACTIONS(299), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1554] = 1,
    ACTIONS(301), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1559] = 2,
    ACTIONS(303), 1,
      anon_sym_LF,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
  [1566] = 1,
    ACTIONS(276), 2,
      anon_sym_in,
      sym_identifier,
  [1571] = 1,
    ACTIONS(307), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1576] = 2,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
  [1583] = 2,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(313), 1,
      anon_sym_LF,
  [1590] = 1,
    ACTIONS(315), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1595] = 2,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
  [1602] = 2,
    ACTIONS(319), 1,
      sym_identifier,
    STATE(88), 1,
      sym_var_def,
  [1609] = 2,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    ACTIONS(309), 1,
      anon_sym_COMMA,
  [1616] = 2,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
    ACTIONS(309), 1,
      anon_sym_COMMA,
  [1623] = 1,
    ACTIONS(321), 1,
      anon_sym_PIPE,
  [1627] = 1,
    ACTIONS(272), 1,
      anon_sym_COMMA,
  [1631] = 1,
    ACTIONS(295), 1,
      anon_sym_SEMI,
  [1635] = 1,
    ACTIONS(323), 1,
      anon_sym_SEMI,
  [1639] = 1,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
  [1643] = 1,
    ACTIONS(309), 1,
      anon_sym_COMMA,
  [1647] = 1,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
  [1651] = 1,
    ACTIONS(329), 1,
      anon_sym_EQ,
  [1655] = 1,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
  [1659] = 1,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
  [1663] = 1,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
  [1667] = 1,
    ACTIONS(337), 1,
      anon_sym_LF,
  [1671] = 1,
    ACTIONS(339), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 195,
  [SMALL_STATE(6)] = 260,
  [SMALL_STATE(7)] = 316,
  [SMALL_STATE(8)] = 360,
  [SMALL_STATE(9)] = 416,
  [SMALL_STATE(10)] = 460,
  [SMALL_STATE(11)] = 493,
  [SMALL_STATE(12)] = 516,
  [SMALL_STATE(13)] = 539,
  [SMALL_STATE(14)] = 562,
  [SMALL_STATE(15)] = 604,
  [SMALL_STATE(16)] = 643,
  [SMALL_STATE(17)] = 682,
  [SMALL_STATE(18)] = 718,
  [SMALL_STATE(19)] = 754,
  [SMALL_STATE(20)] = 780,
  [SMALL_STATE(21)] = 806,
  [SMALL_STATE(22)] = 832,
  [SMALL_STATE(23)] = 856,
  [SMALL_STATE(24)] = 880,
  [SMALL_STATE(25)] = 908,
  [SMALL_STATE(26)] = 923,
  [SMALL_STATE(27)] = 942,
  [SMALL_STATE(28)] = 964,
  [SMALL_STATE(29)] = 986,
  [SMALL_STATE(30)] = 1008,
  [SMALL_STATE(31)] = 1024,
  [SMALL_STATE(32)] = 1046,
  [SMALL_STATE(33)] = 1068,
  [SMALL_STATE(34)] = 1090,
  [SMALL_STATE(35)] = 1112,
  [SMALL_STATE(36)] = 1130,
  [SMALL_STATE(37)] = 1146,
  [SMALL_STATE(38)] = 1168,
  [SMALL_STATE(39)] = 1181,
  [SMALL_STATE(40)] = 1197,
  [SMALL_STATE(41)] = 1209,
  [SMALL_STATE(42)] = 1221,
  [SMALL_STATE(43)] = 1233,
  [SMALL_STATE(44)] = 1249,
  [SMALL_STATE(45)] = 1261,
  [SMALL_STATE(46)] = 1273,
  [SMALL_STATE(47)] = 1285,
  [SMALL_STATE(48)] = 1299,
  [SMALL_STATE(49)] = 1311,
  [SMALL_STATE(50)] = 1324,
  [SMALL_STATE(51)] = 1335,
  [SMALL_STATE(52)] = 1348,
  [SMALL_STATE(53)] = 1359,
  [SMALL_STATE(54)] = 1370,
  [SMALL_STATE(55)] = 1381,
  [SMALL_STATE(56)] = 1389,
  [SMALL_STATE(57)] = 1397,
  [SMALL_STATE(58)] = 1405,
  [SMALL_STATE(59)] = 1413,
  [SMALL_STATE(60)] = 1421,
  [SMALL_STATE(61)] = 1434,
  [SMALL_STATE(62)] = 1441,
  [SMALL_STATE(63)] = 1448,
  [SMALL_STATE(64)] = 1459,
  [SMALL_STATE(65)] = 1472,
  [SMALL_STATE(66)] = 1485,
  [SMALL_STATE(67)] = 1496,
  [SMALL_STATE(68)] = 1503,
  [SMALL_STATE(69)] = 1510,
  [SMALL_STATE(70)] = 1520,
  [SMALL_STATE(71)] = 1530,
  [SMALL_STATE(72)] = 1538,
  [SMALL_STATE(73)] = 1546,
  [SMALL_STATE(74)] = 1554,
  [SMALL_STATE(75)] = 1559,
  [SMALL_STATE(76)] = 1566,
  [SMALL_STATE(77)] = 1571,
  [SMALL_STATE(78)] = 1576,
  [SMALL_STATE(79)] = 1583,
  [SMALL_STATE(80)] = 1590,
  [SMALL_STATE(81)] = 1595,
  [SMALL_STATE(82)] = 1602,
  [SMALL_STATE(83)] = 1609,
  [SMALL_STATE(84)] = 1616,
  [SMALL_STATE(85)] = 1623,
  [SMALL_STATE(86)] = 1627,
  [SMALL_STATE(87)] = 1631,
  [SMALL_STATE(88)] = 1635,
  [SMALL_STATE(89)] = 1639,
  [SMALL_STATE(90)] = 1643,
  [SMALL_STATE(91)] = 1647,
  [SMALL_STATE(92)] = 1651,
  [SMALL_STATE(93)] = 1655,
  [SMALL_STATE(94)] = 1659,
  [SMALL_STATE(95)] = 1663,
  [SMALL_STATE(96)] = 1667,
  [SMALL_STATE(97)] = 1671,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(65),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(37),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(18),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(7),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(7),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_repeat1, 2), SHIFT_REPEAT(37),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_repeat1, 2), SHIFT_REPEAT(10),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_repeat1, 2), SHIFT_REPEAT(10),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 4),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(37),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(18),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(7),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(7),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_repeat2, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_repeat2, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_repeat2, 2), SHIFT_REPEAT(50),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_repeat2, 2), SHIFT_REPEAT(50),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 3),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(37),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(7),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(7),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_in_blk, 3),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_repeat1, 2), SHIFT_REPEAT(37),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_repeat1, 2), SHIFT_REPEAT(90),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value_repeat1, 2), SHIFT_REPEAT(90),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(51),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(82),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(69),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_in_blk, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_vars, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_vars, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_op, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_op, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_vars, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_vars, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_vars, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_vars, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cmd_list_repeat1, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_line, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_kind, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_kind, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_line, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_chain, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_chain_part, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value_repeat1, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_blk, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_def, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_blk, 6),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_blk, 5),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_chain, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_var_stmt, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_vars_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_vars_repeat1, 2), SHIFT_REPEAT(92),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_var_stmt, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_list, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_list, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_ctx, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_in_blk, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_ctx, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_chain_part, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [331] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
