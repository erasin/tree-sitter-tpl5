#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 3
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 15

enum {
  aux_sym_html_content_token1 = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_SLASH_SLASH = 4,
  aux_sym_line_comment_token1 = 5,
  aux_sym_line_comment_token2 = 6,
  anon_sym_SLASH_STAR = 7,
  aux_sym_block_comment_token1 = 8,
  anon_sym_STAR_SLASH = 9,
  anon_sym_DOLLAR = 10,
  anon_sym_DOT = 11,
  anon_sym_PIPE = 12,
  anon_sym_EQ = 13,
  anon_sym_if = 14,
  anon_sym_range = 15,
  anon_sym_in = 16,
  anon_sym_notin = 17,
  anon_sym_switch = 18,
  anon_sym_case = 19,
  anon_sym_defined = 20,
  anon_sym_else = 21,
  anon_sym_volist = 22,
  anon_sym_foreach = 23,
  anon_sym_for = 24,
  anon_sym_default = 25,
  anon_sym_SLASH = 26,
  anon_sym_neq = 27,
  anon_sym_eq = 28,
  anon_sym_egt = 29,
  anon_sym_elt = 30,
  anon_sym_lt = 31,
  anon_sym_gt = 32,
  anon_sym_notempty = 33,
  anon_sym_empty = 34,
  anon_sym_COLON = 35,
  anon_sym_LPAREN = 36,
  anon_sym_RPAREN = 37,
  anon_sym___ = 38,
  anon_sym_block = 39,
  anon_sym_literal = 40,
  anon_sym_include = 41,
  anon_sym_extend = 42,
  sym_identifier = 43,
  anon_sym_SQUOTE = 44,
  aux_sym_string_token1 = 45,
  anon_sym_DQUOTE = 46,
  aux_sym_string_token2 = 47,
  sym_number = 48,
  sym_source_file = 49,
  sym__node = 50,
  sym_html_content = 51,
  sym_statement = 52,
  sym__statement = 53,
  sym_comment_statement = 54,
  sym_line_comment = 55,
  sym_block_comment = 56,
  sym_variable_statement = 57,
  sym__filter = 58,
  sym_control_statement = 59,
  sym__control_keyword = 60,
  sym_control = 61,
  sym_control_repeat = 62,
  sym_default_statement = 63,
  sym_compare_statement = 64,
  sym_compare_keyword = 65,
  sym_function_statement = 66,
  sym_const = 67,
  sym_block_statement = 68,
  sym_block_keyword = 69,
  sym_extend_statement = 70,
  sym_extend_keyword = 71,
  aux_sym__parameters = 72,
  sym__expression = 73,
  sym_string = 74,
  aux_sym_source_file_repeat1 = 75,
  aux_sym_html_content_repeat1 = 76,
  aux_sym_variable_statement_repeat1 = 77,
  aux_sym_variable_statement_repeat2 = 78,
  alias_sym_function = 79,
  alias_sym_parameter = 80,
  alias_sym_variable = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_html_content_token1] = "html_content_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [aux_sym_line_comment_token2] = "line_comment_token2",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOT] = ".",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ] = "=",
  [anon_sym_if] = "if",
  [anon_sym_range] = "range",
  [anon_sym_in] = "in",
  [anon_sym_notin] = "notin",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_defined] = "defined",
  [anon_sym_else] = "else",
  [anon_sym_volist] = "volist",
  [anon_sym_foreach] = "foreach",
  [anon_sym_for] = "for",
  [anon_sym_default] = "return",
  [anon_sym_SLASH] = "/",
  [anon_sym_neq] = "neq",
  [anon_sym_eq] = "eq",
  [anon_sym_egt] = "egt",
  [anon_sym_elt] = "elt",
  [anon_sym_lt] = "lt",
  [anon_sym_gt] = "gt",
  [anon_sym_notempty] = "notempty",
  [anon_sym_empty] = "empty",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym___] = "__",
  [anon_sym_block] = "block",
  [anon_sym_literal] = "literal",
  [anon_sym_include] = "include",
  [anon_sym_extend] = "extend",
  [sym_identifier] = "identifier",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__node] = "_node",
  [sym_html_content] = "html_content",
  [sym_statement] = "statement",
  [sym__statement] = "_statement",
  [sym_comment_statement] = "comment_statement",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_variable_statement] = "variable_statement",
  [sym__filter] = "_filter",
  [sym_control_statement] = "control_statement",
  [sym__control_keyword] = "_control_keyword",
  [sym_control] = "control",
  [sym_control_repeat] = "control_repeat",
  [sym_default_statement] = "default_statement",
  [sym_compare_statement] = "compare_statement",
  [sym_compare_keyword] = "compare_keyword",
  [sym_function_statement] = "function_statement",
  [sym_const] = "const",
  [sym_block_statement] = "block_statement",
  [sym_block_keyword] = "block_keyword",
  [sym_extend_statement] = "extend_statement",
  [sym_extend_keyword] = "extend_keyword",
  [aux_sym__parameters] = "_parameters",
  [sym__expression] = "_expression",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_html_content_repeat1] = "html_content_repeat1",
  [aux_sym_variable_statement_repeat1] = "variable_statement_repeat1",
  [aux_sym_variable_statement_repeat2] = "variable_statement_repeat2",
  [alias_sym_function] = "function",
  [alias_sym_parameter] = "parameter",
  [alias_sym_variable] = "variable",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_html_content_token1] = aux_sym_html_content_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [aux_sym_line_comment_token2] = aux_sym_line_comment_token2,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_notin] = anon_sym_notin,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_defined] = anon_sym_defined,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_volist] = anon_sym_volist,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_neq] = anon_sym_neq,
  [anon_sym_eq] = anon_sym_eq,
  [anon_sym_egt] = anon_sym_egt,
  [anon_sym_elt] = anon_sym_elt,
  [anon_sym_lt] = anon_sym_lt,
  [anon_sym_gt] = anon_sym_gt,
  [anon_sym_notempty] = anon_sym_notempty,
  [anon_sym_empty] = anon_sym_empty,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym___] = anon_sym___,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_literal] = anon_sym_literal,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_extend] = anon_sym_extend,
  [sym_identifier] = sym_identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__node] = sym__node,
  [sym_html_content] = sym_html_content,
  [sym_statement] = sym_statement,
  [sym__statement] = sym__statement,
  [sym_comment_statement] = sym_comment_statement,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_variable_statement] = sym_variable_statement,
  [sym__filter] = sym__filter,
  [sym_control_statement] = sym_control_statement,
  [sym__control_keyword] = sym__control_keyword,
  [sym_control] = sym_control,
  [sym_control_repeat] = sym_control_repeat,
  [sym_default_statement] = sym_default_statement,
  [sym_compare_statement] = sym_compare_statement,
  [sym_compare_keyword] = sym_compare_keyword,
  [sym_function_statement] = sym_function_statement,
  [sym_const] = sym_const,
  [sym_block_statement] = sym_block_statement,
  [sym_block_keyword] = sym_block_keyword,
  [sym_extend_statement] = sym_extend_statement,
  [sym_extend_keyword] = sym_extend_keyword,
  [aux_sym__parameters] = aux_sym__parameters,
  [sym__expression] = sym__expression,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_html_content_repeat1] = aux_sym_html_content_repeat1,
  [aux_sym_variable_statement_repeat1] = aux_sym_variable_statement_repeat1,
  [aux_sym_variable_statement_repeat2] = aux_sym_variable_statement_repeat2,
  [alias_sym_function] = alias_sym_function,
  [alias_sym_parameter] = alias_sym_parameter,
  [alias_sym_variable] = alias_sym_variable,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_html_content_token1] = {
    .visible = false,
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
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defined] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_egt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notempty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym___] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_literal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extend] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_html_content] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__filter] = {
    .visible = false,
    .named = true,
  },
  [sym_control_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__control_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym_control] = {
    .visible = true,
    .named = true,
  },
  [sym_control_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym_default_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_compare_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_compare_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_function_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_block_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_extend_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_extend_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__parameters] = {
    .visible = false,
    .named = false,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_html_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_statement_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_function] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_name = 1,
  field_parameter = 2,
  field_params = 3,
  field_property = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_parameter] = "parameter",
  [field_params] = "params",
  [field_property] = "property",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 4},
  [7] = {.index = 14, .length = 1},
  [8] = {.index = 15, .length = 1},
  [9] = {.index = 16, .length = 1},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 2},
  [13] = {.index = 24, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_parameter, 1, .inherited = true},
    {field_params, 1},
    {field_value, 1, .inherited = true},
  [4] =
    {field_parameter, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [6] =
    {field_name, 1},
    {field_property, 2, .inherited = true},
  [8] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [10] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [14] =
    {field_property, 1},
  [15] =
    {field_name, 0},
  [16] =
    {field_name, 1, .inherited = true},
  [17] =
    {field_property, 0, .inherited = true},
    {field_property, 1, .inherited = true},
  [19] =
    {field_name, 1},
    {field_name, 3, .inherited = true},
    {field_property, 2, .inherited = true},
  [22] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [24] =
    {field_parameter, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_variable,
  },
  [4] = {
    [1] = alias_sym_variable,
  },
  [5] = {
    [1] = alias_sym_variable,
  },
  [8] = {
    [0] = alias_sym_function,
  },
  [11] = {
    [1] = alias_sym_variable,
  },
  [13] = {
    [0] = alias_sym_parameter,
  },
  [14] = {
    [1] = alias_sym_function,
  },
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
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '$') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'g') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == 'v') ADVANCE(51);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(90);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'g') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == 'v') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(88);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(119);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'q') ADVANCE(109);
      if (lookahead == 'x') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 38:
      if (lookahead == 'k') ADVANCE(120);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == 'q') ADVANCE(108);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 72:
      if (lookahead == 'w') ADVANCE(36);
      END_STATE();
    case 73:
      if (lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 74:
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_html_content_token1);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_html_content_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead == '}') ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_notin);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_defined);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_volist);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_neq);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_egt);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_elt);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_lt);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_gt);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_notempty);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_literal);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 75},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 75},
  [4] = {.lex_state = 75},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 75},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 75},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 75},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 86},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 126},
  [54] = {.lex_state = 129},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 82},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_notin] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_defined] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_volist] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_neq] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [anon_sym_egt] = ACTIONS(1),
    [anon_sym_elt] = ACTIONS(1),
    [anon_sym_lt] = ACTIONS(1),
    [anon_sym_gt] = ACTIONS(1),
    [anon_sym_notempty] = ACTIONS(1),
    [anon_sym_empty] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym___] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_literal] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_extend] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [sym__node] = STATE(3),
    [sym_html_content] = STATE(3),
    [sym_statement] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_html_content_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_html_content_token1] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [2] = {
    [sym__statement] = STATE(47),
    [sym_comment_statement] = STATE(47),
    [sym_line_comment] = STATE(46),
    [sym_block_comment] = STATE(46),
    [sym_variable_statement] = STATE(47),
    [sym_control_statement] = STATE(47),
    [sym__control_keyword] = STATE(19),
    [sym_control] = STATE(19),
    [sym_control_repeat] = STATE(19),
    [sym_default_statement] = STATE(47),
    [sym_compare_statement] = STATE(47),
    [sym_compare_keyword] = STATE(27),
    [sym_function_statement] = STATE(47),
    [sym_const] = STATE(47),
    [sym_block_statement] = STATE(47),
    [sym_block_keyword] = STATE(28),
    [sym_extend_statement] = STATE(47),
    [sym_extend_keyword] = STATE(29),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_SLASH_STAR] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_range] = ACTIONS(15),
    [anon_sym_in] = ACTIONS(17),
    [anon_sym_notin] = ACTIONS(15),
    [anon_sym_switch] = ACTIONS(15),
    [anon_sym_case] = ACTIONS(15),
    [anon_sym_defined] = ACTIONS(15),
    [anon_sym_else] = ACTIONS(15),
    [anon_sym_volist] = ACTIONS(19),
    [anon_sym_foreach] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(23),
    [anon_sym_neq] = ACTIONS(25),
    [anon_sym_eq] = ACTIONS(25),
    [anon_sym_egt] = ACTIONS(25),
    [anon_sym_elt] = ACTIONS(25),
    [anon_sym_lt] = ACTIONS(25),
    [anon_sym_gt] = ACTIONS(25),
    [anon_sym_notempty] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym___] = ACTIONS(29),
    [anon_sym_block] = ACTIONS(31),
    [anon_sym_literal] = ACTIONS(31),
    [anon_sym_include] = ACTIONS(33),
    [anon_sym_extend] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      aux_sym_html_content_token1,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      aux_sym_html_content_repeat1,
    STATE(4), 4,
      sym__node,
      sym_html_content,
      sym_statement,
      aux_sym_source_file_repeat1,
  [19] = 5,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      aux_sym_html_content_token1,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym_html_content_repeat1,
    STATE(4), 4,
      sym__node,
      sym_html_content,
      sym_statement,
      aux_sym_source_file_repeat1,
  [38] = 5,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_PIPE,
    STATE(9), 1,
      aux_sym_variable_statement_repeat1,
    STATE(13), 1,
      aux_sym_variable_statement_repeat2,
    ACTIONS(45), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [55] = 5,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_PIPE,
    STATE(5), 1,
      aux_sym_variable_statement_repeat1,
    STATE(14), 1,
      aux_sym_variable_statement_repeat2,
    ACTIONS(51), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [72] = 4,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 2,
      sym_identifier,
      sym_number,
    STATE(55), 2,
      sym__expression,
      sym_string,
  [87] = 5,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_number,
    STATE(31), 2,
      sym_variable_statement,
      sym_string,
  [104] = 3,
    ACTIONS(63), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_variable_statement_repeat1,
    ACTIONS(61), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [116] = 1,
    ACTIONS(66), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_identifier,
  [123] = 3,
    ACTIONS(70), 1,
      anon_sym_PIPE,
    STATE(11), 1,
      aux_sym_variable_statement_repeat2,
    ACTIONS(68), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [134] = 4,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      aux_sym_html_content_token1,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      aux_sym_html_content_repeat1,
  [147] = 3,
    ACTIONS(49), 1,
      anon_sym_PIPE,
    STATE(11), 1,
      aux_sym_variable_statement_repeat2,
    ACTIONS(79), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [158] = 3,
    ACTIONS(49), 1,
      anon_sym_PIPE,
    STATE(11), 1,
      aux_sym_variable_statement_repeat2,
    ACTIONS(81), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [169] = 2,
    ACTIONS(85), 1,
      anon_sym_EQ,
    ACTIONS(83), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [178] = 4,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      aux_sym_html_content_token1,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      aux_sym_html_content_repeat1,
  [191] = 3,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(20), 1,
      aux_sym__parameters,
  [201] = 1,
    ACTIONS(98), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
  [207] = 3,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym__parameters,
  [217] = 3,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(20), 1,
      aux_sym__parameters,
  [227] = 1,
    ACTIONS(107), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [233] = 1,
    ACTIONS(109), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [239] = 3,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym__parameters,
  [249] = 2,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 2,
      aux_sym_html_content_token1,
      anon_sym_LBRACE,
  [257] = 3,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym__parameters,
  [267] = 3,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym__parameters,
  [277] = 2,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(17), 1,
      aux_sym__parameters,
  [284] = 2,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym__parameters,
  [291] = 2,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(23), 1,
      aux_sym__parameters,
  [298] = 1,
    ACTIONS(121), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [303] = 1,
    ACTIONS(123), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [308] = 1,
    ACTIONS(125), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [313] = 2,
    ACTIONS(127), 1,
      sym_identifier,
    STATE(22), 1,
      sym__filter,
  [320] = 1,
    ACTIONS(129), 1,
      sym_identifier,
  [324] = 1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
  [328] = 1,
    ACTIONS(133), 1,
      anon_sym_EQ,
  [332] = 1,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
  [336] = 1,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
  [340] = 1,
    ACTIONS(139), 1,
      sym_identifier,
  [344] = 1,
    ACTIONS(141), 1,
      anon_sym___,
  [348] = 1,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
  [352] = 1,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
  [356] = 1,
    ACTIONS(147), 1,
      anon_sym_STAR_SLASH,
  [360] = 1,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
  [364] = 1,
    ACTIONS(151), 1,
      aux_sym_line_comment_token2,
  [368] = 1,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
  [372] = 1,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
  [376] = 1,
    ACTIONS(157), 1,
      sym_identifier,
  [380] = 1,
    ACTIONS(159), 1,
      sym_identifier,
  [384] = 1,
    ACTIONS(161), 1,
      sym_identifier,
  [388] = 1,
    ACTIONS(163), 1,
      sym_identifier,
  [392] = 1,
    ACTIONS(165), 1,
      anon_sym_SLASH,
  [396] = 1,
    ACTIONS(167), 1,
      aux_sym_string_token1,
  [400] = 1,
    ACTIONS(169), 1,
      aux_sym_string_token2,
  [404] = 1,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
  [408] = 1,
    ACTIONS(173), 1,
      sym_identifier,
  [412] = 1,
    ACTIONS(175), 1,
      sym_identifier,
  [416] = 1,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
  [420] = 1,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
  [424] = 1,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
  [428] = 1,
    ACTIONS(181), 1,
      aux_sym_block_comment_token1,
  [432] = 1,
    ACTIONS(183), 1,
      aux_sym_line_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 19,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 55,
  [SMALL_STATE(7)] = 72,
  [SMALL_STATE(8)] = 87,
  [SMALL_STATE(9)] = 104,
  [SMALL_STATE(10)] = 116,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 134,
  [SMALL_STATE(13)] = 147,
  [SMALL_STATE(14)] = 158,
  [SMALL_STATE(15)] = 169,
  [SMALL_STATE(16)] = 178,
  [SMALL_STATE(17)] = 191,
  [SMALL_STATE(18)] = 201,
  [SMALL_STATE(19)] = 207,
  [SMALL_STATE(20)] = 217,
  [SMALL_STATE(21)] = 227,
  [SMALL_STATE(22)] = 233,
  [SMALL_STATE(23)] = 239,
  [SMALL_STATE(24)] = 249,
  [SMALL_STATE(25)] = 257,
  [SMALL_STATE(26)] = 267,
  [SMALL_STATE(27)] = 277,
  [SMALL_STATE(28)] = 284,
  [SMALL_STATE(29)] = 291,
  [SMALL_STATE(30)] = 298,
  [SMALL_STATE(31)] = 303,
  [SMALL_STATE(32)] = 308,
  [SMALL_STATE(33)] = 313,
  [SMALL_STATE(34)] = 320,
  [SMALL_STATE(35)] = 324,
  [SMALL_STATE(36)] = 328,
  [SMALL_STATE(37)] = 332,
  [SMALL_STATE(38)] = 336,
  [SMALL_STATE(39)] = 340,
  [SMALL_STATE(40)] = 344,
  [SMALL_STATE(41)] = 348,
  [SMALL_STATE(42)] = 352,
  [SMALL_STATE(43)] = 356,
  [SMALL_STATE(44)] = 360,
  [SMALL_STATE(45)] = 364,
  [SMALL_STATE(46)] = 368,
  [SMALL_STATE(47)] = 372,
  [SMALL_STATE(48)] = 376,
  [SMALL_STATE(49)] = 380,
  [SMALL_STATE(50)] = 384,
  [SMALL_STATE(51)] = 388,
  [SMALL_STATE(52)] = 392,
  [SMALL_STATE(53)] = 396,
  [SMALL_STATE(54)] = 400,
  [SMALL_STATE(55)] = 404,
  [SMALL_STATE(56)] = 408,
  [SMALL_STATE(57)] = 412,
  [SMALL_STATE(58)] = 416,
  [SMALL_STATE(59)] = 420,
  [SMALL_STATE(60)] = 424,
  [SMALL_STATE(61)] = 428,
  [SMALL_STATE(62)] = 432,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 3, .production_id = 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 2, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat1, 2, .production_id = 10),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat1, 2, .production_id = 10), SHIFT_REPEAT(39),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat1, 2, .production_id = 7),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat2, 2, .production_id = 12),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat2, 2, .production_id = 12), SHIFT_REPEAT(33),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_content, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_content, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 4, .production_id = 11),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 3, .production_id = 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter, 1, .production_id = 8),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_html_content_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_content_repeat1, 2), SHIFT_REPEAT(16),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_content_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare_statement, 2, .production_id = 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters, 2, .production_id = 6),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters, 2, .production_id = 6), SHIFT_REPEAT(36),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter, 3, .production_id = 8),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat2, 2, .production_id = 9),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_statement, 2, .production_id = 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_statement, 2, .production_id = 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_repeat, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters, 3, .production_id = 13),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_keyword, 1),
  [131] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_statement, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_keyword, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare_keyword, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 5, .production_id = 14),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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
