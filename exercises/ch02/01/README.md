## Exercise 2.01
建立并运行由 Kernighan 和 Ritchie 编写的著名的“hello, world”程序： 
```c
#include <stdio.h> 

int main(void) 
{ 
  printf("hello, world\n"); 
}
``` 
在编译时是否有警告信息？如果有，需要如何修改呢？
## Solution
源文件：`1.c`
使用`gcc -Wall -pedantic -o 1 1.c`执行编译过程中，没有出现警告信息。
