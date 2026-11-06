#include <stdio.h>

int main(void)
{
    double loan, rate, payment;
    int number; 
    printf("Enter amount of loan: ");
    scanf("%lf", &loan);
    printf("Enter interest rate: ");
    scanf("%lf", &rate);
    printf("Enter monthly payment: ");
    scanf("%lf", &payment);
    printf("Enter the number of payments: ");
    scanf("%d", &number);

    
    double m_rate = (rate / 100.0) / 12.0;
    for(int i = 0; i < number; i++) {
        loan = loan - payment + loan * m_rate;
        printf("Balance remaining after payment: $%.2f\n", loan);
    }

    return 0;
}
