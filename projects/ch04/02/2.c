#include <stdio.h>

int main(void)
{
    int number;
    int first, second, third;
    printf("Enter a three-digit number: ");
    scanf("%3d", &number);

    first = number / 100;
    second = (number / 10) % 10;
    third = number % 10;
    printf("The reversal is: %d%d%d\n", third, second, first);

    return 0;
}
