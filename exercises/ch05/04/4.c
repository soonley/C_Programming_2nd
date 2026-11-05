#include <stdio.h>
int main(void)
{
    int i, j;
    i = j = 2;
    printf("%d\n", (i > j) - (i < j));
    i = 3, j = 2;
    printf("%d\n", (i > j) - (i < j));
    i = 2, j = 3; 
    printf("%d\n", (i > j) - (i < j));

    printf("%d\n", (i == j) ? 0 : ((i > j) ? 1 : -1));

    return 0;
}
