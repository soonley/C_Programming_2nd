#include <stdio.h>

int main(void)
{
    int y, m, d, min_y, min_m, min_d;
    
    printf("Enter date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m, &d, &y);
    min_y = y;
    min_m = m;
    min_d = d;

    while(m != 0 && d !=0 && y != 0) {
        if (min_y > y || (min_y == y && min_m > m)
                || (min_y == y && min_m == m && min_d > d)) {
            min_y = y;
            min_m = m;
            min_d = d;
        }

        printf("Enter date (mm/dd/yy): ");
        scanf("%d/%d/%d", &m, &d, &y);
    }
        printf("%.2d/%.2d/%.2d is earliest\n",
                min_m, min_d, min_y);

    return 0;
}

