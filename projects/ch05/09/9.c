#include <stdio.h>

int main(void)
{
    int y1, m1, d1, y2, m2, d2;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    int total_day1 = y1 * 365 + m1 * 30 + d1;
    int total_day2 = y2 * 365 + m2 * 30 + d2;

    if (total_day1 < total_day2)
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
                m1, d1, y1, m2, d2, y2);
    else 
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
                m2, d2, y2, m1, d1, y1);

    return 0;
}

