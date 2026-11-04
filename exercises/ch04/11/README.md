## Exercise 4.11
 给出下列程序片段的输出结果。假设 i、j和 k都是 int型变量。
 (a) 
 ```
 i = 1;
 printf("%d ", i++ - 1);
 printf("%d", i);
 ```
 (b) 
 ```
 i = 10; j = 5;
 printf("%d ", i++ - ++j);
 printf("%d %d", i, j);
 ```
 (c) 
 ```
 i = 7; j = 8;
 printf("%d ", i++ - --j);
 printf("%d %d", i, j);
 ```
 (d) 
 ```
 i = 3; j = 4; k = 5;
 printf("%d ", i++ - j++ + --k);
 printf("%d %d %d", i, j, k);
 ```
## Solution
(a) 
```
0 1
```
(b)
```
4 11 6
```
(c)
```
0 8 7
```
(d)
```
3 4 5 4
```
