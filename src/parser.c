#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 4
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 21

enum {
  aux_sym_html_content_token1 = 1,
  aux_sym_html_content_token2 = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_SLASH_SLASH = 5,
  aux_sym_line_comment_token1 = 6,
  anon_sym_SLASH = 7,
  anon_sym_STAR = 8,
  aux_sym_block_comment_token1 = 9,
  anon_sym_DOLLAR = 10,
  anon_sym_DOT = 11,
  anon_sym_DASH_GT = 12,
  anon_sym_PIPE = 13,
  anon_sym_EQ = 14,
  anon_sym_if = 15,
  anon_sym_range = 16,
  anon_sym_in = 17,
  anon_sym_notin = 18,
  anon_sym_switch = 19,
  anon_sym_case = 20,
  anon_sym_defined = 21,
  anon_sym_else = 22,
  anon_sym_volist = 23,
  anon_sym_foreach = 24,
  anon_sym_for = 25,
  anon_sym_neq = 26,
  anon_sym_eq = 27,
  anon_sym_egt = 28,
  anon_sym_elt = 29,
  anon_sym_lt = 30,
  anon_sym_gt = 31,
  anon_sym_notempty = 32,
  anon_sym_empty = 33,
  anon_sym_block = 34,
  anon_sym_literal = 35,
  aux_sym_extend_statement_token1 = 36,
  anon_sym_include = 37,
  anon_sym_extend = 38,
  anon_sym_default = 39,
  anon_sym_COLON = 40,
  anon_sym_LPAREN = 41,
  anon_sym_RPAREN = 42,
  anon_sym___ = 43,
  sym_identifier = 44,
  anon_sym_SQUOTE = 45,
  anon_sym_DQUOTE = 46,
  anon_sym_EQ_EQ = 47,
  anon_sym_BANG_EQ = 48,
  anon_sym_GT = 49,
  anon_sym_LT = 50,
  anon_sym_AND = 51,
  anon_sym_OR = 52,
  anon_sym_BSLASH = 53,
  sym_integer = 54,
  sym_float = 55,
  anon_sym_true = 56,
  anon_sym_false = 57,
  sym_source_file = 58,
  sym__node = 59,
  sym_html_content = 60,
  sym_statement = 61,
  sym__statement = 62,
  sym_comment_statement = 63,
  sym_line_comment = 64,
  sym_block_comment = 65,
  sym_variable_statement = 66,
  sym__filter = 67,
  sym_control_statement = 68,
  sym__control_keyword = 69,
  sym_extend_statement = 70,
  sym_extend_keyword = 71,
  sym_function_statement = 72,
  sym_const = 73,
  aux_sym__attributes = 74,
  sym__expression = 75,
  sym_string = 76,
  sym__string_inclue = 77,
  sym_comparison_operator = 78,
  sym_operator = 79,
  sym_literal = 80,
  sym_number = 81,
  sym_boolean = 82,
  aux_sym_source_file_repeat1 = 83,
  aux_sym_html_content_repeat1 = 84,
  aux_sym_variable_statement_repeat1 = 85,
  aux_sym_variable_statement_repeat2 = 86,
  aux_sym_variable_statement_repeat3 = 87,
  alias_sym_attribute = 88,
  alias_sym_function = 89,
  alias_sym_property = 90,
  alias_sym_variable = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_html_content_token1] = "html_content_token1",
  [aux_sym_html_content_token2] = "html_content_token2",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH_GT] = "->",
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
  [anon_sym_neq] = "neq",
  [anon_sym_eq] = "eq",
  [anon_sym_egt] = "egt",
  [anon_sym_elt] = "elt",
  [anon_sym_lt] = "lt",
  [anon_sym_gt] = "gt",
  [anon_sym_notempty] = "notempty",
  [anon_sym_empty] = "empty",
  [anon_sym_block] = "block",
  [anon_sym_literal] = "literal",
  [aux_sym_extend_statement_token1] = "extend_statement_token1",
  [anon_sym_include] = "include",
  [anon_sym_extend] = "extend",
  [anon_sym_default] = "default",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym___] = "__",
  [sym_identifier] = "identifier",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_AND] = "AND",
  [anon_sym_OR] = "OR",
  [anon_sym_BSLASH] = "\\",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
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
  [sym_extend_statement] = "extend_statement",
  [sym_extend_keyword] = "extend_keyword",
  [sym_function_statement] = "function_statement",
  [sym_const] = "const",
  [aux_sym__attributes] = "_attributes",
  [sym__expression] = "_expression",
  [sym_string] = "string",
  [sym__string_inclue] = "_string_inclue",
  [sym_comparison_operator] = "comparison_operator",
  [sym_operator] = "operator",
  [sym_literal] = "literal",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_html_content_repeat1] = "html_content_repeat1",
  [aux_sym_variable_statement_repeat1] = "variable_statement_repeat1",
  [aux_sym_variable_statement_repeat2] = "variable_statement_repeat2",
  [aux_sym_variable_statement_repeat3] = "variable_statement_repeat3",
  [alias_sym_attribute] = "attribute",
  [alias_sym_function] = "function",
  [alias_sym_property] = "property",
  [alias_sym_variable] = "variable",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_html_content_token1] = aux_sym_html_content_token1,
  [aux_sym_html_content_token2] = aux_sym_html_content_token2,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
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
  [anon_sym_neq] = anon_sym_neq,
  [anon_sym_eq] = anon_sym_eq,
  [anon_sym_egt] = anon_sym_egt,
  [anon_sym_elt] = anon_sym_elt,
  [anon_sym_lt] = anon_sym_lt,
  [anon_sym_gt] = anon_sym_gt,
  [anon_sym_notempty] = anon_sym_notempty,
  [anon_sym_empty] = anon_sym_empty,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_literal] = anon_sym_literal,
  [aux_sym_extend_statement_token1] = aux_sym_extend_statement_token1,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_extend] = anon_sym_extend,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym___] = anon_sym___,
  [sym_identifier] = sym_identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
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
  [sym_extend_statement] = sym_extend_statement,
  [sym_extend_keyword] = sym_extend_keyword,
  [sym_function_statement] = sym_function_statement,
  [sym_const] = sym_const,
  [aux_sym__attributes] = aux_sym__attributes,
  [sym__expression] = sym__expression,
  [sym_string] = sym_string,
  [sym__string_inclue] = sym__string_inclue,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_operator] = sym_operator,
  [sym_literal] = sym_literal,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_html_content_repeat1] = aux_sym_html_content_repeat1,
  [aux_sym_variable_statement_repeat1] = aux_sym_variable_statement_repeat1,
  [aux_sym_variable_statement_repeat2] = aux_sym_variable_statement_repeat2,
  [aux_sym_variable_statement_repeat3] = aux_sym_variable_statement_repeat3,
  [alias_sym_attribute] = alias_sym_attribute,
  [alias_sym_function] = alias_sym_function,
  [alias_sym_property] = alias_sym_property,
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
  [aux_sym_html_content_token2] = {
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
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
  [anon_sym_DASH_GT] = {
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
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_literal] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_extend_statement_token1] = {
    .visible = false,
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
  [anon_sym_default] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
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
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
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
  [sym_extend_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_extend_keyword] = {
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
  [aux_sym__attributes] = {
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
  [sym__string_inclue] = {
    .visible = false,
    .named = true,
  },
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
  [aux_sym_variable_statement_repeat3] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_property] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_attributes = 1,
  field_method = 2,
  field_name = 3,
  field_property = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attributes] = "attributes",
  [field_method] = "method",
  [field_name] = "name",
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
  [10] = {.index = 17, .length = 1},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 3},
  [13] = {.index = 23, .length = 2},
  [14] = {.index = 25, .length = 3},
  [15] = {.index = 28, .length = 2},
  [16] = {.index = 30, .length = 2},
  [18] = {.index = 32, .length = 2},
  [19] = {.index = 34, .length = 2},
  [20] = {.index = 36, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_attributes, 1},
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [4] =
    {field_name, 1},
    {field_property, 2, .inherited = true},
  [6] =
    {field_method, 2, .inherited = true},
    {field_name, 1},
  [8] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [10] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [14] =
    {field_property, 1},
  [15] =
    {field_method, 1},
  [16] =
    {field_name, 0},
  [17] =
    {field_name, 1, .inherited = true},
  [18] =
    {field_property, 0, .inherited = true},
    {field_property, 1, .inherited = true},
  [20] =
    {field_name, 1},
    {field_name, 3, .inherited = true},
    {field_property, 2, .inherited = true},
  [23] =
    {field_method, 0, .inherited = true},
    {field_method, 1, .inherited = true},
  [25] =
    {field_method, 2, .inherited = true},
    {field_name, 1},
    {field_name, 3, .inherited = true},
  [28] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [30] =
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [32] =
    {field_name, 1},
    {field_value, 3},
  [34] =
    {field_name, 1},
    {field_value, 4},
  [36] =
    {field_name, 1},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_variable,
  },
  [3] = {
    [1] = alias_sym_variable,
  },
  [4] = {
    [1] = alias_sym_variable,
  },
  [5] = {
    [1] = alias_sym_variable,
  },
  [7] = {
    [1] = alias_sym_property,
  },
  [8] = {
    [1] = alias_sym_function,
  },
  [9] = {
    [0] = alias_sym_function,
  },
  [12] = {
    [1] = alias_sym_variable,
  },
  [14] = {
    [1] = alias_sym_variable,
  },
  [17] = {
    [1] = alias_sym_function,
  },
  [18] = {
    [1] = alias_sym_attribute,
  },
  [19] = {
    [1] = alias_sym_attribute,
  },
  [20] = {
    [1] = alias_sym_attribute,
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
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(88);
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(148);
      if (lookahead == '$') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == 'A') ADVANCE(10);
      if (lookahead == 'O') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead == 'v') ADVANCE(59);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(128);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\r') ADVANCE(96);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(148);
      if (lookahead == '$') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'O') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(128);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(101);
      if (lookahead == '/') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(100);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(150);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(149);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(103);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(153);
      END_STATE();
    case 10:
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'R') ADVANCE(155);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(135);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'q') ADVANCE(119);
      if (lookahead == 'x') ADVANCE(78);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 46:
      if (lookahead == 'k') ADVANCE(126);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == 'q') ADVANCE(118);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 83:
      if (lookahead == 'w') ADVANCE(44);
      END_STATE();
    case 84:
      if (lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 85:
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 87:
      if (eof) ADVANCE(88);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_html_content_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_html_content_token2);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_html_content_token2);
      if (lookahead == '\n') ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == 0) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\r') ADVANCE(96);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(94);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(149);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_notin);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_defined);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_volist);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_neq);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_egt);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_elt);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_lt);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_gt);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_notempty);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_literal);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_extend_statement_token1);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_OR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 87},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 87},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 87},
  [32] = {.lex_state = 87},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 87},
  [35] = {.lex_state = 87},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_html_content_token2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
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
    [anon_sym_neq] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [anon_sym_egt] = ACTIONS(1),
    [anon_sym_elt] = ACTIONS(1),
    [anon_sym_lt] = ACTIONS(1),
    [anon_sym_gt] = ACTIONS(1),
    [anon_sym_notempty] = ACTIONS(1),
    [anon_sym_empty] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_literal] = ACTIONS(1),
    [aux_sym_extend_statement_token1] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_extend] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym___] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [sym__node] = STATE(14),
    [sym_html_content] = STATE(14),
    [sym_statement] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [aux_sym_html_content_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_html_content_token1] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_SLASH,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(23), 1,
      anon_sym___,
    STATE(47), 1,
      sym_extend_keyword,
    STATE(48), 1,
      sym__control_keyword,
    ACTIONS(17), 2,
      anon_sym_in,
      anon_sym_for,
    STATE(64), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(19), 3,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_default,
    STATE(51), 7,
      sym__statement,
      sym_comment_statement,
      sym_variable_statement,
      sym_control_statement,
      sym_extend_statement,
      sym_function_statement,
      sym_const,
    ACTIONS(15), 19,
      anon_sym_if,
      anon_sym_range,
      anon_sym_notin,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_defined,
      anon_sym_else,
      anon_sym_volist,
      anon_sym_foreach,
      anon_sym_neq,
      anon_sym_eq,
      anon_sym_egt,
      anon_sym_elt,
      anon_sym_lt,
      anon_sym_gt,
      anon_sym_notempty,
      anon_sym_empty,
      anon_sym_block,
      anon_sym_literal,
  [65] = 13,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      aux_sym_extend_statement_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(37), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 3,
      sym_string,
      sym_number,
      sym_boolean,
    ACTIONS(25), 4,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
    ACTIONS(35), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(68), 5,
      sym_variable_statement,
      sym__string_inclue,
      sym_comparison_operator,
      sym_operator,
      sym_literal,
  [119] = 13,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(45), 1,
      aux_sym_extend_statement_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 3,
      sym_string,
      sym_number,
      sym_boolean,
    ACTIONS(25), 4,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
    ACTIONS(35), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(67), 5,
      sym_variable_statement,
      sym__string_inclue,
      sym_comparison_operator,
      sym_operator,
      sym_literal,
  [173] = 9,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(49), 1,
      aux_sym_extend_statement_token1,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym__expression,
      sym_literal,
    STATE(25), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [205] = 9,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(53), 1,
      aux_sym_extend_statement_token1,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym__expression,
      sym_literal,
    STATE(25), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [237] = 8,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym__expression,
      sym_literal,
    STATE(25), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [266] = 8,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 2,
      sym__expression,
      sym_literal,
    STATE(25), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [295] = 8,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym__expression,
      sym_literal,
    STATE(25), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [324] = 8,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym__expression,
      sym_literal,
    STATE(25), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [353] = 7,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(67), 1,
      anon_sym_DASH_GT,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    STATE(13), 1,
      aux_sym_variable_statement_repeat2,
    STATE(15), 1,
      aux_sym_variable_statement_repeat1,
    STATE(22), 1,
      aux_sym_variable_statement_repeat3,
    ACTIONS(63), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [378] = 5,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      aux_sym_html_content_token1,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      aux_sym_html_content_repeat1,
    STATE(12), 4,
      sym__node,
      sym_html_content,
      sym_statement,
      aux_sym_source_file_repeat1,
  [397] = 5,
    ACTIONS(67), 1,
      anon_sym_DASH_GT,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    STATE(16), 1,
      aux_sym_variable_statement_repeat2,
    STATE(23), 1,
      aux_sym_variable_statement_repeat3,
    ACTIONS(79), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [416] = 5,
    ACTIONS(5), 1,
      aux_sym_html_content_token1,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      aux_sym_html_content_repeat1,
    STATE(12), 4,
      sym__node,
      sym_html_content,
      sym_statement,
      aux_sym_source_file_repeat1,
  [435] = 5,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    STATE(17), 1,
      aux_sym_variable_statement_repeat1,
    STATE(18), 1,
      aux_sym_variable_statement_repeat3,
    ACTIONS(83), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [454] = 3,
    ACTIONS(87), 1,
      anon_sym_DASH_GT,
    STATE(16), 1,
      aux_sym_variable_statement_repeat2,
    ACTIONS(85), 5,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [468] = 3,
    ACTIONS(92), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_variable_statement_repeat1,
    ACTIONS(90), 5,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [482] = 3,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    STATE(24), 1,
      aux_sym_variable_statement_repeat3,
    ACTIONS(95), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [495] = 2,
    ACTIONS(99), 1,
      anon_sym_EQ,
    ACTIONS(97), 5,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [506] = 1,
    ACTIONS(101), 6,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [515] = 1,
    ACTIONS(103), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [524] = 3,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    STATE(24), 1,
      aux_sym_variable_statement_repeat3,
    ACTIONS(105), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [537] = 3,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    STATE(24), 1,
      aux_sym_variable_statement_repeat3,
    ACTIONS(107), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [550] = 3,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    STATE(24), 1,
      aux_sym_variable_statement_repeat3,
    ACTIONS(109), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [563] = 1,
    ACTIONS(114), 5,
      anon_sym_RBRACE,
      aux_sym_extend_statement_token1,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [571] = 1,
    ACTIONS(116), 5,
      anon_sym_RBRACE,
      aux_sym_extend_statement_token1,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [579] = 1,
    ACTIONS(118), 5,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [587] = 1,
    ACTIONS(120), 5,
      anon_sym_RBRACE,
      aux_sym_extend_statement_token1,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [595] = 1,
    ACTIONS(122), 5,
      anon_sym_RBRACE,
      aux_sym_extend_statement_token1,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [603] = 1,
    ACTIONS(124), 5,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [611] = 3,
    ACTIONS(5), 1,
      aux_sym_html_content_token1,
    STATE(32), 1,
      aux_sym_html_content_repeat1,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
  [622] = 3,
    ACTIONS(130), 1,
      aux_sym_html_content_token1,
    STATE(32), 1,
      aux_sym_html_content_repeat1,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
  [633] = 3,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 1,
      aux_sym_extend_statement_token1,
    STATE(33), 1,
      aux_sym__attributes,
  [643] = 2,
    ACTIONS(138), 1,
      aux_sym_html_content_token1,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
  [651] = 2,
    ACTIONS(142), 1,
      aux_sym_html_content_token1,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
  [659] = 3,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 1,
      aux_sym_extend_statement_token1,
    STATE(33), 1,
      aux_sym__attributes,
  [669] = 3,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(74), 1,
      sym_variable_statement,
  [679] = 1,
    ACTIONS(150), 2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [684] = 2,
    ACTIONS(152), 1,
      aux_sym_extend_statement_token1,
    STATE(33), 1,
      aux_sym__attributes,
  [691] = 1,
    ACTIONS(154), 2,
      anon_sym_RBRACE,
      aux_sym_extend_statement_token1,
  [696] = 2,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(30), 1,
      sym__filter,
  [703] = 1,
    ACTIONS(158), 2,
      anon_sym_RBRACE,
      aux_sym_extend_statement_token1,
  [708] = 2,
    ACTIONS(160), 1,
      anon_sym_EQ,
    ACTIONS(162), 1,
      aux_sym_extend_statement_token1,
  [715] = 2,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      sym_identifier,
  [722] = 1,
    ACTIONS(168), 2,
      anon_sym_RBRACE,
      aux_sym_extend_statement_token1,
  [727] = 1,
    ACTIONS(170), 2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [732] = 2,
    ACTIONS(146), 1,
      aux_sym_extend_statement_token1,
    STATE(39), 1,
      aux_sym__attributes,
  [739] = 2,
    ACTIONS(146), 1,
      aux_sym_extend_statement_token1,
    STATE(36), 1,
      aux_sym__attributes,
  [746] = 1,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
  [750] = 1,
    ACTIONS(174), 1,
      sym_identifier,
  [754] = 1,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
  [758] = 1,
    ACTIONS(178), 1,
      sym_identifier,
  [762] = 1,
    ACTIONS(180), 1,
      aux_sym_block_comment_token1,
  [766] = 1,
    ACTIONS(182), 1,
      aux_sym_extend_statement_token1,
  [770] = 1,
    ACTIONS(184), 1,
      sym_identifier,
  [774] = 1,
    ACTIONS(186), 1,
      anon_sym_STAR,
  [778] = 1,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
  [782] = 1,
    ACTIONS(190), 1,
      anon_sym_STAR,
  [786] = 1,
    ACTIONS(192), 1,
      sym_identifier,
  [790] = 1,
    ACTIONS(194), 1,
      aux_sym_line_comment_token1,
  [794] = 1,
    ACTIONS(196), 1,
      anon_sym_EQ,
  [798] = 1,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
  [802] = 1,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
  [806] = 1,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
  [810] = 1,
    ACTIONS(204), 1,
      sym_identifier,
  [814] = 1,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
  [818] = 1,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
  [822] = 1,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
  [826] = 1,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
  [830] = 1,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
  [834] = 1,
    ACTIONS(166), 1,
      sym_identifier,
  [838] = 1,
    ACTIONS(214), 1,
      aux_sym_html_content_token2,
  [842] = 1,
    ACTIONS(216), 1,
      anon_sym___,
  [846] = 1,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
  [850] = 1,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
  [854] = 1,
    ACTIONS(222), 1,
      anon_sym_SLASH,
  [858] = 1,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
  [862] = 1,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 119,
  [SMALL_STATE(5)] = 173,
  [SMALL_STATE(6)] = 205,
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 266,
  [SMALL_STATE(9)] = 295,
  [SMALL_STATE(10)] = 324,
  [SMALL_STATE(11)] = 353,
  [SMALL_STATE(12)] = 378,
  [SMALL_STATE(13)] = 397,
  [SMALL_STATE(14)] = 416,
  [SMALL_STATE(15)] = 435,
  [SMALL_STATE(16)] = 454,
  [SMALL_STATE(17)] = 468,
  [SMALL_STATE(18)] = 482,
  [SMALL_STATE(19)] = 495,
  [SMALL_STATE(20)] = 506,
  [SMALL_STATE(21)] = 515,
  [SMALL_STATE(22)] = 524,
  [SMALL_STATE(23)] = 537,
  [SMALL_STATE(24)] = 550,
  [SMALL_STATE(25)] = 563,
  [SMALL_STATE(26)] = 571,
  [SMALL_STATE(27)] = 579,
  [SMALL_STATE(28)] = 587,
  [SMALL_STATE(29)] = 595,
  [SMALL_STATE(30)] = 603,
  [SMALL_STATE(31)] = 611,
  [SMALL_STATE(32)] = 622,
  [SMALL_STATE(33)] = 633,
  [SMALL_STATE(34)] = 643,
  [SMALL_STATE(35)] = 651,
  [SMALL_STATE(36)] = 659,
  [SMALL_STATE(37)] = 669,
  [SMALL_STATE(38)] = 679,
  [SMALL_STATE(39)] = 684,
  [SMALL_STATE(40)] = 691,
  [SMALL_STATE(41)] = 696,
  [SMALL_STATE(42)] = 703,
  [SMALL_STATE(43)] = 708,
  [SMALL_STATE(44)] = 715,
  [SMALL_STATE(45)] = 722,
  [SMALL_STATE(46)] = 727,
  [SMALL_STATE(47)] = 732,
  [SMALL_STATE(48)] = 739,
  [SMALL_STATE(49)] = 746,
  [SMALL_STATE(50)] = 750,
  [SMALL_STATE(51)] = 754,
  [SMALL_STATE(52)] = 758,
  [SMALL_STATE(53)] = 762,
  [SMALL_STATE(54)] = 766,
  [SMALL_STATE(55)] = 770,
  [SMALL_STATE(56)] = 774,
  [SMALL_STATE(57)] = 778,
  [SMALL_STATE(58)] = 782,
  [SMALL_STATE(59)] = 786,
  [SMALL_STATE(60)] = 790,
  [SMALL_STATE(61)] = 794,
  [SMALL_STATE(62)] = 798,
  [SMALL_STATE(63)] = 802,
  [SMALL_STATE(64)] = 806,
  [SMALL_STATE(65)] = 810,
  [SMALL_STATE(66)] = 814,
  [SMALL_STATE(67)] = 818,
  [SMALL_STATE(68)] = 822,
  [SMALL_STATE(69)] = 826,
  [SMALL_STATE(70)] = 830,
  [SMALL_STATE(71)] = 834,
  [SMALL_STATE(72)] = 838,
  [SMALL_STATE(73)] = 842,
  [SMALL_STATE(74)] = 846,
  [SMALL_STATE(75)] = 850,
  [SMALL_STATE(76)] = 854,
  [SMALL_STATE(77)] = 858,
  [SMALL_STATE(78)] = 862,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 2, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 3, .production_id = 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 3, .production_id = 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat2, 2, .production_id = 13),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat2, 2, .production_id = 13), SHIFT_REPEAT(65),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat1, 2, .production_id = 11),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat1, 2, .production_id = 11), SHIFT_REPEAT(59),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 4, .production_id = 12),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter, 1, .production_id = 9),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat2, 2, .production_id = 8),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat1, 2, .production_id = 7),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 3, .production_id = 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 4, .production_id = 14),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat3, 2, .production_id = 15),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat3, 2, .production_id = 15), SHIFT_REPEAT(41),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter, 3, .production_id = 9),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat3, 2, .production_id = 10),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_content, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_html_content_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_content_repeat1, 2), SHIFT_REPEAT(72),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributes, 2, .production_id = 6),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attributes, 2, .production_id = 6), SHIFT_REPEAT(71),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_content_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_statement, 2, .production_id = 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributes, 6, .production_id = 20),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributes, 5, .production_id = 19),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributes, 4, .production_id = 18),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_keyword, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_statement, 4, .production_id = 16),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_statement, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 5, .production_id = 17),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [224] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3),
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
