#include <stdio.h>

int main(void)
{
    unsigned gs1, group, publisher, number, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &number, &check);

    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", number);
    printf("Check digit: %d\n", check);

    return 0;
}
