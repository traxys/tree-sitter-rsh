[
"let"
"cmd"
"in"
"capture"
] @keyword

";" @punctuation.delimiter
"[" @punctuation.bracket
"]" @punctuation.bracket
"(" @punctuation.bracket
")" @punctuation.bracket
"}" @punctuation.bracket
"{" @punctuation.bracket

[
  "&&"
  ">"
  ">>"
  "<"
  "|"
] @operator

(comment) @comment
(istr) @string
(str) @string
(int) @constant.builtin
(capture (identifier) @local.reference)
(var_def (identifier) @local.definition)
