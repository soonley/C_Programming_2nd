#include <stdio.h>
#define TAX 5 

int main(void)
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("With tax added: $%f\n", 
            amount * (1 + TAX / 100.0));

    return 0;
}

