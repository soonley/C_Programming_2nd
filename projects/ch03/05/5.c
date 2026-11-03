#include <stdio.h>

int main(void)
{
    int c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16;
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &c10, &c11, &c12, &c13, &c14, &c15, &c16);

    printf("%d %d %d %d\n", c1, c2, c3, c4);
    printf("%d %d %d %d\n", c5, c6, c7, c8);
    printf("%d %d %d %d\n", c9, c10, c11, c12);
    printf("%d %d %d %d\n", c13, c14, c15, c16);

    int r1 = c1 + c2 + c3 + c4;
    int r2 = c5 + c6 + c7 + c8;
    int r3 = c9 + c10 + c11 + c12;
    int r4 = c13 + c14 + c15 + c16;
    int c_sum1 = c1 + c5 + c9 + c13;
    int c_sum2 = c2 + c6 + c10 + c14;
    int c_sum3 = c1 + c5 + c9 + c13;
    int c_sum4 = c1 + c5 + c9 + c13;
    int d_sum1 = c1 + c6 + c11 + c16;
    int d_sum2 = c4 + c7 + c10 + c13;
    printf("Row sums: %d %d %d %d\n", r1, r2, r3, r4);
    printf("Columns sums: %d %d %d %d\n", c_sum1, c_sum2, c_sum3, c_sum4);
    printf("Diagonal sums: %d %d\n", d_sum1, d_sum2);

    return 0;
}
