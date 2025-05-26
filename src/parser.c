#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
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
  anon_sym_default = 26,
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
  aux_sym_extend_statement_token1 = 41,
  anon_sym_include = 42,
  anon_sym_extend = 43,
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
  sym_control = 70,
  sym_control_repeat = 71,
  sym_default_statement = 72,
  sym_compare_statement = 73,
  sym_compare_keyword = 74,
  sym_function_statement = 75,
  sym_const = 76,
  sym_block_statement = 77,
  sym_block_keyword = 78,
  sym_extend_statement = 79,
  sym_extend_keyword = 80,
  aux_sym__attributes = 81,
  sym__expression = 82,
  sym_string = 83,
  sym__string_inclue = 84,
  sym_comparison_operator = 85,
  sym_operator = 86,
  sym_literal = 87,
  sym_number = 88,
  sym_boolean = 89,
  aux_sym_source_file_repeat1 = 90,
  aux_sym_html_content_repeat1 = 91,
  aux_sym_variable_statement_repeat1 = 92,
  aux_sym_variable_statement_repeat2 = 93,
  aux_sym_variable_statement_repeat3 = 94,
  alias_sym_attribute = 95,
  alias_sym_function = 96,
  alias_sym_property = 97,
  alias_sym_variable = 98,
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
  [anon_sym_default] = "return",
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
  [aux_sym_extend_statement_token1] = "extend_statement_token1",
  [anon_sym_include] = "include",
  [anon_sym_extend] = "extend",
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
  [anon_sym_default] = anon_sym_default,
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
  [aux_sym_extend_statement_token1] = aux_sym_extend_statement_token1,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_extend] = anon_sym_extend,
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
  [anon_sym_default] = {
    .visible = true,
    .named = true,
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
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
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
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ':') ADVANCE(127);
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
          lookahead == 12288) ADVANCE(133);
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
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(129);
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
          lookahead == 12288) ADVANCE(133);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '(') ADVANCE(128);
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
          lookahead == 12288) ADVANCE(133);
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
      if (lookahead == '_') ADVANCE(130);
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
      if (lookahead == 'd') ADVANCE(135);
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
      if (lookahead == 'e') ADVANCE(134);
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
      if (lookahead == 'q') ADVANCE(120);
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
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 46:
      if (lookahead == 'k') ADVANCE(131);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(132);
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
      if (lookahead == 'q') ADVANCE(119);
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
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(121);
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
      if (lookahead == 't') ADVANCE(118);
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
      if (lookahead == 'y') ADVANCE(126);
      END_STATE();
    case 85:
      if (lookahead == 'y') ADVANCE(125);
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
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_neq);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_egt);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_elt);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_lt);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_gt);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_notempty);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_literal);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_extend_statement_token1);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_extend);
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
  [13] = {.lex_state = 87},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 3},
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
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 87},
  [36] = {.lex_state = 87},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 5},
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
    [anon_sym_default] = ACTIONS(1),
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
    [aux_sym_extend_statement_token1] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_extend] = ACTIONS(1),
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
    [sym_source_file] = STATE(87),
    [sym__node] = STATE(12),
    [sym_html_content] = STATE(12),
    [sym_statement] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [aux_sym_html_content_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_html_content_token1] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_SLASH,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_in,
    ACTIONS(21), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      anon_sym_default,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym___,
    STATE(43), 1,
      sym_extend_keyword,
    STATE(46), 1,
      sym_compare_keyword,
    STATE(47), 1,
      sym_block_keyword,
    ACTIONS(19), 2,
      anon_sym_volist,
      anon_sym_foreach,
    ACTIONS(31), 2,
      anon_sym_block,
      anon_sym_literal,
    ACTIONS(33), 2,
      anon_sym_include,
      anon_sym_extend,
    STATE(65), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 3,
      sym__control_keyword,
      sym_control,
      sym_control_repeat,
    ACTIONS(15), 7,
      anon_sym_if,
      anon_sym_range,
      anon_sym_notin,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_defined,
      anon_sym_else,
    ACTIONS(25), 8,
      anon_sym_neq,
      anon_sym_eq,
      anon_sym_egt,
      anon_sym_elt,
      anon_sym_lt,
      anon_sym_gt,
      anon_sym_notempty,
      anon_sym_empty,
    STATE(72), 10,
      sym__statement,
      sym_comment_statement,
      sym_variable_statement,
      sym_control_statement,
      sym_default_statement,
      sym_compare_statement,
      sym_function_statement,
      sym_const,
      sym_block_statement,
      sym_extend_statement,
  [86] = 13,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      aux_sym_extend_statement_token1,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_integer,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(47), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 3,
      sym_string,
      sym_number,
      sym_boolean,
    ACTIONS(35), 4,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(78), 5,
      sym_variable_statement,
      sym__string_inclue,
      sym_comparison_operator,
      sym_operator,
      sym_literal,
  [140] = 13,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_integer,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(55), 1,
      aux_sym_extend_statement_token1,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 3,
      sym_string,
      sym_number,
      sym_boolean,
    ACTIONS(35), 4,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_LT,
    STATE(77), 5,
      sym_variable_statement,
      sym__string_inclue,
      sym_comparison_operator,
      sym_operator,
      sym_literal,
  [194] = 9,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_integer,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(59), 1,
      aux_sym_extend_statement_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym__expression,
      sym_literal,
    STATE(28), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [226] = 9,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_integer,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(63), 1,
      aux_sym_extend_statement_token1,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 2,
      sym__expression,
      sym_literal,
    STATE(28), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [258] = 8,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_integer,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym__expression,
      sym_literal,
    STATE(28), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [287] = 8,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_integer,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym__expression,
      sym_literal,
    STATE(28), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [316] = 8,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_integer,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym__expression,
      sym_literal,
    STATE(28), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [345] = 8,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_integer,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym__expression,
      sym_literal,
    STATE(28), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [374] = 7,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_DASH_GT,
    ACTIONS(79), 1,
      anon_sym_PIPE,
    STATE(14), 1,
      aux_sym_variable_statement_repeat1,
    STATE(15), 1,
      aux_sym_variable_statement_repeat2,
    STATE(21), 1,
      aux_sym_variable_statement_repeat3,
    ACTIONS(73), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [399] = 5,
    ACTIONS(5), 1,
      aux_sym_html_content_token1,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      aux_sym_html_content_repeat1,
    STATE(13), 4,
      sym__node,
      sym_html_content,
      sym_statement,
      aux_sym_source_file_repeat1,
  [418] = 5,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      aux_sym_html_content_token1,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      aux_sym_html_content_repeat1,
    STATE(13), 4,
      sym__node,
      sym_html_content,
      sym_statement,
      aux_sym_source_file_repeat1,
  [437] = 5,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(79), 1,
      anon_sym_PIPE,
    STATE(17), 1,
      aux_sym_variable_statement_repeat1,
    STATE(24), 1,
      aux_sym_variable_statement_repeat3,
    ACTIONS(91), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [456] = 5,
    ACTIONS(77), 1,
      anon_sym_DASH_GT,
    ACTIONS(79), 1,
      anon_sym_PIPE,
    STATE(16), 1,
      aux_sym_variable_statement_repeat2,
    STATE(18), 1,
      aux_sym_variable_statement_repeat3,
    ACTIONS(93), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [475] = 3,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    STATE(16), 1,
      aux_sym_variable_statement_repeat2,
    ACTIONS(95), 5,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [489] = 3,
    ACTIONS(102), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_variable_statement_repeat1,
    ACTIONS(100), 5,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [503] = 3,
    ACTIONS(79), 1,
      anon_sym_PIPE,
    STATE(20), 1,
      aux_sym_variable_statement_repeat3,
    ACTIONS(105), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [516] = 1,
    ACTIONS(107), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [525] = 3,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    STATE(20), 1,
      aux_sym_variable_statement_repeat3,
    ACTIONS(109), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [538] = 3,
    ACTIONS(79), 1,
      anon_sym_PIPE,
    STATE(20), 1,
      aux_sym_variable_statement_repeat3,
    ACTIONS(114), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [551] = 1,
    ACTIONS(116), 6,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [560] = 2,
    ACTIONS(120), 1,
      anon_sym_EQ,
    ACTIONS(118), 5,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [571] = 3,
    ACTIONS(79), 1,
      anon_sym_PIPE,
    STATE(20), 1,
      aux_sym_variable_statement_repeat3,
    ACTIONS(122), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [584] = 1,
    ACTIONS(124), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym_extend_statement_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [592] = 1,
    ACTIONS(126), 5,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [600] = 1,
    ACTIONS(128), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym_extend_statement_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [608] = 1,
    ACTIONS(130), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym_extend_statement_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [616] = 1,
    ACTIONS(132), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym_extend_statement_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [624] = 1,
    ACTIONS(134), 5,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [632] = 3,
    ACTIONS(5), 1,
      aux_sym_html_content_token1,
    STATE(32), 1,
      aux_sym_html_content_repeat1,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
  [643] = 3,
    ACTIONS(140), 1,
      aux_sym_html_content_token1,
    STATE(32), 1,
      aux_sym_html_content_repeat1,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
  [654] = 3,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 1,
      aux_sym_extend_statement_token1,
    STATE(37), 1,
      aux_sym__attributes,
  [664] = 3,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 1,
      aux_sym_extend_statement_token1,
    STATE(34), 1,
      aux_sym__attributes,
  [674] = 2,
    ACTIONS(154), 1,
      aux_sym_html_content_token1,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
  [682] = 2,
    ACTIONS(156), 1,
      aux_sym_html_content_token1,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
  [690] = 3,
    ACTIONS(145), 1,
      aux_sym_extend_statement_token1,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym__attributes,
  [700] = 3,
    ACTIONS(145), 1,
      aux_sym_extend_statement_token1,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym__attributes,
  [710] = 3,
    ACTIONS(145), 1,
      aux_sym_extend_statement_token1,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym__attributes,
  [720] = 3,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(84), 1,
      sym_variable_statement,
  [730] = 2,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(26), 1,
      sym__filter,
  [737] = 1,
    ACTIONS(168), 2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [742] = 2,
    ACTIONS(145), 1,
      aux_sym_extend_statement_token1,
    STATE(51), 1,
      aux_sym__attributes,
  [749] = 1,
    ACTIONS(170), 2,
      anon_sym_RBRACE,
      aux_sym_extend_statement_token1,
  [754] = 1,
    ACTIONS(172), 2,
      anon_sym_RBRACE,
      aux_sym_extend_statement_token1,
  [759] = 2,
    ACTIONS(145), 1,
      aux_sym_extend_statement_token1,
    STATE(38), 1,
      aux_sym__attributes,
  [766] = 2,
    ACTIONS(145), 1,
      aux_sym_extend_statement_token1,
    STATE(39), 1,
      aux_sym__attributes,
  [773] = 1,
    ACTIONS(174), 2,
      anon_sym_RBRACE,
      aux_sym_extend_statement_token1,
  [778] = 1,
    ACTIONS(176), 2,
      anon_sym_RBRACE,
      aux_sym_extend_statement_token1,
  [783] = 2,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      aux_sym_extend_statement_token1,
  [790] = 2,
    ACTIONS(182), 1,
      aux_sym_extend_statement_token1,
    STATE(34), 1,
      aux_sym__attributes,
  [797] = 2,
    ACTIONS(184), 1,
      anon_sym_SLASH,
    ACTIONS(186), 1,
      sym_identifier,
  [804] = 1,
    ACTIONS(188), 2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [809] = 1,
    ACTIONS(190), 2,
      anon_sym_RBRACE,
      aux_sym_extend_statement_token1,
  [814] = 1,
    ACTIONS(192), 1,
      aux_sym_extend_statement_token1,
  [818] = 1,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
  [822] = 1,
    ACTIONS(196), 1,
      aux_sym_extend_statement_token1,
  [826] = 1,
    ACTIONS(198), 1,
      sym_identifier,
  [830] = 1,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
  [834] = 1,
    ACTIONS(202), 1,
      aux_sym_extend_statement_token1,
  [838] = 1,
    ACTIONS(204), 1,
      anon_sym_SLASH,
  [842] = 1,
    ACTIONS(206), 1,
      anon_sym_SLASH,
  [846] = 1,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
  [850] = 1,
    ACTIONS(210), 1,
      sym_identifier,
  [854] = 1,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
  [858] = 1,
    ACTIONS(214), 1,
      anon_sym_STAR,
  [862] = 1,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
  [866] = 1,
    ACTIONS(218), 1,
      aux_sym_html_content_token2,
  [870] = 1,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
  [874] = 1,
    ACTIONS(222), 1,
      aux_sym_line_comment_token1,
  [878] = 1,
    ACTIONS(224), 1,
      anon_sym_EQ,
  [882] = 1,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
  [886] = 1,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
  [890] = 1,
    ACTIONS(230), 1,
      sym_identifier,
  [894] = 1,
    ACTIONS(232), 1,
      sym_identifier,
  [898] = 1,
    ACTIONS(234), 1,
      sym_identifier,
  [902] = 1,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
  [906] = 1,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
  [910] = 1,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
  [914] = 1,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
  [918] = 1,
    ACTIONS(242), 1,
      anon_sym_STAR,
  [922] = 1,
    ACTIONS(186), 1,
      sym_identifier,
  [926] = 1,
    ACTIONS(244), 1,
      anon_sym___,
  [930] = 1,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
  [934] = 1,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
  [938] = 1,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
  [942] = 1,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
  [946] = 1,
    ACTIONS(254), 1,
      aux_sym_block_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 194,
  [SMALL_STATE(6)] = 226,
  [SMALL_STATE(7)] = 258,
  [SMALL_STATE(8)] = 287,
  [SMALL_STATE(9)] = 316,
  [SMALL_STATE(10)] = 345,
  [SMALL_STATE(11)] = 374,
  [SMALL_STATE(12)] = 399,
  [SMALL_STATE(13)] = 418,
  [SMALL_STATE(14)] = 437,
  [SMALL_STATE(15)] = 456,
  [SMALL_STATE(16)] = 475,
  [SMALL_STATE(17)] = 489,
  [SMALL_STATE(18)] = 503,
  [SMALL_STATE(19)] = 516,
  [SMALL_STATE(20)] = 525,
  [SMALL_STATE(21)] = 538,
  [SMALL_STATE(22)] = 551,
  [SMALL_STATE(23)] = 560,
  [SMALL_STATE(24)] = 571,
  [SMALL_STATE(25)] = 584,
  [SMALL_STATE(26)] = 592,
  [SMALL_STATE(27)] = 600,
  [SMALL_STATE(28)] = 608,
  [SMALL_STATE(29)] = 616,
  [SMALL_STATE(30)] = 624,
  [SMALL_STATE(31)] = 632,
  [SMALL_STATE(32)] = 643,
  [SMALL_STATE(33)] = 654,
  [SMALL_STATE(34)] = 664,
  [SMALL_STATE(35)] = 674,
  [SMALL_STATE(36)] = 682,
  [SMALL_STATE(37)] = 690,
  [SMALL_STATE(38)] = 700,
  [SMALL_STATE(39)] = 710,
  [SMALL_STATE(40)] = 720,
  [SMALL_STATE(41)] = 730,
  [SMALL_STATE(42)] = 737,
  [SMALL_STATE(43)] = 742,
  [SMALL_STATE(44)] = 749,
  [SMALL_STATE(45)] = 754,
  [SMALL_STATE(46)] = 759,
  [SMALL_STATE(47)] = 766,
  [SMALL_STATE(48)] = 773,
  [SMALL_STATE(49)] = 778,
  [SMALL_STATE(50)] = 783,
  [SMALL_STATE(51)] = 790,
  [SMALL_STATE(52)] = 797,
  [SMALL_STATE(53)] = 804,
  [SMALL_STATE(54)] = 809,
  [SMALL_STATE(55)] = 814,
  [SMALL_STATE(56)] = 818,
  [SMALL_STATE(57)] = 822,
  [SMALL_STATE(58)] = 826,
  [SMALL_STATE(59)] = 830,
  [SMALL_STATE(60)] = 834,
  [SMALL_STATE(61)] = 838,
  [SMALL_STATE(62)] = 842,
  [SMALL_STATE(63)] = 846,
  [SMALL_STATE(64)] = 850,
  [SMALL_STATE(65)] = 854,
  [SMALL_STATE(66)] = 858,
  [SMALL_STATE(67)] = 862,
  [SMALL_STATE(68)] = 866,
  [SMALL_STATE(69)] = 870,
  [SMALL_STATE(70)] = 874,
  [SMALL_STATE(71)] = 878,
  [SMALL_STATE(72)] = 882,
  [SMALL_STATE(73)] = 886,
  [SMALL_STATE(74)] = 890,
  [SMALL_STATE(75)] = 894,
  [SMALL_STATE(76)] = 898,
  [SMALL_STATE(77)] = 902,
  [SMALL_STATE(78)] = 906,
  [SMALL_STATE(79)] = 910,
  [SMALL_STATE(80)] = 914,
  [SMALL_STATE(81)] = 918,
  [SMALL_STATE(82)] = 922,
  [SMALL_STATE(83)] = 926,
  [SMALL_STATE(84)] = 930,
  [SMALL_STATE(85)] = 934,
  [SMALL_STATE(86)] = 938,
  [SMALL_STATE(87)] = 942,
  [SMALL_STATE(88)] = 946,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 2, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 3, .production_id = 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 3, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat2, 2, .production_id = 13),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat2, 2, .production_id = 13), SHIFT_REPEAT(75),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat1, 2, .production_id = 11),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat1, 2, .production_id = 11), SHIFT_REPEAT(76),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 4, .production_id = 14),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat1, 2, .production_id = 7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat3, 2, .production_id = 15),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat3, 2, .production_id = 15), SHIFT_REPEAT(41),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 3, .production_id = 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat2, 2, .production_id = 8),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter, 1, .production_id = 9),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 4, .production_id = 12),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat3, 2, .production_id = 10),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter, 3, .production_id = 9),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_content, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_html_content_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_content_repeat1, 2), SHIFT_REPEAT(68),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributes, 2, .production_id = 6),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attributes, 2, .production_id = 6), SHIFT_REPEAT(82),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_content_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_statement, 2, .production_id = 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare_statement, 2, .production_id = 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributes, 4, .production_id = 18),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributes, 5, .production_id = 19),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_repeat, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributes, 6, .production_id = 20),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_keyword, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_statement, 4, .production_id = 16),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_keyword, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare_keyword, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_statement, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 5, .production_id = 17),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2),
  [252] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
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
