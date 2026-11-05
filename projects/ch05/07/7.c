#include <stdio.h>

int main(void)
{
    int d1, d2, d3, d4;
    printf("Enter four integers: ");
    scanf("%d%d%d%d", &d1, &d2, &d3, &d4);
    int max = d1, min = d1;

    if (d2 > max) max = d2;
    if (d2 < min) min = d2;
    if (d3 > max) max = d3;
    if (d3 < min) min = d3;
    if (d4 > max) max = d4;
    if (d4 < min) min = d4;

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}

