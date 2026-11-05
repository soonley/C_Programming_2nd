## Exercise 5.08
下面的 if语句不需要这么复杂，请尽可能地加以简化。
```
if (age >= 13)
  if (age <= 19)
    teenager = true;
  else
    teenager = false;
else if (age < 13)
 teenager = false;
```
## Solution
```C
if (age >= 13 && age <= 19)
    teenager = true;
else
    teenager = false;
```
