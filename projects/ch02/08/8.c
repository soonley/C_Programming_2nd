#include <stdio.h>

int main(void)
{
    double loan, rate, payment;
    
    printf("Enter amount of loan: ");
    scanf("%lf", &loan);
    printf("Enter interest rate: ");
    scanf("%lf", &rate);
    printf("Enter monthly payment: ");
    scanf("%lf", &payment);

    double remaining;
    double m_rate = (rate / 100.0) / 12.0;
    loan = loan - payment + loan * m_rate;
    printf("Balance remaining after first payment: $%.2f\n", loan);
    
    loan = loan - payment + loan * m_rate;
    printf("Balance remaining after second payment: $%.2f\n", loan);

    loan = loan - payment + loan * m_rate;
    printf("Balance remaining after third payment: $%.2f\n", loan);

    return 0;
}
