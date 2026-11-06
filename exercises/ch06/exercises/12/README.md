## Exercise 6.12
下面的“素数判定”循环作为示例出现在 6.4 节中： 
``` 
for (d = 2; d < n; d++) 
  if (n % d == 0)  
    break; 
 ```
这个循环不是很高效。没有必要用 n除以 2～n-1的所有数来判断它是否为素数。事实上，只需要检查不大于 n 的平方根的除数即可。利用这一点来修改循环。提示：不要试图计算出 n 的平方根，用d*d和 n进行比较。 
## Solution
```C
for (d = 2; d * d < n; d++)
    if (n % d == 0)
        break;

if (d * d < n)
    printf("%d is divisible by %d\n", n, d);
else
    printf("%d is prime\n", n);
```

