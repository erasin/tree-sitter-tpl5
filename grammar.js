/**
 * @file thinkphp template
 * @author erasin <erasinoo@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
  name: 'tpl5',

  externals: $ => [
    $._start_tag,   // 用于扫描 { 开始符
    $._end_tag      // 用于扫描 } 结束符
  ],

  rules: {
    // 主规则：模板由混合内容组成
    source_file: $ => repeat($._node),

    _node: $ => choice(
      $.tp_content,  // TP5 语法结构
      $.html_content // 普通 HTML 内容
    ),

    // HTML 内容（作为原始文本处理）
    html_content: $ => /[^{]+/,

    // TP5 语法结构
    tp_content: $ => choice(
      $.comment_tag,
      $.variable_tag,
      $.literal_tag,
      $.function_tag,
      $.control_tag,
      $.compare_tag,
      $.defined_tag,
      $.include_tag,
      $.extend_tag
    ),

    // 注释标签（增强版）
    comment_tag: $ => choice(
      $.single_line_comment,  // 单行注释
      $.multi_line_comment    // 多行注释
    ),

    // 单行注释 {// ... }
    single_line_comment: $ => seq(
      '{//',
      /(\\\}|[^}])*/,  // 允许转义的 } 和任意非}字符
      /}?/              // 兼容忘记闭合的情况
    ),

    // 多行注释 {/* ... */}
    multi_line_comment: $ => seq(
      '{/*',
      /[^*]*[*]+([^/*][^*]*[*]+)*/, // 复杂内容匹配
      '*/}'
    ),

    // 变量标签 {$var}
    variable_tag: $ => seq(
      '{', $._start_tag,
      field('content', choice(
        $.variable_chain,     // 变量路径
        $.system_variable,    // 系统变量
        $.const         // Think 常量
      )),
      '}', $._end_tag
    ),

    // 变量链（含过滤器）
    variable_chain: $ => seq(
      field('base', $.identifier),
      optional(seq('.', field('property', $.identifier))),
      repeat(seq('|', $.filter))
    ),

    // 过滤器
    filter: $ => seq(
      field('function_call', $.identifier),
      optional(seq('=', $.identifier))
    ),

    // 系统变量 {$Think.var}
    system_variable: $ => seq(
      'Think.',
      choice('server', 'session', 'cookie', 'get', 'post', 'request', 'const'),'.', $.identifier),

    literal_tag: $ => seq(
      '{literal}', $._node, '{/literal}'
    ),

    // 控制结构（完整实现示例）
    control_tag: $ => choice(
      $._control_tag,
      $.switch_tag,
    ),

    // if 标签结构
    if_tag: $ => seq(
      '{','if', field('params', $.tag_parameters), '}',
      field('content', repeat($._node)),
      "{/if}"
    ),
    _control_tag: $ => seq(
      '{',$.control_keyword, field('params', $.compare_params), '}',
      field('content', repeat($._node)),
      '{/',$.control_keyword, '}'
    ),
    control_keyword:$ => choice('if','volist','range','in','notin'),
    else_tag: $ => seq('{','else','}'),
    switch_tag: $ => seq(
      '{','switch', field('params', $.compare_params), '}',
      field('content', repeat($._node)),
      optional($.default_tag),
      '{/switch}'
    ),
    default_tag: $ => seq('{','default',' /}',$._node),

    // 比较标签
    compare_tag: $ => seq(
      '{',$.keyword, field('params', $.compare_params), '}',
      field('content', repeat($._node)),
      '{/',$.keyword, '}'
    ),
    keyword:$ => choice(
      'eq',
      'neq',
      'gt',
      'lt',
      'egt',
      'elt',
      'empty',
      'notempty'
      ),

    // 语言函数 {:__('text')}
    function_tag: $ => seq(
      '{:',
      seq(field('function', $.identifier),'(',$._node,')'),
      '}'
    ),

    // 常量（带 __ 包裹）
    const: $ => seq(
      '__',
      field('name', $.identifier),
      '__'
    ),

    defined_tag: $ => seq(
      '{','defined', $.tag_parameters, '}',
      field('content', repeat($._node)),
      '{/defined}'
    ),

    block_tag: $ => seq(
      '{,','block', $.tag_parameters, '}',
      field('content', repeat($._node)),
      '{/block}'
    ),

    include_tag: $ => seq('{','include', $.tag_parameters, '/}'),
    extend_tag: $ => seq('{','extend', $.tag_parameters, '/}'),

    // 辅助规则
    tag_parameters: $ => repeat1(seq(
      field('name', $.identifier),
      '=',
      field('value', choice($.string, $.number, $.variable_ref))
    )),
    compare_params: $ => seq(
      'name=', field('var', $.variable_ref),
      'value=', field('value', choice($.string, $.number, $.variable_ref))
    ),
    variable_ref: $ => seq('$', $.identifier),
    // 共用规则
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    string: $ => choice(
      seq("'", /[^']*/, "'"),
      seq('"', /[^"]*/, '"')
    ),
    number: $ => /\d+/,
  }
});
