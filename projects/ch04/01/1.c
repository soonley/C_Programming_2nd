#include <stdio.h>

int main(void)
{
    int first, second;
    int number;
    printf("Enter a two-digit number: ");
    scanf("%2d", &number);

    first = number / 10;
    second = number % 10;

    printf("The reversal is: %d%d", second, first);

    return 0;
}
