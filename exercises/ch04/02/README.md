## Exercise 4.02
如果 i和 j都是正整数，(-i) / j的值和-(i / j)的值是否总一样？验证你的答案。
## Solution
在C99中测试，两个表达式的结果一致。
> Not in C89. Suppose that `i` is `9` and `j` is `7`. The value of `(-i)/j` could be either `–1` or `–2`, depending on the implementation. On the other hand, the value of `-(i/j)` is always `–1`, regardless of the implementation. In C99, on the other hand, the value of `(-i)/j` must be equal to the value of `-(i/j)`. 
