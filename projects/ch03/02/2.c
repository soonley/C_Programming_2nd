#include <stdio.h>

int main(void)
{
    int number;
    float price;
    int year, month, day;

    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date(mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit Price\t\tPurchase Date\n");
    printf("%-d\t\t$%7.2f\t\t%d/%d/%d\n", number, price, month, day, year);

    return 0;
}
