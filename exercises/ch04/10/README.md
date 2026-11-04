## Exercise 4.10
给出下列程序片段的输出结果。假设 i和 j都是 int型变量。
(a) 
```
i = 6;
j = i += i;
printf("%d %d", i, j);
```
(b) 
```
i = 5;
j = (i -= 2) + 1;
printf("%d %d", i, j);
```
(c) 
```
i = 7;
j = 6 + (i = 2.5);
printf("%d %d", i, j);
```
(d) 
```
i = 2; j = 8;
j = (i = 6) + (j = 3);
printf("%d %d", i, j);
```
## Solution
(a)
`12 12`
(b)
`3 4`
(c)
`2.5 8.5`
(d)
`6 9`
