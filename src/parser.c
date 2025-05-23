#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 3
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 15

enum {
  anon_sym_LTstyle = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASHstyle_GT = 3,
  sym_css_content = 4,
  aux_sym_html_content_token1 = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_SLASH_SLASH = 8,
  aux_sym_line_comment_token1 = 9,
  aux_sym_line_comment_token2 = 10,
  anon_sym_SLASH_STAR = 11,
  aux_sym_block_comment_token1 = 12,
  anon_sym_STAR_SLASH = 13,
  anon_sym_DOLLAR = 14,
  anon_sym_DOT = 15,
  anon_sym_PIPE = 16,
  anon_sym_EQ = 17,
  anon_sym_if = 18,
  anon_sym_range = 19,
  anon_sym_in = 20,
  anon_sym_notin = 21,
  anon_sym_switch = 22,
  anon_sym_case = 23,
  anon_sym_defined = 24,
  anon_sym_else = 25,
  anon_sym_volist = 26,
  anon_sym_foreach = 27,
  anon_sym_for = 28,
  anon_sym_default = 29,
  anon_sym_SLASH = 30,
  anon_sym_neq = 31,
  anon_sym_eq = 32,
  anon_sym_egt = 33,
  anon_sym_elt = 34,
  anon_sym_lt = 35,
  anon_sym_gt = 36,
  anon_sym_notempty = 37,
  anon_sym_empty = 38,
  anon_sym_COLON = 39,
  anon_sym_LPAREN = 40,
  anon_sym_RPAREN = 41,
  anon_sym___ = 42,
  anon_sym_block = 43,
  anon_sym_literal = 44,
  anon_sym_include = 45,
  anon_sym_extend = 46,
  sym_identifier = 47,
  anon_sym_SQUOTE = 48,
  aux_sym_string_token1 = 49,
  anon_sym_DQUOTE = 50,
  aux_sym_string_token2 = 51,
  sym_number = 52,
  sym_source_file = 53,
  sym__node = 54,
  sym_style_content = 55,
  sym_html_content = 56,
  sym_statement = 57,
  sym__statement = 58,
  sym_comment_statement = 59,
  sym_line_comment = 60,
  sym_block_comment = 61,
  sym_variable_statement = 62,
  sym__filter = 63,
  sym_control_statement = 64,
  sym__control_keyword = 65,
  sym_control = 66,
  sym_control_repeat = 67,
  sym_default_statement = 68,
  sym_compare_statement = 69,
  sym_compare_keyword = 70,
  sym_function_statement = 71,
  sym_const = 72,
  sym_block_statement = 73,
  sym_block_keyword = 74,
  sym_extend_statement = 75,
  sym_extend_keyword = 76,
  aux_sym__attributes = 77,
  sym__expression = 78,
  sym_string = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_style_content_repeat1 = 81,
  aux_sym_html_content_repeat1 = 82,
  aux_sym_variable_statement_repeat1 = 83,
  aux_sym_variable_statement_repeat2 = 84,
  alias_sym_attribute = 85,
  alias_sym_function = 86,
  alias_sym_variable = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LTstyle] = "<style",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASHstyle_GT] = "</style>",
  [sym_css_content] = "css_content",
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
  [sym_style_content] = "style_content",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_style_content_repeat1] = "style_content_repeat1",
  [aux_sym_html_content_repeat1] = "html_content_repeat1",
  [aux_sym_variable_statement_repeat1] = "variable_statement_repeat1",
  [aux_sym_variable_statement_repeat2] = "variable_statement_repeat2",
  [alias_sym_attribute] = "attribute",
  [alias_sym_function] = "function",
  [alias_sym_variable] = "variable",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LTstyle] = anon_sym_LTstyle,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASHstyle_GT] = anon_sym_LT_SLASHstyle_GT,
  [sym_css_content] = sym_css_content,
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
  [sym_style_content] = sym_style_content,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_style_content_repeat1] = aux_sym_style_content_repeat1,
  [aux_sym_html_content_repeat1] = aux_sym_html_content_repeat1,
  [aux_sym_variable_statement_repeat1] = aux_sym_variable_statement_repeat1,
  [aux_sym_variable_statement_repeat2] = aux_sym_variable_statement_repeat2,
  [alias_sym_attribute] = alias_sym_attribute,
  [alias_sym_function] = alias_sym_function,
  [alias_sym_variable] = alias_sym_variable,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LTstyle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHstyle_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_css_content] = {
    .visible = true,
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
  [sym_style_content] = {
    .visible = true,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_style_content_repeat1] = {
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
  [alias_sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function] = {
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
  field_name = 2,
  field_property = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attributes] = "attributes",
  [field_name] = "name",
  [field_property] = "property",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 4},
  [2] = {.index = 4, .length = 1},
  [3] = {.index = 5, .length = 3},
  [4] = {.index = 8, .length = 2},
  [5] = {.index = 10, .length = 2},
  [6] = {.index = 12, .length = 2},
  [7] = {.index = 14, .length = 2},
  [8] = {.index = 16, .length = 1},
  [9] = {.index = 17, .length = 1},
  [10] = {.index = 18, .length = 1},
  [11] = {.index = 19, .length = 2},
  [12] = {.index = 21, .length = 3},
  [13] = {.index = 24, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [4] =
    {field_name, 1},
  [5] =
    {field_attributes, 1},
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [8] =
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [10] =
    {field_name, 0},
    {field_value, 2},
  [12] =
    {field_name, 1},
    {field_property, 2, .inherited = true},
  [14] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [16] =
    {field_property, 1},
  [17] =
    {field_name, 0},
  [18] =
    {field_name, 1, .inherited = true},
  [19] =
    {field_property, 0, .inherited = true},
    {field_property, 1, .inherited = true},
  [21] =
    {field_name, 1},
    {field_name, 3, .inherited = true},
    {field_property, 2, .inherited = true},
  [24] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [1] = alias_sym_variable,
  },
  [5] = {
    [0] = alias_sym_attribute,
  },
  [6] = {
    [1] = alias_sym_variable,
  },
  [7] = {
    [1] = alias_sym_variable,
  },
  [9] = {
    [0] = alias_sym_function,
  },
  [12] = {
    [1] = alias_sym_variable,
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
  [3] = 2,
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
  [40] = 26,
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
  [75] = 63,
  [76] = 76,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(88);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == ')') ADVANCE(149);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'g') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 'v') ADVANCE(58);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '|') ADVANCE(123);
      if (lookahead == '}') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == ')') ADVANCE(149);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '|') ADVANCE(123);
      if (lookahead == '}') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'g') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 'v') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '/') ADVANCE(112);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(119);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(120);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(102);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(92);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(150);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'q') ADVANCE(140);
      if (lookahead == 'x') ADVANCE(77);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(134);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == 'k') ADVANCE(151);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 61:
      if (lookahead == 'q') ADVANCE(139);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 82:
      if (lookahead == 'w') ADVANCE(41);
      END_STATE();
    case 83:
      if (lookahead == 'y') ADVANCE(146);
      END_STATE();
    case 84:
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 85:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 86:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 87:
      if (eof) ADVANCE(88);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LTstyle);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LTstyle);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(109);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_SLASHstyle_GT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LT_SLASHstyle_GT);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_css_content);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(102);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_css_content);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_css_content);
      if (lookahead == '>') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_css_content);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_css_content);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_css_content);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_css_content);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_css_content);
      if (lookahead == 'y') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_css_content);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_html_content_token1);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_html_content_token1);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(109);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_html_content_token1);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(109);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_html_content_token1);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_html_content_token1);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_html_content_token1);
      if (lookahead == 'y') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_html_content_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead == '}') ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_notin);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_defined);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_volist);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '/') ADVANCE(112);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_neq);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_egt);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_elt);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_lt);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_gt);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_notempty);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_literal);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 87},
  [5] = {.lex_state = 87},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 87},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 87},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 87},
  [25] = {.lex_state = 87},
  [26] = {.lex_state = 87},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 87},
  [30] = {.lex_state = 87},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 160},
  [49] = {.lex_state = 157},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 117},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 113},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LTstyle] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHstyle_GT] = ACTIONS(1),
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
    [sym_source_file] = STATE(50),
    [sym__node] = STATE(5),
    [sym_style_content] = STATE(5),
    [sym_html_content] = STATE(5),
    [sym_statement] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_html_content_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LTstyle] = ACTIONS(5),
    [aux_sym_html_content_token1] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [2] = {
    [sym__statement] = STATE(63),
    [sym_comment_statement] = STATE(63),
    [sym_line_comment] = STATE(62),
    [sym_block_comment] = STATE(62),
    [sym_variable_statement] = STATE(63),
    [sym_control_statement] = STATE(63),
    [sym__control_keyword] = STATE(32),
    [sym_control] = STATE(32),
    [sym_control_repeat] = STATE(32),
    [sym_default_statement] = STATE(63),
    [sym_compare_statement] = STATE(63),
    [sym_compare_keyword] = STATE(44),
    [sym_function_statement] = STATE(63),
    [sym_const] = STATE(63),
    [sym_block_statement] = STATE(63),
    [sym_block_keyword] = STATE(46),
    [sym_extend_statement] = STATE(63),
    [sym_extend_keyword] = STATE(45),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_in] = ACTIONS(19),
    [anon_sym_notin] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(17),
    [anon_sym_case] = ACTIONS(17),
    [anon_sym_defined] = ACTIONS(17),
    [anon_sym_else] = ACTIONS(17),
    [anon_sym_volist] = ACTIONS(21),
    [anon_sym_foreach] = ACTIONS(21),
    [anon_sym_for] = ACTIONS(23),
    [anon_sym_default] = ACTIONS(25),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(27),
    [anon_sym_egt] = ACTIONS(27),
    [anon_sym_elt] = ACTIONS(27),
    [anon_sym_lt] = ACTIONS(27),
    [anon_sym_gt] = ACTIONS(27),
    [anon_sym_notempty] = ACTIONS(27),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(29),
    [anon_sym___] = ACTIONS(31),
    [anon_sym_block] = ACTIONS(33),
    [anon_sym_literal] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_extend] = ACTIONS(35),
  },
  [3] = {
    [sym__statement] = STATE(75),
    [sym_comment_statement] = STATE(75),
    [sym_line_comment] = STATE(62),
    [sym_block_comment] = STATE(62),
    [sym_variable_statement] = STATE(75),
    [sym_control_statement] = STATE(75),
    [sym__control_keyword] = STATE(32),
    [sym_control] = STATE(32),
    [sym_control_repeat] = STATE(32),
    [sym_default_statement] = STATE(75),
    [sym_compare_statement] = STATE(75),
    [sym_compare_keyword] = STATE(44),
    [sym_function_statement] = STATE(75),
    [sym_const] = STATE(75),
    [sym_block_statement] = STATE(75),
    [sym_block_keyword] = STATE(46),
    [sym_extend_statement] = STATE(75),
    [sym_extend_keyword] = STATE(45),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_in] = ACTIONS(19),
    [anon_sym_notin] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(17),
    [anon_sym_case] = ACTIONS(17),
    [anon_sym_defined] = ACTIONS(17),
    [anon_sym_else] = ACTIONS(17),
    [anon_sym_volist] = ACTIONS(21),
    [anon_sym_foreach] = ACTIONS(21),
    [anon_sym_for] = ACTIONS(23),
    [anon_sym_default] = ACTIONS(25),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(27),
    [anon_sym_egt] = ACTIONS(27),
    [anon_sym_elt] = ACTIONS(27),
    [anon_sym_lt] = ACTIONS(27),
    [anon_sym_gt] = ACTIONS(27),
    [anon_sym_notempty] = ACTIONS(27),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(29),
    [anon_sym___] = ACTIONS(31),
    [anon_sym_block] = ACTIONS(33),
    [anon_sym_literal] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_extend] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_LTstyle,
    ACTIONS(42), 1,
      aux_sym_html_content_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      aux_sym_html_content_repeat1,
    STATE(4), 5,
      sym__node,
      sym_style_content,
      sym_html_content,
      sym_statement,
      aux_sym_source_file_repeat1,
  [23] = 6,
    ACTIONS(5), 1,
      anon_sym_LTstyle,
    ACTIONS(7), 1,
      aux_sym_html_content_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym_html_content_repeat1,
    STATE(4), 5,
      sym__node,
      sym_style_content,
      sym_html_content,
      sym_statement,
      aux_sym_source_file_repeat1,
  [46] = 5,
    ACTIONS(52), 1,
      anon_sym_DOT,
    ACTIONS(54), 1,
      anon_sym_PIPE,
    STATE(9), 1,
      aux_sym_variable_statement_repeat1,
    STATE(17), 1,
      aux_sym_variable_statement_repeat2,
    ACTIONS(50), 3,
      anon_sym_GT,
      anon_sym_RBRACE,
      sym_identifier,
  [64] = 5,
    ACTIONS(52), 1,
      anon_sym_DOT,
    ACTIONS(54), 1,
      anon_sym_PIPE,
    STATE(6), 1,
      aux_sym_variable_statement_repeat1,
    STATE(14), 1,
      aux_sym_variable_statement_repeat2,
    ACTIONS(56), 3,
      anon_sym_GT,
      anon_sym_RBRACE,
      sym_identifier,
  [82] = 5,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    STATE(33), 2,
      sym_variable_statement,
      sym_string,
  [99] = 3,
    ACTIONS(66), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_variable_statement_repeat1,
    ACTIONS(64), 4,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [112] = 4,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 2,
      sym_identifier,
      sym_number,
    STATE(69), 2,
      sym__expression,
      sym_string,
  [127] = 4,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      aux_sym_html_content_token1,
    STATE(22), 1,
      aux_sym_html_content_repeat1,
    ACTIONS(73), 2,
      anon_sym_LTstyle,
      anon_sym_LBRACE,
  [141] = 4,
    ACTIONS(77), 1,
      anon_sym_LT_SLASHstyle_GT,
    ACTIONS(79), 1,
      sym_css_content,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    STATE(18), 2,
      sym_statement,
      aux_sym_style_content_repeat1,
  [155] = 4,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LT_SLASHstyle_GT,
    ACTIONS(85), 1,
      sym_css_content,
    STATE(20), 2,
      sym_statement,
      aux_sym_style_content_repeat1,
  [169] = 3,
    ACTIONS(54), 1,
      anon_sym_PIPE,
    STATE(15), 1,
      aux_sym_variable_statement_repeat2,
    ACTIONS(87), 3,
      anon_sym_GT,
      anon_sym_RBRACE,
      sym_identifier,
  [181] = 3,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    STATE(15), 1,
      aux_sym_variable_statement_repeat2,
    ACTIONS(89), 3,
      anon_sym_GT,
      anon_sym_RBRACE,
      sym_identifier,
  [193] = 4,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      anon_sym_LT_SLASHstyle_GT,
    ACTIONS(96), 1,
      sym_css_content,
    STATE(13), 2,
      sym_statement,
      aux_sym_style_content_repeat1,
  [207] = 3,
    ACTIONS(54), 1,
      anon_sym_PIPE,
    STATE(15), 1,
      aux_sym_variable_statement_repeat2,
    ACTIONS(98), 3,
      anon_sym_GT,
      anon_sym_RBRACE,
      sym_identifier,
  [219] = 4,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_css_content,
    ACTIONS(100), 1,
      anon_sym_LT_SLASHstyle_GT,
    STATE(20), 2,
      sym_statement,
      aux_sym_style_content_repeat1,
  [233] = 2,
    ACTIONS(104), 1,
      anon_sym_EQ,
    ACTIONS(102), 4,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [243] = 4,
    ACTIONS(106), 1,
      anon_sym_LT_SLASHstyle_GT,
    ACTIONS(108), 1,
      sym_css_content,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    STATE(20), 2,
      sym_statement,
      aux_sym_style_content_repeat1,
  [257] = 1,
    ACTIONS(114), 5,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_identifier,
  [265] = 4,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      aux_sym_html_content_token1,
    STATE(22), 1,
      aux_sym_html_content_repeat1,
    ACTIONS(118), 2,
      anon_sym_LTstyle,
      anon_sym_LBRACE,
  [279] = 1,
    ACTIONS(123), 4,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
  [286] = 2,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 3,
      anon_sym_LTstyle,
      aux_sym_html_content_token1,
      anon_sym_LBRACE,
  [295] = 2,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 3,
      anon_sym_LTstyle,
      aux_sym_html_content_token1,
      anon_sym_LBRACE,
  [304] = 2,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 3,
      anon_sym_LTstyle,
      aux_sym_html_content_token1,
      anon_sym_LBRACE,
  [313] = 1,
    ACTIONS(137), 4,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [320] = 3,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym__attributes,
    ACTIONS(139), 2,
      anon_sym_GT,
      anon_sym_RBRACE,
  [331] = 2,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 3,
      anon_sym_LTstyle,
      aux_sym_html_content_token1,
      anon_sym_LBRACE,
  [340] = 2,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 3,
      anon_sym_LTstyle,
      aux_sym_html_content_token1,
      anon_sym_LBRACE,
  [349] = 1,
    ACTIONS(152), 4,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [356] = 3,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(36), 1,
      aux_sym__attributes,
  [366] = 1,
    ACTIONS(158), 3,
      anon_sym_GT,
      anon_sym_RBRACE,
      sym_identifier,
  [372] = 3,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_GT,
    STATE(35), 1,
      aux_sym__attributes,
  [382] = 3,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_GT,
    STATE(28), 1,
      aux_sym__attributes,
  [392] = 3,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym__attributes,
  [402] = 3,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym__attributes,
  [412] = 3,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym__attributes,
  [422] = 3,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym__attributes,
  [432] = 1,
    ACTIONS(135), 3,
      anon_sym_LT_SLASHstyle_GT,
      sym_css_content,
      anon_sym_LBRACE,
  [438] = 1,
    ACTIONS(172), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [443] = 1,
    ACTIONS(174), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [448] = 2,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(31), 1,
      sym__filter,
  [455] = 2,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(37), 1,
      aux_sym__attributes,
  [462] = 2,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(39), 1,
      aux_sym__attributes,
  [469] = 2,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(38), 1,
      aux_sym__attributes,
  [476] = 1,
    ACTIONS(178), 1,
      sym_identifier,
  [480] = 1,
    ACTIONS(180), 1,
      aux_sym_string_token2,
  [484] = 1,
    ACTIONS(182), 1,
      aux_sym_string_token1,
  [488] = 1,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
  [492] = 1,
    ACTIONS(186), 1,
      anon_sym___,
  [496] = 1,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
  [500] = 1,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
  [504] = 1,
    ACTIONS(192), 1,
      sym_identifier,
  [508] = 1,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
  [512] = 1,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
  [516] = 1,
    ACTIONS(198), 1,
      anon_sym_STAR_SLASH,
  [520] = 1,
    ACTIONS(200), 1,
      aux_sym_line_comment_token2,
  [524] = 1,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
  [528] = 1,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
  [532] = 1,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
  [536] = 1,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
  [540] = 1,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
  [544] = 1,
    ACTIONS(210), 1,
      sym_identifier,
  [548] = 1,
    ACTIONS(212), 1,
      sym_identifier,
  [552] = 1,
    ACTIONS(214), 1,
      sym_identifier,
  [556] = 1,
    ACTIONS(216), 1,
      sym_identifier,
  [560] = 1,
    ACTIONS(218), 1,
      anon_sym_SLASH,
  [564] = 1,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
  [568] = 1,
    ACTIONS(222), 1,
      sym_identifier,
  [572] = 1,
    ACTIONS(224), 1,
      sym_identifier,
  [576] = 1,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
  [580] = 1,
    ACTIONS(228), 1,
      aux_sym_block_comment_token1,
  [584] = 1,
    ACTIONS(230), 1,
      aux_sym_line_comment_token1,
  [588] = 1,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
  [592] = 1,
    ACTIONS(234), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 23,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 64,
  [SMALL_STATE(8)] = 82,
  [SMALL_STATE(9)] = 99,
  [SMALL_STATE(10)] = 112,
  [SMALL_STATE(11)] = 127,
  [SMALL_STATE(12)] = 141,
  [SMALL_STATE(13)] = 155,
  [SMALL_STATE(14)] = 169,
  [SMALL_STATE(15)] = 181,
  [SMALL_STATE(16)] = 193,
  [SMALL_STATE(17)] = 207,
  [SMALL_STATE(18)] = 219,
  [SMALL_STATE(19)] = 233,
  [SMALL_STATE(20)] = 243,
  [SMALL_STATE(21)] = 257,
  [SMALL_STATE(22)] = 265,
  [SMALL_STATE(23)] = 279,
  [SMALL_STATE(24)] = 286,
  [SMALL_STATE(25)] = 295,
  [SMALL_STATE(26)] = 304,
  [SMALL_STATE(27)] = 313,
  [SMALL_STATE(28)] = 320,
  [SMALL_STATE(29)] = 331,
  [SMALL_STATE(30)] = 340,
  [SMALL_STATE(31)] = 349,
  [SMALL_STATE(32)] = 356,
  [SMALL_STATE(33)] = 366,
  [SMALL_STATE(34)] = 372,
  [SMALL_STATE(35)] = 382,
  [SMALL_STATE(36)] = 392,
  [SMALL_STATE(37)] = 402,
  [SMALL_STATE(38)] = 412,
  [SMALL_STATE(39)] = 422,
  [SMALL_STATE(40)] = 432,
  [SMALL_STATE(41)] = 438,
  [SMALL_STATE(42)] = 443,
  [SMALL_STATE(43)] = 448,
  [SMALL_STATE(44)] = 455,
  [SMALL_STATE(45)] = 462,
  [SMALL_STATE(46)] = 469,
  [SMALL_STATE(47)] = 476,
  [SMALL_STATE(48)] = 480,
  [SMALL_STATE(49)] = 484,
  [SMALL_STATE(50)] = 488,
  [SMALL_STATE(51)] = 492,
  [SMALL_STATE(52)] = 496,
  [SMALL_STATE(53)] = 500,
  [SMALL_STATE(54)] = 504,
  [SMALL_STATE(55)] = 508,
  [SMALL_STATE(56)] = 512,
  [SMALL_STATE(57)] = 516,
  [SMALL_STATE(58)] = 520,
  [SMALL_STATE(59)] = 524,
  [SMALL_STATE(60)] = 528,
  [SMALL_STATE(61)] = 532,
  [SMALL_STATE(62)] = 536,
  [SMALL_STATE(63)] = 540,
  [SMALL_STATE(64)] = 544,
  [SMALL_STATE(65)] = 548,
  [SMALL_STATE(66)] = 552,
  [SMALL_STATE(67)] = 556,
  [SMALL_STATE(68)] = 560,
  [SMALL_STATE(69)] = 564,
  [SMALL_STATE(70)] = 568,
  [SMALL_STATE(71)] = 572,
  [SMALL_STATE(72)] = 576,
  [SMALL_STATE(73)] = 580,
  [SMALL_STATE(74)] = 584,
  [SMALL_STATE(75)] = 588,
  [SMALL_STATE(76)] = 592,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 3, .production_id = 6),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 2, .production_id = 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat1, 2, .production_id = 11),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat1, 2, .production_id = 11), SHIFT_REPEAT(54),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_content, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_content, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 3, .production_id = 7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat2, 2, .production_id = 13),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat2, 2, .production_id = 13), SHIFT_REPEAT(43),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 4, .production_id = 12),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter, 1, .production_id = 9),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_style_content_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_style_content_repeat1, 2), SHIFT_REPEAT(20),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_style_content_repeat1, 2), SHIFT_REPEAT(3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat1, 2, .production_id = 8),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_html_content_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_content_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_content_repeat1, 2), SHIFT_REPEAT(22),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_content, 4, .production_id = 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_content, 4, .production_id = 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_content, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_content, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter, 3, .production_id = 9),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributes, 2, .production_id = 1),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attributes, 2, .production_id = 1), SHIFT_REPEAT(76),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_content, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_content, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_content, 5, .production_id = 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_content, 5, .production_id = 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_statement_repeat2, 2, .production_id = 10),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributes, 3, .production_id = 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_statement, 2, .production_id = 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare_statement, 2, .production_id = 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2, .production_id = 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_statement, 2, .production_id = 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_repeat, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_keyword, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [184] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_statement, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_keyword, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare_keyword, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 5, .production_id = 14),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
