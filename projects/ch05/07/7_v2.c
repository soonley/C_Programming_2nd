// from williamgherman

#include <stdio.h>

int main(void)
{
    int d1, d2, d3, d4, max1, min1, max2, min2;
    printf("Enter four integers: ");
    scanf("%d%d%d%d", &d1, &d2, &d3, &d4);
    int max, min;

    if (d1 < d2) {
        max1 = d2;
        min1 = d1;
    } else {
        max1 = d1;
        min1 = d2;
    }
    if (d3 < d4) {
        max2 = d4;
        min2 = d3;
    } else {
        max2 = d3;
        min2 = d4;
    }

    if (max1 < max2)
        max = max2;
    else
        max = max1;
    if (min1 < min2)
        min = min1;
    else
        min = min2;

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}

