#include <stdio.h>

int main(void)
{
    int f1, f2, f3, f4;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &f1, &f2, &f3, &f4);

    printf("The sum is %d/%d\n", f1 * f4 + f2 * f3, f2 * f4);

    return 0;
}
