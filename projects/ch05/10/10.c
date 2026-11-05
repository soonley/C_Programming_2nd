#include <stdio.h>

int main(void)
{
    int grade;
    char rank;
    printf("Enter numberical grade: ");
    scanf("%d", &grade);


    switch (grade / 10) {
        case 10:
        case 9:
            rank = 'A';
            break;
        case 8:
            rank = 'B';
            break;
        case 7:
            rank = 'C';
            break;
        case 6:
            rank = 'D';
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            rank = 'F';
            break;
    }
    if (grade <= 100 && grade >= 0)
        printf("Letter grade: %c\n", rank);
    else
        printf("Invalid grade!\n");

    return 0;
}
