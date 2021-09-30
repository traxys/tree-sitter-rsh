#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
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
  sym_cmd_name = 46,
  sym_redir_kind = 47,
  sym_redir = 48,
  sym__word = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_source_file_repeat2 = 51,
  aux_sym__value_repeat1 = 52,
  aux_sym__cmd_in_blk_repeat1 = 53,
  aux_sym_cmd_vars_repeat1 = 54,
  aux_sym__cmd_list_repeat1 = 55,
  aux_sym_pipeline_repeat1 = 56,
  aux_sym_cmd_repeat1 = 57,
  aux_sym_cmd_repeat2 = 58,
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
  [sym_cmd_name] = "cmd_name",
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
  [sym_cmd_name] = sym_cmd_name,
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
  [sym_cmd_name] = {
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
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 13},
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
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 17},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
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
  [98] = {.lex_state = 0},
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
    [sym_source_file] = STATE(94),
    [sym__statement_line] = STATE(32),
    [sym__statement] = STATE(55),
    [sym_let_statement] = STATE(55),
    [sym__cmd_blk] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(25),
    [aux_sym_source_file_repeat2] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_cmd] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(9), 1,
      sym_cmd_name,
    STATE(12), 1,
      sym_cmd_vars,
    STATE(16), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(43), 1,
      sym_cmd,
    STATE(54), 1,
      sym_pipeline,
    STATE(72), 1,
      sym_cmd_chain,
    STATE(74), 1,
      sym__cmd_chain_part,
    STATE(78), 1,
      sym__cmd_list,
    STATE(87), 1,
      sym__cmd_in_blk,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(17), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(81), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [68] = 20,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(9), 1,
      sym_cmd_name,
    STATE(12), 1,
      sym_cmd_vars,
    STATE(16), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(43), 1,
      sym_cmd,
    STATE(54), 1,
      sym_pipeline,
    STATE(72), 1,
      sym_cmd_chain,
    STATE(74), 1,
      sym__cmd_chain_part,
    STATE(78), 1,
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
    STATE(17), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(81), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [136] = 20,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(7), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(9), 1,
      sym_cmd_name,
    STATE(12), 1,
      sym_cmd_vars,
    STATE(16), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(43), 1,
      sym_cmd,
    STATE(54), 1,
      sym_pipeline,
    STATE(72), 1,
      sym_cmd_chain,
    STATE(74), 1,
      sym__cmd_chain_part,
    STATE(78), 1,
      sym__cmd_list,
    STATE(91), 1,
      sym__cmd_in_blk,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(17), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(81), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [204] = 20,
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
    STATE(7), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(9), 1,
      sym_cmd_name,
    STATE(12), 1,
      sym_cmd_vars,
    STATE(16), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(43), 1,
      sym_cmd,
    STATE(54), 1,
      sym_pipeline,
    STATE(72), 1,
      sym_cmd_chain,
    STATE(74), 1,
      sym__cmd_chain_part,
    STATE(78), 1,
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
    STATE(17), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(81), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [272] = 17,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(32), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(9), 1,
      sym_cmd_name,
    STATE(12), 1,
      sym_cmd_vars,
    STATE(16), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(43), 1,
      sym_cmd,
    STATE(54), 1,
      sym_pipeline,
    STATE(72), 1,
      sym_cmd_chain,
    STATE(74), 1,
      sym__cmd_chain_part,
    STATE(78), 1,
      sym__cmd_list,
    ACTIONS(38), 2,
      sym_istr,
      sym_str,
    ACTIONS(41), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(17), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(96), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [331] = 17,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(9), 1,
      sym_cmd_name,
    STATE(12), 1,
      sym_cmd_vars,
    STATE(16), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(43), 1,
      sym_cmd,
    STATE(54), 1,
      sym_pipeline,
    STATE(72), 1,
      sym_cmd_chain,
    STATE(74), 1,
      sym__cmd_chain_part,
    STATE(78), 1,
      sym__cmd_list,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(17), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(80), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [390] = 10,
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
    STATE(22), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(54), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(10), 4,
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
  [434] = 10,
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
    STATE(20), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(62), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(8), 4,
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
  [478] = 6,
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
  [511] = 2,
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
  [534] = 13,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_cmd_name,
    STATE(16), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(43), 1,
      sym_cmd,
    STATE(54), 1,
      sym_pipeline,
    STATE(72), 1,
      sym_cmd_chain,
    STATE(74), 1,
      sym__cmd_chain_part,
    STATE(83), 1,
      sym__cmd_list,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(17), 3,
      sym__expr,
      sym__value,
      sym__word,
  [579] = 2,
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
  [602] = 2,
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
  [625] = 12,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_cmd_name,
    STATE(15), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(43), 1,
      sym_cmd,
    STATE(54), 1,
      sym_pipeline,
    STATE(74), 1,
      sym__cmd_chain_part,
    STATE(86), 1,
      sym_cmd_chain,
    ACTIONS(95), 2,
      sym_istr,
      sym_str,
    ACTIONS(98), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(17), 3,
      sym__expr,
      sym__value,
      sym__word,
  [667] = 12,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_cmd_name,
    STATE(15), 1,
      aux_sym__cmd_list_repeat1,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(43), 1,
      sym_cmd,
    STATE(54), 1,
      sym_pipeline,
    STATE(70), 1,
      sym_cmd_chain,
    STATE(74), 1,
      sym__cmd_chain_part,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(17), 3,
      sym__expr,
      sym__value,
      sym__word,
  [709] = 2,
    ACTIONS(103), 5,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(101), 11,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT_GT,
      sym_istr,
      sym_str,
  [730] = 11,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_cmd_name,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(43), 1,
      sym_cmd,
    STATE(54), 1,
      sym_pipeline,
    STATE(74), 1,
      sym__cmd_chain_part,
    STATE(97), 1,
      sym_cmd_chain,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(17), 3,
      sym__expr,
      sym__value,
      sym__word,
  [769] = 11,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_cmd_name,
    STATE(23), 1,
      aux_sym_pipeline_repeat1,
    STATE(43), 1,
      sym_cmd,
    STATE(54), 1,
      sym_pipeline,
    STATE(61), 1,
      sym_cmd_chain,
    STATE(74), 1,
      sym__cmd_chain_part,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(17), 3,
      sym__expr,
      sym__value,
      sym__word,
  [808] = 6,
    ACTIONS(46), 1,
      anon_sym_PIPE,
    ACTIONS(48), 1,
      anon_sym_GT,
    STATE(35), 1,
      sym_redir_kind,
    ACTIONS(50), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    STATE(21), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(44), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [834] = 6,
    ACTIONS(107), 1,
      anon_sym_PIPE,
    ACTIONS(109), 1,
      anon_sym_GT,
    STATE(35), 1,
      sym_redir_kind,
    ACTIONS(112), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    STATE(21), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(105), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [860] = 6,
    ACTIONS(48), 1,
      anon_sym_GT,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    STATE(35), 1,
      sym_redir_kind,
    ACTIONS(50), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    STATE(21), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(115), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [886] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_cmd_name,
    STATE(24), 1,
      aux_sym_pipeline_repeat1,
    STATE(47), 1,
      sym_cmd,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(17), 3,
      sym__expr,
      sym__value,
      sym__word,
  [913] = 7,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_cmd_name,
    STATE(24), 1,
      aux_sym_pipeline_repeat1,
    STATE(88), 1,
      sym_cmd,
    ACTIONS(122), 2,
      sym_istr,
      sym_str,
    ACTIONS(125), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(17), 3,
      sym__expr,
      sym__value,
      sym__word,
  [940] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_cmd,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      anon_sym_LF,
    STATE(42), 1,
      aux_sym_source_file_repeat1,
    STATE(37), 2,
      sym__statement_line,
      aux_sym_source_file_repeat2,
    STATE(55), 3,
      sym__statement,
      sym_let_statement,
      sym__cmd_blk,
  [968] = 2,
    ACTIONS(134), 2,
      anon_sym_PIPE,
      anon_sym_GT,
    ACTIONS(132), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT_GT,
  [983] = 4,
    ACTIONS(136), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(139), 4,
      anon_sym_let,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(141), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1002] = 6,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_let,
    ACTIONS(151), 1,
      anon_sym_cmd,
    STATE(28), 2,
      sym__statement_line,
      aux_sym_source_file_repeat2,
    STATE(55), 3,
      sym__statement,
      sym_let_statement,
      sym__cmd_blk,
  [1024] = 6,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym__value_repeat1,
    ACTIONS(159), 2,
      sym_istr,
      sym_str,
    ACTIONS(162), 2,
      sym_int,
      sym_identifier,
    STATE(92), 2,
      sym__strong_expr,
      sym__value,
  [1046] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym__value_repeat1,
    ACTIONS(167), 2,
      sym_istr,
      sym_str,
    ACTIONS(169), 2,
      sym_int,
      sym_identifier,
    STATE(79), 2,
      sym__strong_expr,
      sym__value,
  [1068] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym__value_repeat1,
    ACTIONS(173), 2,
      sym_istr,
      sym_str,
    ACTIONS(175), 2,
      sym_int,
      sym_identifier,
    STATE(85), 2,
      sym__strong_expr,
      sym__value,
  [1090] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_cmd,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym__statement_line,
      aux_sym_source_file_repeat2,
    STATE(55), 3,
      sym__statement,
      sym_let_statement,
      sym__cmd_blk,
  [1112] = 3,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(177), 4,
      anon_sym_let,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(179), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1128] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      aux_sym__value_repeat1,
    ACTIONS(185), 2,
      sym_istr,
      sym_str,
    ACTIONS(187), 2,
      sym_int,
      sym_identifier,
    STATE(77), 2,
      sym__strong_expr,
      sym__value,
  [1150] = 4,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 2,
      sym_istr,
      sym_str,
    ACTIONS(191), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(26), 3,
      sym__expr,
      sym__value,
      sym__word,
  [1168] = 3,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    ACTIONS(177), 4,
      anon_sym_let,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(179), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1184] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_cmd,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym__statement_line,
      aux_sym_source_file_repeat2,
    STATE(55), 3,
      sym__statement,
      sym_let_statement,
      sym__cmd_blk,
  [1206] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym__value_repeat1,
    ACTIONS(199), 2,
      sym_istr,
      sym_str,
    ACTIONS(201), 2,
      sym_int,
      sym_identifier,
    STATE(84), 2,
      sym__strong_expr,
      sym__value,
  [1228] = 2,
    ACTIONS(177), 4,
      anon_sym_let,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(179), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1241] = 2,
    ACTIONS(205), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(203), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1253] = 4,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 2,
      sym_istr,
      sym_str,
    ACTIONS(209), 2,
      sym_int,
      sym_identifier,
    STATE(58), 2,
      sym__strong_expr,
      sym__value,
  [1269] = 3,
    ACTIONS(211), 1,
      anon_sym_LF,
    STATE(42), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_let,
      anon_sym_cmd,
      anon_sym_LBRACE,
  [1283] = 2,
    ACTIONS(216), 1,
      anon_sym_PIPE,
    ACTIONS(214), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [1295] = 2,
    ACTIONS(220), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(218), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1307] = 2,
    ACTIONS(224), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(222), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1319] = 2,
    ACTIONS(228), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(226), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1331] = 2,
    ACTIONS(216), 1,
      anon_sym_PIPE,
    ACTIONS(230), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [1343] = 4,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 2,
      sym_istr,
      sym_str,
    ACTIONS(209), 2,
      sym_int,
      sym_identifier,
    STATE(58), 2,
      sym__strong_expr,
      sym__value,
  [1359] = 2,
    ACTIONS(236), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(234), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1371] = 2,
    ACTIONS(238), 2,
      sym_int,
      sym_identifier,
    ACTIONS(157), 4,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_istr,
      sym_str,
  [1382] = 3,
    ACTIONS(130), 1,
      anon_sym_LF,
    STATE(42), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(240), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_let,
      anon_sym_cmd,
  [1395] = 2,
    ACTIONS(242), 3,
      anon_sym_LBRACK,
      sym_istr,
      sym_str,
    ACTIONS(244), 3,
      sym_int,
      sym_identifier,
      sym_word,
  [1406] = 2,
    ACTIONS(246), 3,
      anon_sym_LBRACK,
      sym_istr,
      sym_str,
    ACTIONS(248), 3,
      sym_int,
      sym_identifier,
      sym_word,
  [1417] = 2,
    ACTIONS(252), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(250), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1428] = 3,
    ACTIONS(256), 1,
      anon_sym_LF,
    STATE(51), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(254), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_let,
      anon_sym_cmd,
  [1441] = 1,
    ACTIONS(258), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_let,
      anon_sym_cmd,
  [1449] = 1,
    ACTIONS(260), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_let,
      anon_sym_cmd,
  [1457] = 1,
    ACTIONS(262), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_in,
  [1465] = 1,
    ACTIONS(264), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_let,
      anon_sym_cmd,
  [1473] = 1,
    ACTIONS(266), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_let,
      anon_sym_cmd,
  [1481] = 1,
    ACTIONS(268), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1488] = 3,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(274), 1,
      anon_sym_in,
    ACTIONS(270), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1499] = 1,
    ACTIONS(81), 4,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_in,
  [1506] = 1,
    ACTIONS(85), 4,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_in,
  [1513] = 3,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_in,
    ACTIONS(276), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1524] = 4,
    ACTIONS(280), 1,
      anon_sym_in,
    ACTIONS(282), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym_cmd_vars_repeat1,
    STATE(90), 1,
      sym_var_def,
  [1537] = 1,
    ACTIONS(77), 4,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_in,
  [1544] = 4,
    ACTIONS(285), 1,
      anon_sym_in,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(62), 1,
      sym_var_def,
    STATE(69), 1,
      aux_sym_cmd_vars_repeat1,
  [1557] = 4,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_in,
    STATE(65), 1,
      sym_var_def,
    STATE(66), 1,
      aux_sym_cmd_vars_repeat1,
  [1570] = 2,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(291), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1578] = 3,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      aux_sym_source_file_repeat1,
  [1588] = 2,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(297), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1596] = 3,
    ACTIONS(299), 1,
      anon_sym_LF,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      aux_sym_source_file_repeat1,
  [1606] = 2,
    STATE(19), 1,
      sym_cmd_op,
    ACTIONS(303), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1614] = 2,
    ACTIONS(305), 1,
      sym_identifier,
    STATE(89), 1,
      sym_var_def,
  [1621] = 1,
    ACTIONS(280), 2,
      anon_sym_in,
      sym_identifier,
  [1626] = 2,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    ACTIONS(307), 1,
      anon_sym_COMMA,
  [1633] = 1,
    ACTIONS(309), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1638] = 2,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    ACTIONS(307), 1,
      anon_sym_COMMA,
  [1645] = 2,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    ACTIONS(311), 1,
      anon_sym_LF,
  [1652] = 2,
    ACTIONS(313), 1,
      anon_sym_LF,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
  [1659] = 1,
    ACTIONS(317), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1664] = 1,
    ACTIONS(319), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1669] = 2,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
  [1676] = 2,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
  [1683] = 1,
    ACTIONS(293), 1,
      anon_sym_SEMI,
  [1687] = 1,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
  [1691] = 1,
    ACTIONS(327), 1,
      anon_sym_PIPE,
  [1695] = 1,
    ACTIONS(329), 1,
      anon_sym_SEMI,
  [1699] = 1,
    ACTIONS(272), 1,
      anon_sym_COMMA,
  [1703] = 1,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
  [1707] = 1,
    ACTIONS(307), 1,
      anon_sym_COMMA,
  [1711] = 1,
    ACTIONS(333), 1,
      anon_sym_EQ,
  [1715] = 1,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
  [1719] = 1,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
  [1723] = 1,
    ACTIONS(339), 1,
      anon_sym_LF,
  [1727] = 1,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
  [1731] = 1,
    ACTIONS(343), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 136,
  [SMALL_STATE(5)] = 204,
  [SMALL_STATE(6)] = 272,
  [SMALL_STATE(7)] = 331,
  [SMALL_STATE(8)] = 390,
  [SMALL_STATE(9)] = 434,
  [SMALL_STATE(10)] = 478,
  [SMALL_STATE(11)] = 511,
  [SMALL_STATE(12)] = 534,
  [SMALL_STATE(13)] = 579,
  [SMALL_STATE(14)] = 602,
  [SMALL_STATE(15)] = 625,
  [SMALL_STATE(16)] = 667,
  [SMALL_STATE(17)] = 709,
  [SMALL_STATE(18)] = 730,
  [SMALL_STATE(19)] = 769,
  [SMALL_STATE(20)] = 808,
  [SMALL_STATE(21)] = 834,
  [SMALL_STATE(22)] = 860,
  [SMALL_STATE(23)] = 886,
  [SMALL_STATE(24)] = 913,
  [SMALL_STATE(25)] = 940,
  [SMALL_STATE(26)] = 968,
  [SMALL_STATE(27)] = 983,
  [SMALL_STATE(28)] = 1002,
  [SMALL_STATE(29)] = 1024,
  [SMALL_STATE(30)] = 1046,
  [SMALL_STATE(31)] = 1068,
  [SMALL_STATE(32)] = 1090,
  [SMALL_STATE(33)] = 1112,
  [SMALL_STATE(34)] = 1128,
  [SMALL_STATE(35)] = 1150,
  [SMALL_STATE(36)] = 1168,
  [SMALL_STATE(37)] = 1184,
  [SMALL_STATE(38)] = 1206,
  [SMALL_STATE(39)] = 1228,
  [SMALL_STATE(40)] = 1241,
  [SMALL_STATE(41)] = 1253,
  [SMALL_STATE(42)] = 1269,
  [SMALL_STATE(43)] = 1283,
  [SMALL_STATE(44)] = 1295,
  [SMALL_STATE(45)] = 1307,
  [SMALL_STATE(46)] = 1319,
  [SMALL_STATE(47)] = 1331,
  [SMALL_STATE(48)] = 1343,
  [SMALL_STATE(49)] = 1359,
  [SMALL_STATE(50)] = 1371,
  [SMALL_STATE(51)] = 1382,
  [SMALL_STATE(52)] = 1395,
  [SMALL_STATE(53)] = 1406,
  [SMALL_STATE(54)] = 1417,
  [SMALL_STATE(55)] = 1428,
  [SMALL_STATE(56)] = 1441,
  [SMALL_STATE(57)] = 1449,
  [SMALL_STATE(58)] = 1457,
  [SMALL_STATE(59)] = 1465,
  [SMALL_STATE(60)] = 1473,
  [SMALL_STATE(61)] = 1481,
  [SMALL_STATE(62)] = 1488,
  [SMALL_STATE(63)] = 1499,
  [SMALL_STATE(64)] = 1506,
  [SMALL_STATE(65)] = 1513,
  [SMALL_STATE(66)] = 1524,
  [SMALL_STATE(67)] = 1537,
  [SMALL_STATE(68)] = 1544,
  [SMALL_STATE(69)] = 1557,
  [SMALL_STATE(70)] = 1570,
  [SMALL_STATE(71)] = 1578,
  [SMALL_STATE(72)] = 1588,
  [SMALL_STATE(73)] = 1596,
  [SMALL_STATE(74)] = 1606,
  [SMALL_STATE(75)] = 1614,
  [SMALL_STATE(76)] = 1621,
  [SMALL_STATE(77)] = 1626,
  [SMALL_STATE(78)] = 1633,
  [SMALL_STATE(79)] = 1638,
  [SMALL_STATE(80)] = 1645,
  [SMALL_STATE(81)] = 1652,
  [SMALL_STATE(82)] = 1659,
  [SMALL_STATE(83)] = 1664,
  [SMALL_STATE(84)] = 1669,
  [SMALL_STATE(85)] = 1676,
  [SMALL_STATE(86)] = 1683,
  [SMALL_STATE(87)] = 1687,
  [SMALL_STATE(88)] = 1691,
  [SMALL_STATE(89)] = 1695,
  [SMALL_STATE(90)] = 1699,
  [SMALL_STATE(91)] = 1703,
  [SMALL_STATE(92)] = 1707,
  [SMALL_STATE(93)] = 1711,
  [SMALL_STATE(94)] = 1715,
  [SMALL_STATE(95)] = 1719,
  [SMALL_STATE(96)] = 1723,
  [SMALL_STATE(97)] = 1727,
  [SMALL_STATE(98)] = 1731,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(68),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(34),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(18),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(17),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(17),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_repeat1, 2), SHIFT_REPEAT(34),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_repeat1, 2), SHIFT_REPEAT(10),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_repeat1, 2), SHIFT_REPEAT(10),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(34),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(18),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(17),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(17),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_name, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_name, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_repeat2, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_repeat2, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_repeat2, 2), SHIFT_REPEAT(53),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_repeat2, 2), SHIFT_REPEAT(53),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 3),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(34),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(17),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(17),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(55),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(75),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(73),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_repeat1, 2), SHIFT_REPEAT(34),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_repeat1, 2), SHIFT_REPEAT(92),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value_repeat1, 2), SHIFT_REPEAT(92),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_in_blk, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_in_blk, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_vars, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_vars, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cmd_list_repeat1, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_op, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_op, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_vars, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_vars, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_vars, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_vars, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value_repeat1, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_line, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_kind, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_kind, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_chain, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_chain_part, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_line, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_blk, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_def, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_blk, 6),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_blk, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_chain, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_var_stmt, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_var_stmt, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_vars_repeat1, 2),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_vars_repeat1, 2), SHIFT_REPEAT(93),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_list, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_list, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_ctx, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_in_blk, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_chain_part, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_ctx, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [335] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
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
