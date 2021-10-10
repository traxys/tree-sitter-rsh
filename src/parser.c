#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 110
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  anon_sym_capture = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_cmd = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_in = 15,
  anon_sym_PIPE_PIPE = 16,
  anon_sym_AMP_AMP = 17,
  anon_sym_PIPE = 18,
  anon_sym_GT = 19,
  anon_sym_LT = 20,
  anon_sym_GT_GT = 21,
  sym_istr = 22,
  sym_int = 23,
  sym_str = 24,
  sym_identifier = 25,
  sym_word = 26,
  sym_source_file = 27,
  sym__statement_line = 28,
  sym__statement = 29,
  sym_let_statement = 30,
  sym_var_def = 31,
  sym__strong_expr = 32,
  sym__expr = 33,
  sym__value = 34,
  sym_capture = 35,
  sym__cmd_blk = 36,
  sym__cmd_in_blk = 37,
  sym_cmd_vars = 38,
  sym_cmd_var_stmt = 39,
  sym__cmd_stmt = 40,
  sym_cmd_ctx = 41,
  sym__cmd_list = 42,
  sym_cmd_op = 43,
  sym_cmd_chain = 44,
  sym__cmd_chain_part = 45,
  sym_pipeline = 46,
  sym_cmd = 47,
  sym_cmd_name = 48,
  sym_redir_kind = 49,
  sym_redir = 50,
  sym__word = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_source_file_repeat2 = 53,
  aux_sym__value_repeat1 = 54,
  aux_sym__cmd_in_blk_repeat1 = 55,
  aux_sym_cmd_vars_repeat1 = 56,
  aux_sym__cmd_list_repeat1 = 57,
  aux_sym_pipeline_repeat1 = 58,
  aux_sym_cmd_repeat1 = 59,
  aux_sym_cmd_repeat2 = 60,
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
  [anon_sym_capture] = "capture",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_cmd] = "cmd",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_in] = "in",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
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
  [sym_capture] = "capture",
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
  [anon_sym_capture] = anon_sym_capture,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_cmd] = anon_sym_cmd,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
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
  [sym_capture] = sym_capture,
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
  [anon_sym_capture] = {
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
  [sym_capture] = {
    .visible = true,
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
      if (eof) ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '}') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == 'i') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_capture);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_capture);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(44);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_istr);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_istr);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_str);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 22},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 22},
  [56] = {.lex_state = 22},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 22},
  [61] = {.lex_state = 19},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 22},
  [64] = {.lex_state = 22},
  [65] = {.lex_state = 22},
  [66] = {.lex_state = 20},
  [67] = {.lex_state = 22},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 22},
  [70] = {.lex_state = 22},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 22},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 22},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
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
    [anon_sym_capture] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_cmd] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
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
    [sym_source_file] = STATE(108),
    [sym__statement_line] = STATE(30),
    [sym__statement] = STATE(53),
    [sym_let_statement] = STATE(53),
    [sym_capture] = STATE(97),
    [sym__cmd_blk] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(24),
    [aux_sym_source_file_repeat2] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_capture] = ACTIONS(11),
    [anon_sym_cmd] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(8), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(10), 1,
      sym_cmd_name,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(18), 1,
      aux_sym__cmd_list_repeat1,
    STATE(26), 1,
      aux_sym_pipeline_repeat1,
    STATE(50), 1,
      sym_cmd,
    STATE(59), 1,
      sym_pipeline,
    STATE(78), 1,
      sym__cmd_chain_part,
    STATE(79), 1,
      sym_cmd_chain,
    STATE(87), 1,
      sym__cmd_list,
    STATE(99), 1,
      sym__cmd_in_blk,
    ACTIONS(23), 2,
      sym_istr,
      sym_str,
    ACTIONS(25), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(21), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(84), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [68] = 20,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(10), 1,
      sym_cmd_name,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(18), 1,
      aux_sym__cmd_list_repeat1,
    STATE(26), 1,
      aux_sym_pipeline_repeat1,
    STATE(32), 1,
      aux_sym_source_file_repeat1,
    STATE(50), 1,
      sym_cmd,
    STATE(59), 1,
      sym_pipeline,
    STATE(78), 1,
      sym__cmd_chain_part,
    STATE(79), 1,
      sym_cmd_chain,
    STATE(87), 1,
      sym__cmd_list,
    STATE(98), 1,
      sym__cmd_in_blk,
    ACTIONS(23), 2,
      sym_istr,
      sym_str,
    ACTIONS(25), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(21), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(84), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [136] = 20,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(10), 1,
      sym_cmd_name,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(18), 1,
      aux_sym__cmd_list_repeat1,
    STATE(26), 1,
      aux_sym_pipeline_repeat1,
    STATE(32), 1,
      aux_sym_source_file_repeat1,
    STATE(50), 1,
      sym_cmd,
    STATE(59), 1,
      sym_pipeline,
    STATE(78), 1,
      sym__cmd_chain_part,
    STATE(79), 1,
      sym_cmd_chain,
    STATE(87), 1,
      sym__cmd_list,
    STATE(99), 1,
      sym__cmd_in_blk,
    ACTIONS(23), 2,
      sym_istr,
      sym_str,
    ACTIONS(25), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(21), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(84), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [204] = 20,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(8), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(10), 1,
      sym_cmd_name,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(18), 1,
      aux_sym__cmd_list_repeat1,
    STATE(26), 1,
      aux_sym_pipeline_repeat1,
    STATE(50), 1,
      sym_cmd,
    STATE(59), 1,
      sym_pipeline,
    STATE(78), 1,
      sym__cmd_chain_part,
    STATE(79), 1,
      sym_cmd_chain,
    STATE(87), 1,
      sym__cmd_list,
    STATE(101), 1,
      sym__cmd_in_blk,
    ACTIONS(23), 2,
      sym_istr,
      sym_str,
    ACTIONS(25), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(21), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(84), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [272] = 20,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(10), 1,
      sym_cmd_name,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(18), 1,
      aux_sym__cmd_list_repeat1,
    STATE(26), 1,
      aux_sym_pipeline_repeat1,
    STATE(32), 1,
      aux_sym_source_file_repeat1,
    STATE(50), 1,
      sym_cmd,
    STATE(59), 1,
      sym_pipeline,
    STATE(78), 1,
      sym__cmd_chain_part,
    STATE(79), 1,
      sym_cmd_chain,
    STATE(87), 1,
      sym__cmd_list,
    STATE(101), 1,
      sym__cmd_in_blk,
    ACTIONS(23), 2,
      sym_istr,
      sym_str,
    ACTIONS(25), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(21), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(84), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [340] = 20,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(8), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(10), 1,
      sym_cmd_name,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(18), 1,
      aux_sym__cmd_list_repeat1,
    STATE(26), 1,
      aux_sym_pipeline_repeat1,
    STATE(50), 1,
      sym_cmd,
    STATE(59), 1,
      sym_pipeline,
    STATE(78), 1,
      sym__cmd_chain_part,
    STATE(79), 1,
      sym_cmd_chain,
    STATE(87), 1,
      sym__cmd_list,
    STATE(92), 1,
      sym__cmd_in_blk,
    ACTIONS(23), 2,
      sym_istr,
      sym_str,
    ACTIONS(25), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(21), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(84), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [408] = 17,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(10), 1,
      sym_cmd_name,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(18), 1,
      aux_sym__cmd_list_repeat1,
    STATE(26), 1,
      aux_sym_pipeline_repeat1,
    STATE(50), 1,
      sym_cmd,
    STATE(59), 1,
      sym_pipeline,
    STATE(78), 1,
      sym__cmd_chain_part,
    STATE(79), 1,
      sym_cmd_chain,
    STATE(87), 1,
      sym__cmd_list,
    ACTIONS(23), 2,
      sym_istr,
      sym_str,
    ACTIONS(25), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(21), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(81), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [467] = 17,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(36), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym__cmd_in_blk_repeat1,
    STATE(10), 1,
      sym_cmd_name,
    STATE(14), 1,
      sym_cmd_vars,
    STATE(18), 1,
      aux_sym__cmd_list_repeat1,
    STATE(26), 1,
      aux_sym_pipeline_repeat1,
    STATE(50), 1,
      sym_cmd,
    STATE(59), 1,
      sym_pipeline,
    STATE(78), 1,
      sym__cmd_chain_part,
    STATE(79), 1,
      sym_cmd_chain,
    STATE(87), 1,
      sym__cmd_list,
    ACTIONS(42), 2,
      sym_istr,
      sym_str,
    ACTIONS(45), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(21), 3,
      sym__expr,
      sym__value,
      sym__word,
    STATE(106), 3,
      sym_cmd_var_stmt,
      sym__cmd_stmt,
      sym_cmd_ctx,
  [526] = 10,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(50), 1,
      anon_sym_PIPE,
    ACTIONS(52), 1,
      anon_sym_GT,
    STATE(39), 1,
      sym_redir_kind,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    ACTIONS(56), 2,
      sym_istr,
      sym_str,
    STATE(22), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(58), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(11), 4,
      sym__expr,
      sym__value,
      sym__word,
      aux_sym_cmd_repeat1,
    ACTIONS(48), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [570] = 10,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      anon_sym_GT,
    ACTIONS(62), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      sym_redir_kind,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    ACTIONS(64), 2,
      sym_istr,
      sym_str,
    STATE(25), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(66), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(12), 4,
      sym__expr,
      sym__value,
      sym__word,
      aux_sym_cmd_repeat1,
    ACTIONS(60), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [614] = 6,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 2,
      anon_sym_PIPE,
      anon_sym_GT,
    ACTIONS(75), 2,
      sym_istr,
      sym_str,
    ACTIONS(78), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(12), 4,
      sym__expr,
      sym__value,
      sym__word,
      aux_sym_cmd_repeat1,
    ACTIONS(68), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT_GT,
  [647] = 2,
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
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT_GT,
      sym_istr,
      sym_str,
  [670] = 13,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_cmd_name,
    STATE(18), 1,
      aux_sym__cmd_list_repeat1,
    STATE(26), 1,
      aux_sym_pipeline_repeat1,
    STATE(50), 1,
      sym_cmd,
    STATE(59), 1,
      sym_pipeline,
    STATE(78), 1,
      sym__cmd_chain_part,
    STATE(79), 1,
      sym_cmd_chain,
    STATE(89), 1,
      sym__cmd_list,
    ACTIONS(23), 2,
      sym_istr,
      sym_str,
    ACTIONS(25), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(21), 3,
      sym__expr,
      sym__value,
      sym__word,
  [715] = 2,
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
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT_GT,
      sym_istr,
      sym_str,
  [738] = 2,
    ACTIONS(91), 5,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(89), 13,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT_GT,
      sym_istr,
      sym_str,
  [761] = 12,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_cmd_name,
    STATE(17), 1,
      aux_sym__cmd_list_repeat1,
    STATE(26), 1,
      aux_sym_pipeline_repeat1,
    STATE(50), 1,
      sym_cmd,
    STATE(59), 1,
      sym_pipeline,
    STATE(78), 1,
      sym__cmd_chain_part,
    STATE(105), 1,
      sym_cmd_chain,
    ACTIONS(99), 2,
      sym_istr,
      sym_str,
    ACTIONS(102), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(21), 3,
      sym__expr,
      sym__value,
      sym__word,
  [803] = 12,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_cmd_name,
    STATE(17), 1,
      aux_sym__cmd_list_repeat1,
    STATE(26), 1,
      aux_sym_pipeline_repeat1,
    STATE(50), 1,
      sym_cmd,
    STATE(59), 1,
      sym_pipeline,
    STATE(73), 1,
      sym_cmd_chain,
    STATE(78), 1,
      sym__cmd_chain_part,
    ACTIONS(23), 2,
      sym_istr,
      sym_str,
    ACTIONS(25), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(21), 3,
      sym__expr,
      sym__value,
      sym__word,
  [845] = 11,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_cmd_name,
    STATE(26), 1,
      aux_sym_pipeline_repeat1,
    STATE(50), 1,
      sym_cmd,
    STATE(59), 1,
      sym_pipeline,
    STATE(71), 1,
      sym_cmd_chain,
    STATE(78), 1,
      sym__cmd_chain_part,
    ACTIONS(23), 2,
      sym_istr,
      sym_str,
    ACTIONS(25), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(21), 3,
      sym__expr,
      sym__value,
      sym__word,
  [884] = 11,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_cmd_name,
    STATE(26), 1,
      aux_sym_pipeline_repeat1,
    STATE(50), 1,
      sym_cmd,
    STATE(59), 1,
      sym_pipeline,
    STATE(78), 1,
      sym__cmd_chain_part,
    STATE(102), 1,
      sym_cmd_chain,
    ACTIONS(23), 2,
      sym_istr,
      sym_str,
    ACTIONS(25), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(21), 3,
      sym__expr,
      sym__value,
      sym__word,
  [923] = 2,
    ACTIONS(107), 5,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(105), 11,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT_GT,
      sym_istr,
      sym_str,
  [944] = 6,
    ACTIONS(52), 1,
      anon_sym_GT,
    ACTIONS(62), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      sym_redir_kind,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    STATE(23), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(60), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [970] = 6,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_GT,
    STATE(39), 1,
      sym_redir_kind,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    STATE(23), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(109), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [996] = 10,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_capture,
    ACTIONS(13), 1,
      anon_sym_cmd,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_LF,
    STATE(41), 1,
      aux_sym_source_file_repeat1,
    STATE(97), 1,
      sym_capture,
    STATE(28), 2,
      sym__statement_line,
      aux_sym_source_file_repeat2,
    STATE(53), 3,
      sym__statement,
      sym_let_statement,
      sym__cmd_blk,
  [1030] = 6,
    ACTIONS(52), 1,
      anon_sym_GT,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      sym_redir_kind,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    STATE(23), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(123), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1056] = 7,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_cmd_name,
    STATE(27), 1,
      aux_sym_pipeline_repeat1,
    STATE(44), 1,
      sym_cmd,
    ACTIONS(23), 2,
      sym_istr,
      sym_str,
    ACTIONS(25), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(21), 3,
      sym__expr,
      sym__value,
      sym__word,
  [1083] = 7,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_cmd_name,
    STATE(27), 1,
      aux_sym_pipeline_repeat1,
    STATE(103), 1,
      sym_cmd,
    ACTIONS(130), 2,
      sym_istr,
      sym_str,
    ACTIONS(133), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(21), 3,
      sym__expr,
      sym__value,
      sym__word,
  [1110] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_capture,
    ACTIONS(13), 1,
      anon_sym_cmd,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(97), 1,
      sym_capture,
    STATE(29), 2,
      sym__statement_line,
      aux_sym_source_file_repeat2,
    STATE(53), 3,
      sym__statement,
      sym_let_statement,
      sym__cmd_blk,
  [1138] = 8,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_let,
    ACTIONS(146), 1,
      anon_sym_capture,
    ACTIONS(149), 1,
      anon_sym_cmd,
    STATE(97), 1,
      sym_capture,
    STATE(29), 2,
      sym__statement_line,
      aux_sym_source_file_repeat2,
    STATE(53), 3,
      sym__statement,
      sym_let_statement,
      sym__cmd_blk,
  [1166] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_capture,
    ACTIONS(13), 1,
      anon_sym_cmd,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(97), 1,
      sym_capture,
    STATE(29), 2,
      sym__statement_line,
      aux_sym_source_file_repeat2,
    STATE(53), 3,
      sym__statement,
      sym_let_statement,
      sym__cmd_blk,
  [1194] = 2,
    ACTIONS(154), 2,
      anon_sym_PIPE,
      anon_sym_GT,
    ACTIONS(152), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LT,
      anon_sym_GT_GT,
  [1209] = 4,
    ACTIONS(156), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(159), 4,
      anon_sym_let,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(161), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1228] = 3,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    ACTIONS(163), 4,
      anon_sym_let,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(165), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1244] = 6,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym__value_repeat1,
    ACTIONS(171), 2,
      sym_istr,
      sym_str,
    ACTIONS(173), 2,
      sym_int,
      sym_identifier,
    STATE(88), 2,
      sym__strong_expr,
      sym__value,
  [1266] = 6,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      aux_sym__value_repeat1,
    ACTIONS(177), 2,
      sym_istr,
      sym_str,
    ACTIONS(179), 2,
      sym_int,
      sym_identifier,
    STATE(82), 2,
      sym__strong_expr,
      sym__value,
  [1288] = 6,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      aux_sym__value_repeat1,
    ACTIONS(183), 2,
      sym_istr,
      sym_str,
    ACTIONS(185), 2,
      sym_int,
      sym_identifier,
    STATE(85), 2,
      sym__strong_expr,
      sym__value,
  [1310] = 3,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(163), 4,
      anon_sym_let,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(165), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1326] = 6,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      aux_sym__value_repeat1,
    ACTIONS(194), 2,
      sym_istr,
      sym_str,
    ACTIONS(197), 2,
      sym_int,
      sym_identifier,
    STATE(91), 2,
      sym__strong_expr,
      sym__value,
  [1348] = 4,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 2,
      sym_istr,
      sym_str,
    ACTIONS(202), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(31), 3,
      sym__expr,
      sym__value,
      sym__word,
  [1366] = 6,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      aux_sym__value_repeat1,
    ACTIONS(206), 2,
      sym_istr,
      sym_str,
    ACTIONS(208), 2,
      sym_int,
      sym_identifier,
    STATE(83), 2,
      sym__strong_expr,
      sym__value,
  [1388] = 3,
    ACTIONS(210), 1,
      anon_sym_LF,
    STATE(41), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_let,
      anon_sym_capture,
      anon_sym_cmd,
      anon_sym_LBRACE,
  [1403] = 2,
    ACTIONS(163), 4,
      anon_sym_let,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(165), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1416] = 4,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 2,
      sym_istr,
      sym_str,
    ACTIONS(217), 2,
      sym_int,
      sym_identifier,
    STATE(63), 2,
      sym__strong_expr,
      sym__value,
  [1432] = 2,
    ACTIONS(221), 1,
      anon_sym_PIPE,
    ACTIONS(219), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1444] = 2,
    ACTIONS(225), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(223), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1456] = 2,
    ACTIONS(229), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(227), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1468] = 3,
    ACTIONS(121), 1,
      anon_sym_LF,
    STATE(41), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(231), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_let,
      anon_sym_capture,
      anon_sym_cmd,
  [1482] = 4,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 2,
      sym_istr,
      sym_str,
    ACTIONS(217), 2,
      sym_int,
      sym_identifier,
    STATE(63), 2,
      sym__strong_expr,
      sym__value,
  [1498] = 2,
    ACTIONS(235), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(233), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1510] = 2,
    ACTIONS(221), 1,
      anon_sym_PIPE,
    ACTIONS(237), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1522] = 2,
    ACTIONS(241), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(239), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1534] = 2,
    ACTIONS(245), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(243), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [1546] = 3,
    ACTIONS(249), 1,
      anon_sym_LF,
    STATE(47), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(247), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_let,
      anon_sym_capture,
      anon_sym_cmd,
  [1560] = 1,
    ACTIONS(251), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_let,
      anon_sym_capture,
      anon_sym_cmd,
  [1569] = 1,
    ACTIONS(253), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_let,
      anon_sym_capture,
      anon_sym_cmd,
  [1578] = 1,
    ACTIONS(255), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_let,
      anon_sym_capture,
      anon_sym_cmd,
  [1587] = 2,
    ACTIONS(257), 3,
      anon_sym_LBRACK,
      sym_istr,
      sym_str,
    ACTIONS(259), 3,
      sym_int,
      sym_identifier,
      sym_word,
  [1598] = 2,
    ACTIONS(261), 3,
      anon_sym_LBRACK,
      sym_istr,
      sym_str,
    ACTIONS(263), 3,
      sym_int,
      sym_identifier,
      sym_word,
  [1609] = 2,
    ACTIONS(267), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(265), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1620] = 1,
    ACTIONS(269), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_let,
      anon_sym_capture,
      anon_sym_cmd,
  [1629] = 2,
    ACTIONS(271), 2,
      sym_int,
      sym_identifier,
    ACTIONS(192), 4,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_istr,
      sym_str,
  [1640] = 1,
    ACTIONS(273), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_let,
      anon_sym_capture,
      anon_sym_cmd,
  [1649] = 1,
    ACTIONS(275), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_in,
  [1657] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_in,
    ACTIONS(277), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1668] = 1,
    ACTIONS(81), 4,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_in,
  [1675] = 4,
    ACTIONS(283), 1,
      anon_sym_in,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(67), 1,
      sym_var_def,
    STATE(68), 1,
      aux_sym_cmd_vars_repeat1,
  [1688] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_in,
    ACTIONS(287), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1699] = 4,
    ACTIONS(291), 1,
      anon_sym_in,
    ACTIONS(293), 1,
      sym_identifier,
    STATE(68), 1,
      aux_sym_cmd_vars_repeat1,
    STATE(93), 1,
      sym_var_def,
  [1712] = 1,
    ACTIONS(85), 4,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_in,
  [1719] = 1,
    ACTIONS(89), 4,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_in,
  [1726] = 1,
    ACTIONS(296), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1733] = 4,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_in,
    STATE(64), 1,
      sym_var_def,
    STATE(66), 1,
      aux_sym_cmd_vars_repeat1,
  [1746] = 2,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(300), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1754] = 3,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(306), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      aux_sym_source_file_repeat1,
  [1764] = 3,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      aux_sym_source_file_repeat1,
  [1774] = 3,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(306), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      aux_sym_source_file_repeat1,
  [1784] = 3,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      aux_sym_source_file_repeat1,
  [1794] = 2,
    STATE(19), 1,
      sym_cmd_op,
    ACTIONS(314), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1802] = 2,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(316), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1810] = 1,
    ACTIONS(291), 2,
      anon_sym_in,
      sym_identifier,
  [1815] = 2,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 1,
      anon_sym_LF,
  [1822] = 2,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
  [1829] = 2,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
  [1836] = 2,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
  [1843] = 2,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    ACTIONS(320), 1,
      anon_sym_COMMA,
  [1850] = 1,
    ACTIONS(330), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1855] = 1,
    ACTIONS(332), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1860] = 2,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
    ACTIONS(320), 1,
      anon_sym_COMMA,
  [1867] = 1,
    ACTIONS(334), 2,
      anon_sym_LF,
      anon_sym_RBRACE,
  [1872] = 2,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(100), 1,
      sym_var_def,
  [1879] = 1,
    ACTIONS(320), 1,
      anon_sym_COMMA,
  [1883] = 1,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
  [1887] = 1,
    ACTIONS(279), 1,
      anon_sym_COMMA,
  [1891] = 1,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
  [1895] = 1,
    ACTIONS(342), 1,
      anon_sym_EQ,
  [1899] = 1,
    ACTIONS(344), 1,
      sym_identifier,
  [1903] = 1,
    ACTIONS(346), 1,
      anon_sym_cmd,
  [1907] = 1,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
  [1911] = 1,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
  [1915] = 1,
    ACTIONS(352), 1,
      anon_sym_SEMI,
  [1919] = 1,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
  [1923] = 1,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
  [1927] = 1,
    ACTIONS(358), 1,
      anon_sym_PIPE,
  [1931] = 1,
    ACTIONS(360), 1,
      anon_sym_cmd,
  [1935] = 1,
    ACTIONS(302), 1,
      anon_sym_SEMI,
  [1939] = 1,
    ACTIONS(362), 1,
      anon_sym_LF,
  [1943] = 1,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
  [1947] = 1,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
  [1951] = 1,
    ACTIONS(368), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 136,
  [SMALL_STATE(5)] = 204,
  [SMALL_STATE(6)] = 272,
  [SMALL_STATE(7)] = 340,
  [SMALL_STATE(8)] = 408,
  [SMALL_STATE(9)] = 467,
  [SMALL_STATE(10)] = 526,
  [SMALL_STATE(11)] = 570,
  [SMALL_STATE(12)] = 614,
  [SMALL_STATE(13)] = 647,
  [SMALL_STATE(14)] = 670,
  [SMALL_STATE(15)] = 715,
  [SMALL_STATE(16)] = 738,
  [SMALL_STATE(17)] = 761,
  [SMALL_STATE(18)] = 803,
  [SMALL_STATE(19)] = 845,
  [SMALL_STATE(20)] = 884,
  [SMALL_STATE(21)] = 923,
  [SMALL_STATE(22)] = 944,
  [SMALL_STATE(23)] = 970,
  [SMALL_STATE(24)] = 996,
  [SMALL_STATE(25)] = 1030,
  [SMALL_STATE(26)] = 1056,
  [SMALL_STATE(27)] = 1083,
  [SMALL_STATE(28)] = 1110,
  [SMALL_STATE(29)] = 1138,
  [SMALL_STATE(30)] = 1166,
  [SMALL_STATE(31)] = 1194,
  [SMALL_STATE(32)] = 1209,
  [SMALL_STATE(33)] = 1228,
  [SMALL_STATE(34)] = 1244,
  [SMALL_STATE(35)] = 1266,
  [SMALL_STATE(36)] = 1288,
  [SMALL_STATE(37)] = 1310,
  [SMALL_STATE(38)] = 1326,
  [SMALL_STATE(39)] = 1348,
  [SMALL_STATE(40)] = 1366,
  [SMALL_STATE(41)] = 1388,
  [SMALL_STATE(42)] = 1403,
  [SMALL_STATE(43)] = 1416,
  [SMALL_STATE(44)] = 1432,
  [SMALL_STATE(45)] = 1444,
  [SMALL_STATE(46)] = 1456,
  [SMALL_STATE(47)] = 1468,
  [SMALL_STATE(48)] = 1482,
  [SMALL_STATE(49)] = 1498,
  [SMALL_STATE(50)] = 1510,
  [SMALL_STATE(51)] = 1522,
  [SMALL_STATE(52)] = 1534,
  [SMALL_STATE(53)] = 1546,
  [SMALL_STATE(54)] = 1560,
  [SMALL_STATE(55)] = 1569,
  [SMALL_STATE(56)] = 1578,
  [SMALL_STATE(57)] = 1587,
  [SMALL_STATE(58)] = 1598,
  [SMALL_STATE(59)] = 1609,
  [SMALL_STATE(60)] = 1620,
  [SMALL_STATE(61)] = 1629,
  [SMALL_STATE(62)] = 1640,
  [SMALL_STATE(63)] = 1649,
  [SMALL_STATE(64)] = 1657,
  [SMALL_STATE(65)] = 1668,
  [SMALL_STATE(66)] = 1675,
  [SMALL_STATE(67)] = 1688,
  [SMALL_STATE(68)] = 1699,
  [SMALL_STATE(69)] = 1712,
  [SMALL_STATE(70)] = 1719,
  [SMALL_STATE(71)] = 1726,
  [SMALL_STATE(72)] = 1733,
  [SMALL_STATE(73)] = 1746,
  [SMALL_STATE(74)] = 1754,
  [SMALL_STATE(75)] = 1764,
  [SMALL_STATE(76)] = 1774,
  [SMALL_STATE(77)] = 1784,
  [SMALL_STATE(78)] = 1794,
  [SMALL_STATE(79)] = 1802,
  [SMALL_STATE(80)] = 1810,
  [SMALL_STATE(81)] = 1815,
  [SMALL_STATE(82)] = 1822,
  [SMALL_STATE(83)] = 1829,
  [SMALL_STATE(84)] = 1836,
  [SMALL_STATE(85)] = 1843,
  [SMALL_STATE(86)] = 1850,
  [SMALL_STATE(87)] = 1855,
  [SMALL_STATE(88)] = 1860,
  [SMALL_STATE(89)] = 1867,
  [SMALL_STATE(90)] = 1872,
  [SMALL_STATE(91)] = 1879,
  [SMALL_STATE(92)] = 1883,
  [SMALL_STATE(93)] = 1887,
  [SMALL_STATE(94)] = 1891,
  [SMALL_STATE(95)] = 1895,
  [SMALL_STATE(96)] = 1899,
  [SMALL_STATE(97)] = 1903,
  [SMALL_STATE(98)] = 1907,
  [SMALL_STATE(99)] = 1911,
  [SMALL_STATE(100)] = 1915,
  [SMALL_STATE(101)] = 1919,
  [SMALL_STATE(102)] = 1923,
  [SMALL_STATE(103)] = 1927,
  [SMALL_STATE(104)] = 1931,
  [SMALL_STATE(105)] = 1935,
  [SMALL_STATE(106)] = 1939,
  [SMALL_STATE(107)] = 1943,
  [SMALL_STATE(108)] = 1947,
  [SMALL_STATE(109)] = 1951,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(72),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(34),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(20),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(21),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2), SHIFT_REPEAT(21),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_repeat1, 2), SHIFT_REPEAT(34),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_repeat1, 2), SHIFT_REPEAT(12),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_repeat1, 2), SHIFT_REPEAT(12),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(34),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(20),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(21),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(21),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_name, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_name, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_repeat2, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_repeat2, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_repeat2, 2), SHIFT_REPEAT(58),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_repeat2, 2), SHIFT_REPEAT(58),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 3),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(34),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(21),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(21),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(53),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(90),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(94),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(75),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cmd_in_blk_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_in_blk, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_in_blk, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_repeat1, 2), SHIFT_REPEAT(34),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_repeat1, 2), SHIFT_REPEAT(91),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value_repeat1, 2), SHIFT_REPEAT(91),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_vars, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_vars, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cmd_list_repeat1, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_line, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_vars, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_vars, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_op, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_op, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_vars, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_vars, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_line, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_blk, 7),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_blk, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_blk, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_kind, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_kind, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_chain, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_chain_part, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value_repeat1, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_blk, 6),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_def, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_var_stmt, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_var_stmt, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_vars_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_vars_repeat1, 2), SHIFT_REPEAT(95),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_chain, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_list, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_list, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_in_blk, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_chain_part, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_ctx, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_ctx, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [366] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
