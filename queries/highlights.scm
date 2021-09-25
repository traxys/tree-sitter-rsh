[
"let"
"cmd"
"in"
] @keyword

";" @punctuation.delimiter
"[" @punctuation.bracket
"]" @punctuation.bracket

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
