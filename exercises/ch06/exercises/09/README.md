## Exercise 6.09
把练习题 8 中的 for语句改写为一条等价的 while语句。除了 while循环本身之外，还需要一条语句。
## Solution
```C
i = 10;
while(i >= 1) {
    printf("%d ", i++);
    i /= 2;
}
