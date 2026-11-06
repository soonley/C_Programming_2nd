## Exercise 6.13
重写下面的循环，使其循环体为空。 
 for (n = 0; m > 0; n++) 
    m /= 2;
## Solution
```C
for (n = 0; m > 0; m /= 2, n++) {}
```
