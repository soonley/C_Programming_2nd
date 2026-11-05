## Exercise 5.10
下面的代码片段的输出结果是什么？（假设 i是整型变量。）
```
i = 1;
switch (i % 3) {
  case 0: printf("zero");
  case 1: printf("one");
  case 2: printf("two");
}
```
## Solution
`onetwo`
由于`case`子句后面没有跟`break`.
