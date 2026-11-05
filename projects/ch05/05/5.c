#include <stdio.h>

int main(void)
{
    int incoming;
    printf("Enter your incoming: ");
    scanf("%d", &incoming);

    float tax;

    if (incoming < 750)
        tax = 750 * 0.01f;
    else if (incoming < 2250)
        tax = 7.50f + (incoming - 750) * 0.02f;
    else if (incoming < 3750)
        tax = 37.5f + (incoming - 2250) * 0.03f;
    else if (incoming < 5250)
        tax = 82.5 + (incoming - 3750) * 0.04f;
    else if (incoming < 7000)
        tax = 142.5 + (incoming - 5250) * 0.05f;
    else
        tax = 230 + (incoming - 7000) * 0.06f;

    printf("Tax: %.2f\n", tax);

    return 0;
}
