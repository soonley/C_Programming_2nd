## Exercise 5.06
下面的 if语句在 C 语言中是否合法？
```
if (n == 1 - 10)
  printf("n is between 1 and 10\n");
```
 如果合法，那么当 n等于 5 时会发生什么？
## Solution
合法,但是`printf`不会被调用, `if`的表达式实际条件表达式为`n == -9`
