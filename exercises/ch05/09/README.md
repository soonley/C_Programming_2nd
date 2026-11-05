## Exercise 5.09
下面两个 if语句是否等价？如果不等价，为什么？
```C
if (score >= 90)        if (score < 60)
 printf("A");               printf("F");
else if (score >= 80)   else if (score < 70)
 printf("B");               printf("D");
else if (score >= 70)   else if (score < 80)
 printf("C");               printf("C");
else if (score >= 60)   else if (score < 90)
 printf("D");               printf("B");
else                    else
 printf("F");               printf("A");
```
## Solution
两个if语句完全等价


