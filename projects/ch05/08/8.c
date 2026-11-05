#include <stdio.h>

int main(void)
{
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    int total_minutes = hour * 60 + minute;

    int m1, m2, m3, m4, m5, m6, m7, m8;
    m1 = 8 * 60;
    m2 = 9 * 60 + 43;
    m3 = 11 * 60 + 19;
    m4 = 12 * 60 + 47;
    m5 = 14 * 60;
    m6 = 15 * 60 + 45;
    m7 = 19 * 60;
    m8 = 21 * 60 + 45;

    if (total_minutes < (m1 + (m2 - m1) / 2))
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    else if (total_minutes < (m2 + (m3 - m2) / 2))
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    else if (total_minutes < (m3 + (m4 - m3) / 2))
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    else if (total_minutes < (m4 + (m5 - m4) / 2))
        printf("Closest departure time is 12:47 p.m., arriving at 3:00  p.m.\n");
    else if (total_minutes < (m5 + (m6 - m5) / 2))
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    else if (total_minutes < (m6 + (m7 - m6) / 2))
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    else if (total_minutes < (m7 + (m8 - m7) / 2))
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    else
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}

