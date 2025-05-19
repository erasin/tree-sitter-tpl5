/**
 * @file thinkphp template
 * @author erasin <erasinoo@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
  name: 'tpl5',

  extras: $ => [
    /\s+/,
    $.comment,
  ],

  rules: {
    source_file: $ => repeat($._element),

    _element: $ => choice(
      $.comment,
      $.text,
      $.tpl_tag,
      $.tpl_output,
      $.tpl_directive
    ),

    comment: $ => token(seq('{*', /[^*]*\*+([^/*][^*]*\*+)*/, '}')),

    text: $ => token(/[^{}]+/),

    tpl_tag: $ => choice(
      $.tpl_if,
      $.tpl_elseif,
      $.tpl_else,
      $.tpl_endif,
      $.tpl_compare,
      $.tpl_volist,
      $.tpl_foreach,
      $.tpl_switch,
      $.tpl_case,
      $.tpl_endswitch,
      $.tpl_default,
      $.tpl_include
    ),
    tpl_output: $ => seq(
      choice('{$', '{:', '{='),
      field('expr', $.expression),
      '}'
    ),
    tpl_directive: $ => seq('{', /[a-zA-Z_][\w]*\s+/, $.expression, '}'),

    // IF 结构
    tpl_if: $ => seq('{if', field('cond', $.expression), '}'),
    tpl_else: $ => '{else}',
    tpl_elseif: $ => seq('{elseif', field('cond', $.expression), '}'),
    tpl_endif: $ => '{/if}',

    // 比较标签
    tpl_compare: $ => seq('{compare', field('args', $.expression), '}'),

    // 循环结构
    tpl_volist: $ => seq('{volist', field('args', $.expression), '}'),
    tpl_foreach: $ => seq('{foreach', field('args', $.expression), '}'),
    tpl_default: $ => seq('{default', field('args', $.expression), '}'),

    // SWITCH 结构
    tpl_switch: $ => seq('{switch', field('expr', $.expression), '}'),
    tpl_case: $ => seq('{case', field('expr', $.expression), '}'),
    tpl_endswitch: $ => '{/switch}',

    // 包含模板
    tpl_include: $ => seq('{include', field('args', $.expression), '/}'),

    // 通用表达式 (变量、函数调用、字面量、管道)
    expression: $ => choice(
      $.variable,
      $.function_call,
      seq($.variable, '|', $.function_call),
      /[^{}]+?/
    ),

    variable: $ => token(choice(
      /\$[a-zA-Z_]\w*(?:\.[a-zA-Z_]\w*)*/,
      /__(?:ROOT|MODULE|ACTION|URL|PUBLIC)__/
    )),

    function_call: $ => seq(
      /[a-zA-Z_]\w*/,
      '(',
      optional(seq($.expression, repeat(seq(',', $.expression)))),
      ')'
    ),
  }
});
