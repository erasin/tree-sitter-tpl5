#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LBRACE_SLASH_SLASH = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_RBRACE = 3,
  anon_sym_LBRACE_SLASH_STAR = 4,
  aux_sym_comment_token2 = 5,
  aux_sym_comment_token3 = 6,
  aux_sym_comment_token4 = 7,
  anon_sym_STAR_SLASH = 8,
  sym_text = 9,
  anon_sym_LBRACE_DOLLAR = 10,
  anon_sym_LBRACE_COLON = 11,
  anon_sym_LBRACE_EQ = 12,
  anon_sym_LBRACE = 13,
  aux_sym_tpl_directive_token1 = 14,
  anon_sym_LBRACEif = 15,
  sym_tpl_else = 16,
  anon_sym_LBRACEelseif = 17,
  sym_tpl_endif = 18,
  anon_sym_LBRACEcompare = 19,
  anon_sym_LBRACEvolist = 20,
  anon_sym_LBRACEforeach = 21,
  anon_sym_LBRACEdefault = 22,
  anon_sym_LBRACEswitch = 23,
  anon_sym_LBRACEcase = 24,
  sym_tpl_endswitch = 25,
  anon_sym_LBRACEinclude = 26,
  anon_sym_SLASH_RBRACE = 27,
  anon_sym_PIPE = 28,
  aux_sym_expression_token1 = 29,
  sym_variable = 30,
  aux_sym_function_call_token1 = 31,
  anon_sym_LPAREN = 32,
  anon_sym_COMMA = 33,
  anon_sym_RPAREN = 34,
  sym_source_file = 35,
  sym__element = 36,
  sym_comment = 37,
  sym_tpl_tag = 38,
  sym_tpl_output = 39,
  sym_tpl_directive = 40,
  sym_tpl_if = 41,
  sym_tpl_elseif = 42,
  sym_tpl_compare = 43,
  sym_tpl_volist = 44,
  sym_tpl_foreach = 45,
  sym_tpl_default = 46,
  sym_tpl_switch = 47,
  sym_tpl_case = 48,
  sym_tpl_include = 49,
  sym_expression = 50,
  sym_function_call = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_comment_repeat1 = 53,
  aux_sym_function_call_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_SLASH_SLASH] = "{//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_SLASH_STAR] = "{/*",
  [aux_sym_comment_token2] = "comment_token2",
  [aux_sym_comment_token3] = "comment_token3",
  [aux_sym_comment_token4] = "comment_token4",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_text] = "text",
  [anon_sym_LBRACE_DOLLAR] = "{$",
  [anon_sym_LBRACE_COLON] = "{:",
  [anon_sym_LBRACE_EQ] = "{=",
  [anon_sym_LBRACE] = "{",
  [aux_sym_tpl_directive_token1] = "tpl_directive_token1",
  [anon_sym_LBRACEif] = "{if",
  [sym_tpl_else] = "tpl_else",
  [anon_sym_LBRACEelseif] = "{elseif",
  [sym_tpl_endif] = "tpl_endif",
  [anon_sym_LBRACEcompare] = "{compare",
  [anon_sym_LBRACEvolist] = "{volist",
  [anon_sym_LBRACEforeach] = "{foreach",
  [anon_sym_LBRACEdefault] = "{default",
  [anon_sym_LBRACEswitch] = "{switch",
  [anon_sym_LBRACEcase] = "{case",
  [sym_tpl_endswitch] = "tpl_endswitch",
  [anon_sym_LBRACEinclude] = "{include",
  [anon_sym_SLASH_RBRACE] = "/}",
  [anon_sym_PIPE] = "|",
  [aux_sym_expression_token1] = "expression_token1",
  [sym_variable] = "variable",
  [aux_sym_function_call_token1] = "function_call_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym__element] = "_element",
  [sym_comment] = "comment",
  [sym_tpl_tag] = "tpl_tag",
  [sym_tpl_output] = "tpl_output",
  [sym_tpl_directive] = "tpl_directive",
  [sym_tpl_if] = "tpl_if",
  [sym_tpl_elseif] = "tpl_elseif",
  [sym_tpl_compare] = "tpl_compare",
  [sym_tpl_volist] = "tpl_volist",
  [sym_tpl_foreach] = "tpl_foreach",
  [sym_tpl_default] = "tpl_default",
  [sym_tpl_switch] = "tpl_switch",
  [sym_tpl_case] = "tpl_case",
  [sym_tpl_include] = "tpl_include",
  [sym_expression] = "expression",
  [sym_function_call] = "function_call",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE_SLASH_SLASH] = anon_sym_LBRACE_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_SLASH_STAR] = anon_sym_LBRACE_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [aux_sym_comment_token3] = aux_sym_comment_token3,
  [aux_sym_comment_token4] = aux_sym_comment_token4,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_text] = sym_text,
  [anon_sym_LBRACE_DOLLAR] = anon_sym_LBRACE_DOLLAR,
  [anon_sym_LBRACE_COLON] = anon_sym_LBRACE_COLON,
  [anon_sym_LBRACE_EQ] = anon_sym_LBRACE_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_tpl_directive_token1] = aux_sym_tpl_directive_token1,
  [anon_sym_LBRACEif] = anon_sym_LBRACEif,
  [sym_tpl_else] = sym_tpl_else,
  [anon_sym_LBRACEelseif] = anon_sym_LBRACEelseif,
  [sym_tpl_endif] = sym_tpl_endif,
  [anon_sym_LBRACEcompare] = anon_sym_LBRACEcompare,
  [anon_sym_LBRACEvolist] = anon_sym_LBRACEvolist,
  [anon_sym_LBRACEforeach] = anon_sym_LBRACEforeach,
  [anon_sym_LBRACEdefault] = anon_sym_LBRACEdefault,
  [anon_sym_LBRACEswitch] = anon_sym_LBRACEswitch,
  [anon_sym_LBRACEcase] = anon_sym_LBRACEcase,
  [sym_tpl_endswitch] = sym_tpl_endswitch,
  [anon_sym_LBRACEinclude] = anon_sym_LBRACEinclude,
  [anon_sym_SLASH_RBRACE] = anon_sym_SLASH_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_expression_token1] = aux_sym_expression_token1,
  [sym_variable] = sym_variable,
  [aux_sym_function_call_token1] = aux_sym_function_call_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym__element] = sym__element,
  [sym_comment] = sym_comment,
  [sym_tpl_tag] = sym_tpl_tag,
  [sym_tpl_output] = sym_tpl_output,
  [sym_tpl_directive] = sym_tpl_directive,
  [sym_tpl_if] = sym_tpl_if,
  [sym_tpl_elseif] = sym_tpl_elseif,
  [sym_tpl_compare] = sym_tpl_compare,
  [sym_tpl_volist] = sym_tpl_volist,
  [sym_tpl_foreach] = sym_tpl_foreach,
  [sym_tpl_default] = sym_tpl_default,
  [sym_tpl_switch] = sym_tpl_switch,
  [sym_tpl_case] = sym_tpl_case,
  [sym_tpl_include] = sym_tpl_include,
  [sym_expression] = sym_expression,
  [sym_function_call] = sym_function_call,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tpl_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACEif] = {
    .visible = true,
    .named = false,
  },
  [sym_tpl_else] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACEelseif] = {
    .visible = true,
    .named = false,
  },
  [sym_tpl_endif] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACEcompare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEvolist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEforeach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEdefault] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEswitch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEcase] = {
    .visible = true,
    .named = false,
  },
  [sym_tpl_endswitch] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACEinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_call_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_tpl_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_tpl_output] = {
    .visible = true,
    .named = true,
  },
  [sym_tpl_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_tpl_if] = {
    .visible = true,
    .named = true,
  },
  [sym_tpl_elseif] = {
    .visible = true,
    .named = true,
  },
  [sym_tpl_compare] = {
    .visible = true,
    .named = true,
  },
  [sym_tpl_volist] = {
    .visible = true,
    .named = true,
  },
  [sym_tpl_foreach] = {
    .visible = true,
    .named = true,
  },
  [sym_tpl_default] = {
    .visible = true,
    .named = true,
  },
  [sym_tpl_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_tpl_case] = {
    .visible = true,
    .named = true,
  },
  [sym_tpl_include] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_args = 1,
  field_cond = 2,
  field_expr = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_cond] = "cond",
  [field_expr] = "expr",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_expr, 1},
  [1] =
    {field_cond, 1},
  [2] =
    {field_args, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 22,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 21,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 59,
  [66] = 50,
  [67] = 53,
  [68] = 4,
  [69] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(64);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == '(') ADVANCE(157);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '|') ADVANCE(99);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '_') ADVANCE(125);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '_') ADVANCE(125);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '/') ADVANCE(65);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(9);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(88);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == '}') ADVANCE(87);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 53:
      if (lookahead == 'w') ADVANCE(30);
      END_STATE();
    case 54:
      if (lookahead == 'w') ADVANCE(33);
      END_STATE();
    case 55:
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 56:
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == '}') ADVANCE(98);
      END_STATE();
    case 59:
      if (lookahead == '}') ADVANCE(89);
      END_STATE();
    case 60:
      if (lookahead == '}') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 63:
      if (eof) ADVANCE(64);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACE_SLASH_SLASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACE_SLASH_STAR);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(70);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACE_DOLLAR);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACE_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '$') ADVANCE(81);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_tpl_directive_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACEif);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tpl_else);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACEelseif);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tpl_endif);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACEcompare);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACEvolist);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACEforeach);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACEdefault);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACEswitch);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACEcase);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tpl_endswitch);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACEinclude);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SLASH_RBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '_') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '_') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '.') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'M') ADVANCE(115);
      if (lookahead == 'P') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(118);
      if (lookahead == 'U') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'B') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'C') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'C') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'D') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'E') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'I') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'I') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'L') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'L') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'L') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'N') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'O') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'O') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'O') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'O') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'R') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'T') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'T') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'U') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == 'U') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '_') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '.') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'M') ADVANCE(144);
      if (lookahead == 'P') ADVANCE(151);
      if (lookahead == 'R') ADVANCE(147);
      if (lookahead == 'U') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'B') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'C') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'C') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'D') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'E') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'I') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'I') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'L') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'L') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'L') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'N') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'O') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'O') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'O') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'O') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'R') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'T') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'T') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'U') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == 'U') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 63},
  [2] = {.lex_state = 63},
  [3] = {.lex_state = 63},
  [4] = {.lex_state = 63},
  [5] = {.lex_state = 63},
  [6] = {.lex_state = 63},
  [7] = {.lex_state = 63},
  [8] = {.lex_state = 63},
  [9] = {.lex_state = 63},
  [10] = {.lex_state = 63},
  [11] = {.lex_state = 63},
  [12] = {.lex_state = 63},
  [13] = {.lex_state = 63},
  [14] = {.lex_state = 63},
  [15] = {.lex_state = 63},
  [16] = {.lex_state = 63},
  [17] = {.lex_state = 63},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 55},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 56},
  [53] = {.lex_state = 57},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 57},
  [68] = {(TSStateId)(-1)},
  [69] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_SLASH_STAR] = ACTIONS(5),
    [aux_sym_comment_token3] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_LBRACE_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE_COLON] = ACTIONS(1),
    [anon_sym_LBRACE_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACEif] = ACTIONS(1),
    [sym_tpl_else] = ACTIONS(1),
    [anon_sym_LBRACEelseif] = ACTIONS(1),
    [sym_tpl_endif] = ACTIONS(1),
    [anon_sym_LBRACEcompare] = ACTIONS(1),
    [anon_sym_LBRACEvolist] = ACTIONS(1),
    [anon_sym_LBRACEforeach] = ACTIONS(1),
    [anon_sym_LBRACEdefault] = ACTIONS(1),
    [anon_sym_LBRACEswitch] = ACTIONS(1),
    [anon_sym_LBRACEcase] = ACTIONS(1),
    [sym_tpl_endswitch] = ACTIONS(1),
    [anon_sym_LBRACEinclude] = ACTIONS(1),
    [anon_sym_SLASH_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [aux_sym_function_call_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(48),
    [sym__element] = STATE(3),
    [sym_comment] = STATE(1),
    [sym_tpl_tag] = STATE(3),
    [sym_tpl_output] = STATE(3),
    [sym_tpl_directive] = STATE(3),
    [sym_tpl_if] = STATE(10),
    [sym_tpl_elseif] = STATE(10),
    [sym_tpl_compare] = STATE(10),
    [sym_tpl_volist] = STATE(10),
    [sym_tpl_foreach] = STATE(10),
    [sym_tpl_default] = STATE(10),
    [sym_tpl_switch] = STATE(10),
    [sym_tpl_case] = STATE(10),
    [sym_tpl_include] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LBRACE_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_LBRACE_SLASH_STAR] = ACTIONS(11),
    [sym_text] = ACTIONS(13),
    [anon_sym_LBRACE_DOLLAR] = ACTIONS(15),
    [anon_sym_LBRACE_COLON] = ACTIONS(15),
    [anon_sym_LBRACE_EQ] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACEif] = ACTIONS(19),
    [sym_tpl_else] = ACTIONS(21),
    [anon_sym_LBRACEelseif] = ACTIONS(23),
    [sym_tpl_endif] = ACTIONS(21),
    [anon_sym_LBRACEcompare] = ACTIONS(25),
    [anon_sym_LBRACEvolist] = ACTIONS(27),
    [anon_sym_LBRACEforeach] = ACTIONS(29),
    [anon_sym_LBRACEdefault] = ACTIONS(31),
    [anon_sym_LBRACEswitch] = ACTIONS(33),
    [anon_sym_LBRACEcase] = ACTIONS(35),
    [sym_tpl_endswitch] = ACTIONS(21),
    [anon_sym_LBRACEinclude] = ACTIONS(37),
  },
  [2] = {
    [sym__element] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_tpl_tag] = STATE(2),
    [sym_tpl_output] = STATE(2),
    [sym_tpl_directive] = STATE(2),
    [sym_tpl_if] = STATE(10),
    [sym_tpl_elseif] = STATE(10),
    [sym_tpl_compare] = STATE(10),
    [sym_tpl_volist] = STATE(10),
    [sym_tpl_foreach] = STATE(10),
    [sym_tpl_default] = STATE(10),
    [sym_tpl_switch] = STATE(10),
    [sym_tpl_case] = STATE(10),
    [sym_tpl_include] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LBRACE_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_LBRACE_SLASH_STAR] = ACTIONS(44),
    [sym_text] = ACTIONS(47),
    [anon_sym_LBRACE_DOLLAR] = ACTIONS(50),
    [anon_sym_LBRACE_COLON] = ACTIONS(50),
    [anon_sym_LBRACE_EQ] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACEif] = ACTIONS(56),
    [sym_tpl_else] = ACTIONS(59),
    [anon_sym_LBRACEelseif] = ACTIONS(62),
    [sym_tpl_endif] = ACTIONS(59),
    [anon_sym_LBRACEcompare] = ACTIONS(65),
    [anon_sym_LBRACEvolist] = ACTIONS(68),
    [anon_sym_LBRACEforeach] = ACTIONS(71),
    [anon_sym_LBRACEdefault] = ACTIONS(74),
    [anon_sym_LBRACEswitch] = ACTIONS(77),
    [anon_sym_LBRACEcase] = ACTIONS(80),
    [sym_tpl_endswitch] = ACTIONS(59),
    [anon_sym_LBRACEinclude] = ACTIONS(83),
  },
  [3] = {
    [sym__element] = STATE(2),
    [sym_comment] = STATE(3),
    [sym_tpl_tag] = STATE(2),
    [sym_tpl_output] = STATE(2),
    [sym_tpl_directive] = STATE(2),
    [sym_tpl_if] = STATE(10),
    [sym_tpl_elseif] = STATE(10),
    [sym_tpl_compare] = STATE(10),
    [sym_tpl_volist] = STATE(10),
    [sym_tpl_foreach] = STATE(10),
    [sym_tpl_default] = STATE(10),
    [sym_tpl_switch] = STATE(10),
    [sym_tpl_case] = STATE(10),
    [sym_tpl_include] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_LBRACE_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_LBRACE_SLASH_STAR] = ACTIONS(11),
    [sym_text] = ACTIONS(88),
    [anon_sym_LBRACE_DOLLAR] = ACTIONS(15),
    [anon_sym_LBRACE_COLON] = ACTIONS(15),
    [anon_sym_LBRACE_EQ] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACEif] = ACTIONS(19),
    [sym_tpl_else] = ACTIONS(21),
    [anon_sym_LBRACEelseif] = ACTIONS(23),
    [sym_tpl_endif] = ACTIONS(21),
    [anon_sym_LBRACEcompare] = ACTIONS(25),
    [anon_sym_LBRACEvolist] = ACTIONS(27),
    [anon_sym_LBRACEforeach] = ACTIONS(29),
    [anon_sym_LBRACEdefault] = ACTIONS(31),
    [anon_sym_LBRACEswitch] = ACTIONS(33),
    [anon_sym_LBRACEcase] = ACTIONS(35),
    [sym_tpl_endswitch] = ACTIONS(21),
    [anon_sym_LBRACEinclude] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(4), 1,
      sym_comment,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(92), 18,
      anon_sym_LBRACE_SLASH_SLASH,
      anon_sym_LBRACE_SLASH_STAR,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LBRACE_COLON,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE,
      anon_sym_LBRACEif,
      sym_tpl_else,
      anon_sym_LBRACEelseif,
      sym_tpl_endif,
      anon_sym_LBRACEcompare,
      anon_sym_LBRACEvolist,
      anon_sym_LBRACEforeach,
      anon_sym_LBRACEdefault,
      anon_sym_LBRACEswitch,
      anon_sym_LBRACEcase,
      sym_tpl_endswitch,
      anon_sym_LBRACEinclude,
  [28] = 3,
    STATE(5), 1,
      sym_comment,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(96), 18,
      anon_sym_LBRACE_SLASH_SLASH,
      anon_sym_LBRACE_SLASH_STAR,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LBRACE_COLON,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE,
      anon_sym_LBRACEif,
      sym_tpl_else,
      anon_sym_LBRACEelseif,
      sym_tpl_endif,
      anon_sym_LBRACEcompare,
      anon_sym_LBRACEvolist,
      anon_sym_LBRACEforeach,
      anon_sym_LBRACEdefault,
      anon_sym_LBRACEswitch,
      anon_sym_LBRACEcase,
      sym_tpl_endswitch,
      anon_sym_LBRACEinclude,
  [56] = 3,
    STATE(6), 1,
      sym_comment,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(100), 18,
      anon_sym_LBRACE_SLASH_SLASH,
      anon_sym_LBRACE_SLASH_STAR,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LBRACE_COLON,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE,
      anon_sym_LBRACEif,
      sym_tpl_else,
      anon_sym_LBRACEelseif,
      sym_tpl_endif,
      anon_sym_LBRACEcompare,
      anon_sym_LBRACEvolist,
      anon_sym_LBRACEforeach,
      anon_sym_LBRACEdefault,
      anon_sym_LBRACEswitch,
      anon_sym_LBRACEcase,
      sym_tpl_endswitch,
      anon_sym_LBRACEinclude,
  [84] = 3,
    STATE(7), 1,
      sym_comment,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(104), 18,
      anon_sym_LBRACE_SLASH_SLASH,
      anon_sym_LBRACE_SLASH_STAR,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LBRACE_COLON,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE,
      anon_sym_LBRACEif,
      sym_tpl_else,
      anon_sym_LBRACEelseif,
      sym_tpl_endif,
      anon_sym_LBRACEcompare,
      anon_sym_LBRACEvolist,
      anon_sym_LBRACEforeach,
      anon_sym_LBRACEdefault,
      anon_sym_LBRACEswitch,
      anon_sym_LBRACEcase,
      sym_tpl_endswitch,
      anon_sym_LBRACEinclude,
  [112] = 3,
    STATE(8), 1,
      sym_comment,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(108), 18,
      anon_sym_LBRACE_SLASH_SLASH,
      anon_sym_LBRACE_SLASH_STAR,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LBRACE_COLON,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE,
      anon_sym_LBRACEif,
      sym_tpl_else,
      anon_sym_LBRACEelseif,
      sym_tpl_endif,
      anon_sym_LBRACEcompare,
      anon_sym_LBRACEvolist,
      anon_sym_LBRACEforeach,
      anon_sym_LBRACEdefault,
      anon_sym_LBRACEswitch,
      anon_sym_LBRACEcase,
      sym_tpl_endswitch,
      anon_sym_LBRACEinclude,
  [140] = 3,
    STATE(9), 1,
      sym_comment,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(112), 18,
      anon_sym_LBRACE_SLASH_SLASH,
      anon_sym_LBRACE_SLASH_STAR,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LBRACE_COLON,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE,
      anon_sym_LBRACEif,
      sym_tpl_else,
      anon_sym_LBRACEelseif,
      sym_tpl_endif,
      anon_sym_LBRACEcompare,
      anon_sym_LBRACEvolist,
      anon_sym_LBRACEforeach,
      anon_sym_LBRACEdefault,
      anon_sym_LBRACEswitch,
      anon_sym_LBRACEcase,
      sym_tpl_endswitch,
      anon_sym_LBRACEinclude,
  [168] = 3,
    STATE(10), 1,
      sym_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(116), 18,
      anon_sym_LBRACE_SLASH_SLASH,
      anon_sym_LBRACE_SLASH_STAR,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LBRACE_COLON,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE,
      anon_sym_LBRACEif,
      sym_tpl_else,
      anon_sym_LBRACEelseif,
      sym_tpl_endif,
      anon_sym_LBRACEcompare,
      anon_sym_LBRACEvolist,
      anon_sym_LBRACEforeach,
      anon_sym_LBRACEdefault,
      anon_sym_LBRACEswitch,
      anon_sym_LBRACEcase,
      sym_tpl_endswitch,
      anon_sym_LBRACEinclude,
  [196] = 3,
    STATE(11), 1,
      sym_comment,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(120), 18,
      anon_sym_LBRACE_SLASH_SLASH,
      anon_sym_LBRACE_SLASH_STAR,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LBRACE_COLON,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE,
      anon_sym_LBRACEif,
      sym_tpl_else,
      anon_sym_LBRACEelseif,
      sym_tpl_endif,
      anon_sym_LBRACEcompare,
      anon_sym_LBRACEvolist,
      anon_sym_LBRACEforeach,
      anon_sym_LBRACEdefault,
      anon_sym_LBRACEswitch,
      anon_sym_LBRACEcase,
      sym_tpl_endswitch,
      anon_sym_LBRACEinclude,
  [224] = 3,
    STATE(12), 1,
      sym_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(124), 18,
      anon_sym_LBRACE_SLASH_SLASH,
      anon_sym_LBRACE_SLASH_STAR,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LBRACE_COLON,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE,
      anon_sym_LBRACEif,
      sym_tpl_else,
      anon_sym_LBRACEelseif,
      sym_tpl_endif,
      anon_sym_LBRACEcompare,
      anon_sym_LBRACEvolist,
      anon_sym_LBRACEforeach,
      anon_sym_LBRACEdefault,
      anon_sym_LBRACEswitch,
      anon_sym_LBRACEcase,
      sym_tpl_endswitch,
      anon_sym_LBRACEinclude,
  [252] = 3,
    STATE(13), 1,
      sym_comment,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(128), 18,
      anon_sym_LBRACE_SLASH_SLASH,
      anon_sym_LBRACE_SLASH_STAR,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LBRACE_COLON,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE,
      anon_sym_LBRACEif,
      sym_tpl_else,
      anon_sym_LBRACEelseif,
      sym_tpl_endif,
      anon_sym_LBRACEcompare,
      anon_sym_LBRACEvolist,
      anon_sym_LBRACEforeach,
      anon_sym_LBRACEdefault,
      anon_sym_LBRACEswitch,
      anon_sym_LBRACEcase,
      sym_tpl_endswitch,
      anon_sym_LBRACEinclude,
  [280] = 3,
    STATE(14), 1,
      sym_comment,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(132), 18,
      anon_sym_LBRACE_SLASH_SLASH,
      anon_sym_LBRACE_SLASH_STAR,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LBRACE_COLON,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE,
      anon_sym_LBRACEif,
      sym_tpl_else,
      anon_sym_LBRACEelseif,
      sym_tpl_endif,
      anon_sym_LBRACEcompare,
      anon_sym_LBRACEvolist,
      anon_sym_LBRACEforeach,
      anon_sym_LBRACEdefault,
      anon_sym_LBRACEswitch,
      anon_sym_LBRACEcase,
      sym_tpl_endswitch,
      anon_sym_LBRACEinclude,
  [308] = 3,
    STATE(15), 1,
      sym_comment,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(136), 18,
      anon_sym_LBRACE_SLASH_SLASH,
      anon_sym_LBRACE_SLASH_STAR,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LBRACE_COLON,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE,
      anon_sym_LBRACEif,
      sym_tpl_else,
      anon_sym_LBRACEelseif,
      sym_tpl_endif,
      anon_sym_LBRACEcompare,
      anon_sym_LBRACEvolist,
      anon_sym_LBRACEforeach,
      anon_sym_LBRACEdefault,
      anon_sym_LBRACEswitch,
      anon_sym_LBRACEcase,
      sym_tpl_endswitch,
      anon_sym_LBRACEinclude,
  [336] = 3,
    STATE(16), 1,
      sym_comment,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(140), 18,
      anon_sym_LBRACE_SLASH_SLASH,
      anon_sym_LBRACE_SLASH_STAR,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LBRACE_COLON,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE,
      anon_sym_LBRACEif,
      sym_tpl_else,
      anon_sym_LBRACEelseif,
      sym_tpl_endif,
      anon_sym_LBRACEcompare,
      anon_sym_LBRACEvolist,
      anon_sym_LBRACEforeach,
      anon_sym_LBRACEdefault,
      anon_sym_LBRACEswitch,
      anon_sym_LBRACEcase,
      sym_tpl_endswitch,
      anon_sym_LBRACEinclude,
  [364] = 3,
    STATE(17), 1,
      sym_comment,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(144), 18,
      anon_sym_LBRACE_SLASH_SLASH,
      anon_sym_LBRACE_SLASH_STAR,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LBRACE_COLON,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE,
      anon_sym_LBRACEif,
      sym_tpl_else,
      anon_sym_LBRACEelseif,
      sym_tpl_endif,
      anon_sym_LBRACEcompare,
      anon_sym_LBRACEvolist,
      anon_sym_LBRACEforeach,
      anon_sym_LBRACEdefault,
      anon_sym_LBRACEswitch,
      anon_sym_LBRACEcase,
      sym_tpl_endswitch,
      anon_sym_LBRACEinclude,
  [392] = 9,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(150), 1,
      aux_sym_expression_token1,
    ACTIONS(152), 1,
      sym_variable,
    ACTIONS(154), 1,
      aux_sym_function_call_token1,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_comment,
    STATE(38), 1,
      sym_function_call,
    STATE(43), 1,
      sym_expression,
  [420] = 5,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR_SLASH,
    STATE(19), 2,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(158), 3,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
  [439] = 8,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(152), 1,
      sym_variable,
    ACTIONS(154), 1,
      aux_sym_function_call_token1,
    ACTIONS(163), 1,
      aux_sym_expression_token1,
    STATE(20), 1,
      sym_comment,
    STATE(38), 1,
      sym_function_call,
    STATE(56), 1,
      sym_expression,
  [464] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(167), 1,
      anon_sym_STAR_SLASH,
    STATE(19), 1,
      aux_sym_comment_repeat1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(165), 3,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
  [485] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(169), 1,
      anon_sym_STAR_SLASH,
    STATE(21), 1,
      aux_sym_comment_repeat1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(165), 3,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
  [506] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(173), 1,
      anon_sym_PIPE,
    STATE(23), 1,
      sym_comment,
    ACTIONS(171), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [525] = 8,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(152), 1,
      sym_variable,
    ACTIONS(154), 1,
      aux_sym_function_call_token1,
    ACTIONS(163), 1,
      aux_sym_expression_token1,
    STATE(24), 1,
      sym_comment,
    STATE(38), 1,
      sym_function_call,
    STATE(63), 1,
      sym_expression,
  [550] = 8,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(152), 1,
      sym_variable,
    ACTIONS(154), 1,
      aux_sym_function_call_token1,
    ACTIONS(163), 1,
      aux_sym_expression_token1,
    STATE(25), 1,
      sym_comment,
    STATE(38), 1,
      sym_function_call,
    STATE(51), 1,
      sym_expression,
  [575] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(175), 1,
      anon_sym_STAR_SLASH,
    STATE(26), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_comment_repeat1,
    ACTIONS(165), 3,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
  [596] = 8,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(152), 1,
      sym_variable,
    ACTIONS(154), 1,
      aux_sym_function_call_token1,
    ACTIONS(163), 1,
      aux_sym_expression_token1,
    STATE(27), 1,
      sym_comment,
    STATE(38), 1,
      sym_function_call,
    STATE(62), 1,
      sym_expression,
  [621] = 8,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(152), 1,
      sym_variable,
    ACTIONS(154), 1,
      aux_sym_function_call_token1,
    ACTIONS(163), 1,
      aux_sym_expression_token1,
    STATE(28), 1,
      sym_comment,
    STATE(38), 1,
      sym_function_call,
    STATE(61), 1,
      sym_expression,
  [646] = 8,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(152), 1,
      sym_variable,
    ACTIONS(154), 1,
      aux_sym_function_call_token1,
    ACTIONS(163), 1,
      aux_sym_expression_token1,
    STATE(29), 1,
      sym_comment,
    STATE(38), 1,
      sym_function_call,
    STATE(60), 1,
      sym_expression,
  [671] = 8,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(152), 1,
      sym_variable,
    ACTIONS(154), 1,
      aux_sym_function_call_token1,
    ACTIONS(163), 1,
      aux_sym_expression_token1,
    STATE(30), 1,
      sym_comment,
    STATE(38), 1,
      sym_function_call,
    STATE(47), 1,
      sym_expression,
  [696] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(177), 1,
      anon_sym_STAR_SLASH,
    STATE(19), 1,
      aux_sym_comment_repeat1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(165), 3,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
  [717] = 8,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(152), 1,
      sym_variable,
    ACTIONS(154), 1,
      aux_sym_function_call_token1,
    ACTIONS(163), 1,
      aux_sym_expression_token1,
    STATE(32), 1,
      sym_comment,
    STATE(38), 1,
      sym_function_call,
    STATE(49), 1,
      sym_expression,
  [742] = 8,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(152), 1,
      sym_variable,
    ACTIONS(154), 1,
      aux_sym_function_call_token1,
    ACTIONS(163), 1,
      aux_sym_expression_token1,
    STATE(33), 1,
      sym_comment,
    STATE(38), 1,
      sym_function_call,
    STATE(58), 1,
      sym_expression,
  [767] = 8,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(152), 1,
      sym_variable,
    ACTIONS(154), 1,
      aux_sym_function_call_token1,
    ACTIONS(163), 1,
      aux_sym_expression_token1,
    STATE(34), 1,
      sym_comment,
    STATE(38), 1,
      sym_function_call,
    STATE(57), 1,
      sym_expression,
  [792] = 8,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(152), 1,
      sym_variable,
    ACTIONS(154), 1,
      aux_sym_function_call_token1,
    ACTIONS(163), 1,
      aux_sym_expression_token1,
    STATE(35), 1,
      sym_comment,
    STATE(38), 1,
      sym_function_call,
    STATE(54), 1,
      sym_expression,
  [817] = 8,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(152), 1,
      sym_variable,
    ACTIONS(154), 1,
      aux_sym_function_call_token1,
    ACTIONS(163), 1,
      aux_sym_expression_token1,
    STATE(36), 1,
      sym_comment,
    STATE(38), 1,
      sym_function_call,
    STATE(55), 1,
      sym_expression,
  [842] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(179), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [858] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(171), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [874] = 4,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    STATE(39), 1,
      sym_comment,
    ACTIONS(181), 4,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
      anon_sym_STAR_SLASH,
  [890] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(183), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [906] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(185), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [922] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(187), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [938] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_function_call_repeat1,
  [957] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_function_call_repeat1,
  [976] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    STATE(45), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
  [993] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(200), 1,
      aux_sym_function_call_token1,
    STATE(37), 1,
      sym_function_call,
    STATE(46), 1,
      sym_comment,
  [1009] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1023] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_comment,
  [1036] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_comment,
  [1049] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_comment,
  [1062] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_comment,
  [1075] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(210), 1,
      aux_sym_tpl_directive_token1,
    STATE(52), 1,
      sym_comment,
  [1088] = 4,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
    STATE(53), 1,
      sym_comment,
  [1101] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_SLASH_RBRACE,
    STATE(54), 1,
      sym_comment,
  [1114] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_comment,
  [1127] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_comment,
  [1140] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym_comment,
  [1153] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym_comment,
  [1166] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_comment,
  [1179] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_comment,
  [1192] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_comment,
  [1205] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_comment,
  [1218] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_comment,
  [1231] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_comment,
  [1244] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_comment,
  [1257] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      sym_comment,
  [1270] = 4,
    ACTIONS(146), 1,
      anon_sym_LBRACE_SLASH_SLASH,
    ACTIONS(148), 1,
      anon_sym_LBRACE_SLASH_STAR,
    ACTIONS(175), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_comment,
  [1283] = 1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
  [1287] = 1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 28,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 112,
  [SMALL_STATE(9)] = 140,
  [SMALL_STATE(10)] = 168,
  [SMALL_STATE(11)] = 196,
  [SMALL_STATE(12)] = 224,
  [SMALL_STATE(13)] = 252,
  [SMALL_STATE(14)] = 280,
  [SMALL_STATE(15)] = 308,
  [SMALL_STATE(16)] = 336,
  [SMALL_STATE(17)] = 364,
  [SMALL_STATE(18)] = 392,
  [SMALL_STATE(19)] = 420,
  [SMALL_STATE(20)] = 439,
  [SMALL_STATE(21)] = 464,
  [SMALL_STATE(22)] = 485,
  [SMALL_STATE(23)] = 506,
  [SMALL_STATE(24)] = 525,
  [SMALL_STATE(25)] = 550,
  [SMALL_STATE(26)] = 575,
  [SMALL_STATE(27)] = 596,
  [SMALL_STATE(28)] = 621,
  [SMALL_STATE(29)] = 646,
  [SMALL_STATE(30)] = 671,
  [SMALL_STATE(31)] = 696,
  [SMALL_STATE(32)] = 717,
  [SMALL_STATE(33)] = 742,
  [SMALL_STATE(34)] = 767,
  [SMALL_STATE(35)] = 792,
  [SMALL_STATE(36)] = 817,
  [SMALL_STATE(37)] = 842,
  [SMALL_STATE(38)] = 858,
  [SMALL_STATE(39)] = 874,
  [SMALL_STATE(40)] = 890,
  [SMALL_STATE(41)] = 906,
  [SMALL_STATE(42)] = 922,
  [SMALL_STATE(43)] = 938,
  [SMALL_STATE(44)] = 957,
  [SMALL_STATE(45)] = 976,
  [SMALL_STATE(46)] = 993,
  [SMALL_STATE(47)] = 1009,
  [SMALL_STATE(48)] = 1023,
  [SMALL_STATE(49)] = 1036,
  [SMALL_STATE(50)] = 1049,
  [SMALL_STATE(51)] = 1062,
  [SMALL_STATE(52)] = 1075,
  [SMALL_STATE(53)] = 1088,
  [SMALL_STATE(54)] = 1101,
  [SMALL_STATE(55)] = 1114,
  [SMALL_STATE(56)] = 1127,
  [SMALL_STATE(57)] = 1140,
  [SMALL_STATE(58)] = 1153,
  [SMALL_STATE(59)] = 1166,
  [SMALL_STATE(60)] = 1179,
  [SMALL_STATE(61)] = 1192,
  [SMALL_STATE(62)] = 1205,
  [SMALL_STATE(63)] = 1218,
  [SMALL_STATE(64)] = 1231,
  [SMALL_STATE(65)] = 1244,
  [SMALL_STATE(66)] = 1257,
  [SMALL_STATE(67)] = 1270,
  [SMALL_STATE(68)] = 1283,
  [SMALL_STATE(69)] = 1287,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_case, 3, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_case, 3, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_switch, 3, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_switch, 3, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_default, 3, .production_id = 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_default, 3, .production_id = 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_foreach, 3, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_foreach, 3, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_volist, 3, .production_id = 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_volist, 3, .production_id = 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_tag, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_tag, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_compare, 3, .production_id = 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_compare, 3, .production_id = 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_elseif, 3, .production_id = 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_elseif, 3, .production_id = 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_if, 3, .production_id = 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_if, 3, .production_id = 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_output, 3, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_output, 3, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_include, 3, .production_id = 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_include, 3, .production_id = 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_directive, 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_directive, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(39),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(30),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [202] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tpl5(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
