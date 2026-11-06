#include <stdio.h>

int main(void)
{
    float e = 1.0f;
    int n;
    printf("Enter integer n: ");
    scanf("%d", &n);
    int d = 1;
    for (int i = 1; i <=n; i++) {
        e += 1.0f / (d*=i);
    }

    printf("Approximation of e: %f\n", e);

    return 0;
}
