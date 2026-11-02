## Exercise 2.10
在 dweight.c 程序（2.4 节）中，哪些空格是必不可少的？
## Solution
```C
/* Computes the dimensional weight of a 12" x 10" x 8" box */ 
 
#include <stdio.h> 
 
int main(void) 
{ 
  int height, length, width, volume, weight; 
  height = 8; 
  length = 12; 
  width = 10; 
  volume = height * length * width; 
  weight = (volume + 165) / 166; 
  printf("Dimensions: %dx%dx%d\n", length, width, height); 
  printf("Volume (cubic inches): %d\n", volume); 
  printf("Dimensional weight (pounds): %d\n", weight); 
// 保留，隔开逻辑代码 
  return 0; 
} 
```
`#include`directive的后面的换行符和`#include`和`<stdio.h>`之间的空格，还有`return`和`0`之间的空格

