## Exercise 6.10
说明如何用等价的 goto语句替换 continue语句。
## Solution
`goto`语句跳转到循环体最后，右花括号之前；
在`for`中`continue`不会让循环变量停止递增，而在`while/do`中可能会引起无限循环。`continue`前要对循环变量递增。


