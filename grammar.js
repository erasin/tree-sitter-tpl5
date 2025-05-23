/**
 * @file thinkphp template
 * @author erasin <erasinoo@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
  name: 'tpl5',

  // externals: $ => [
  //   $._start_tag,   // 用于扫描 { 开始符
  //   $._end_tag      // 用于扫描 } 结束符
  // ],

  extras: () => [/\s/],
  rules: {
    // 主规则：模板由混合内容组成
    source_file: $ => repeat($._node),

    _node: $ => choice(
      $.statement,  // TP5 语法结构
      $.html_content, // 普通 HTML 内容
    ),

    // 普通HTML内容
    html_content: $ => prec.right(repeat1(/[^\{]+|\{/)),

    statement: ($) => seq('{', $._statement, '}'),

    // TP5 语法结构
    _statement: $ => choice(
      $.comment_statement,
      $.const,
      $.variable_statement,
      $.function_statement,
      $.control_statement,
      $._control_keyword,
      $.default_statement,
      $.compare_statement,
      $.block_statement,
      $.extend_statement
    ),

    // 注释标签（增强版）
    comment_statement: $ => choice(
      $.line_comment,  // 单行注释
      $.block_comment    // 多行注释
    ),

    // 单行注释 {// ... }
    line_comment: $ => seq(
      '//',
      /(\\\}|[^}])*/,  // 允许转义的 } 和任意非}字符
      /}?/              // 兼容忘记闭合的情况
    ),

    // 多行注释 {/* ... */}
    block_comment: $ => seq(
      '/*',
      /[^*]*[*]+([^/*][^*]*[*]+)*/, // 复杂内容匹配
      '*/'
    ),

    // 变量标签 {$var}
    variable_statement: $ => seq(
      '$',
      // 变量链（含过滤器）
      field('name', alias($.identifier, $.variable)),
      optional(repeat(seq('.', field('property', $.identifier)))),
      repeat(seq('|', $._filter))
    ),

    // 过滤器
    _filter: $ => seq(
      field('name', alias($.identifier, $.function)),
      optional(seq('=', $.identifier))
    ),

    control_statement: $ => seq($._control_keyword, field('attributes', $._attributes)),
    _control_keyword: $ => choice($.control, $.control_repeat),
    control: $ => choice('if', 'range', 'in', 'notin', 'switch', 'case', 'defined', 'else'),
    control_repeat: $ => choice('volist', 'foreach', 'for'),

    default_statement: $ => seq(alias('default', $.return), '/'),


    // 比较标签
    compare_statement: $ => seq($.compare_keyword, field('attributes', $._attributes)),
    compare_keyword: $ => choice(
      'neq',
      'eq',
      'egt',
      'elt',
      'lt',
      'gt',
      'notempty',
      'empty',
    ),


    // 语言函数 {:__('text')}
    function_statement: $ => seq(':',
      alias($.identifier, $.function),
      '(', $._expression, ')'),

    // 常量（带 __ 包裹）
    const: $ => seq(
      '__',
      $.identifier,
      '__'
    ),

    block_statement: $ => seq(
      $.block_keyword, field('attributes', $._attributes)
    ),

    block_keyword: $ => choice('block', 'literal',),

    end_statement: $ => seq('/', choice($._control_keyword, $.compare_keyword, $.block_keyword)),

    extend_statement: $ => seq($.extend_keyword, $._attributes),
    extend_keyword: $ => choice('include', 'extend'),

    // 辅助规则
    // 
    _attributes: $ => repeat1(seq(
      field('name', alias($.identifier, $.attribute)),
      '=',
      field('value', choice($.string, $.number, $.variable_statement))
    )),

    // 共用规则
    _expression: $ => choice(
      $.identifier,
      $.string,
      $.number,
    ),
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    string: $ => choice(
      seq("'", /[^']*/, "'"),
      seq('"', /[^"]*/, '"')
    ),
    number: $ => /\d+/,
  }
});
