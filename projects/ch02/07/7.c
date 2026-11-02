#include <stdio.h>

int main(void)
{
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int per_20 = amount / 20;
    int remaining = amount - per_20 * 20;
    int per_10 = remaining / 10;
    remaining -= per_10 * 10;
    int per_5 = remaining / 5;
    remaining -= per_5 * 5;
    
    printf("$20 bills: %d\n", per_20);
    printf("$10 bills: %d\n", per_10);
    printf("$5 bills: %d\n", per_5);
    printf("$1 bills: %d\n", remaining);

    return 0;
}

