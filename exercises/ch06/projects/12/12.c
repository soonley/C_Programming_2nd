#include <stdio.h>

int main(void)
{
    float e = 1.0f;
    int n;
    printf("Enter integer n: ");
    scanf("%d", &n);
    printf("Enter epsilon: ");
    float epsilon;
    scanf("%f", &epsilon);
    float term = 0.0f;
    int d = 1;
    for (int i = 1; term > epsilon; i++) {
        term = 1.0f / (d*=i);
        e += term;
    }

    printf("Approximation of e: %f\n", e);

    return 0;
}
