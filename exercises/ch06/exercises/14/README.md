## Exercise 6.14
找出下面程序片段中的错误并修正。 
``` 
if (n % 2 == 0); 
  printf("n is even\n");
```
## Solution
`if`条件表达式后面多了`;`导致`if`跟着空语句
