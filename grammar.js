/**
 * @file thinkphp template
 * @author erasin <erasinoo@gmail.com>
 * @license MIT
 */


const WS = /\p{Zs}+/u;
const NL = token(choice("\n", "\r", "\r\n", "\0"));
const LINE_TAIL = token(seq(/.*/, NL));
const REGEX_NAME = /[a-zA-Z_\x7f-\xff][a-zA-Z0-9_\x7f-\xff]*/;

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
  name: 'tpl5',

  // externals: $ => [
  //   $._start_tag,   // 用于扫描 { 开始符
  //   $._end_tag      // 用于扫描 } 结束符
  // ],

  extras: $ => [], // 不忽略任何空白符
  rules: {
    // 主规则：模板由混合内容组成
    source_file: $ => repeat($._node),

    _node: $ => choice(
      $.statement,  // TP5 语法结构
      $.html_content, // 普通 HTML 内容
    ),

    // 普通HTML内容
    html_content: _ => prec.right(repeat1(seq(/[^\{]+|\{/, NL))),

    statement: $ => seq('{', $._statement, '}'),

    // TP5 语法结构
    _statement: $ => choice(
      $.const,
      $.comment_statement,
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
    line_comment: $ => seq('//', LINE_TAIL),

    // 多行注释 {/* ... */}
    block_comment: _ =>
      seq(
        '/','*',
        /[^*]*[*]+([^/*][^*]*[*]+)*/, // 复杂内容匹配
        '*','/'
      ),

    // 变量标签 {$var}
    variable_statement: $ => seq('$' ,
      field('name', alias($.identifier, $.variable)),
      optional(
        choice(
          repeat(seq(choice("."), field('property', alias($.identifier,$.property)))),
          repeat(seq(choice("->"), field('method', alias($.identifier,$.function))))
        )
      ),
      optional(repeat(seq('|', $._filter)))
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
    end_statement: $ => seq('/', choice($._control_keyword, $.compare_keyword, $.block_keyword)),
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
    function_statement: $ => prec.right(
      seq(':',
         choice(
          alias($.identifier, $.function),
          $.variable_statement,
        ),
        '(', $._expression, ')')
    ),

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

    extend_statement: $ => seq($.extend_keyword, $._attributes, WS, "/"),
    extend_keyword: $ => choice('include', 'extend'),

    // 辅助规则
    // 
    _attributes: $ => repeat1(seq(
      WS,
      field('name', alias($.identifier, $.attribute)),
      optional(WS), '=', optional(WS),
      field('value', $._expression)
    )),

    // 共用规则
    _expression: $ => choice(
      $.literal,
      $.identifier,
    ),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    _name: _ => REGEX_NAME,
    string: $ => choice(
      seq("'", $._string_inclue, "'"),
      seq('"', $._string_inclue, '"')
    ),
    _string_inclue: $ => choice(
      $.variable_statement,
      $.identifier,
      $.literal,
      $.operator,
      $.comparison_operator,
      WS
    ),
    
    // 比较运算符
    comparison_operator: $ => choice('==', '!=', '>', '<'),
    // 逻辑运算符
    operator: $ => choice('AND', 'OR' ,'/','\\','(',')'),

    literal: $ => choice($.number, $.boolean, $.string),
    number: $ => choice($.integer, $.float),
    integer: _ => /\d+/,
    float: _ => /\d+\.\d+/,
    boolean: _ => choice('true', 'false'),    
  }
});

