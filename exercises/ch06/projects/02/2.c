#include <stdio.h>

int main(void)
{
    int m, n, remainer;
    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);
    
    while (n != 0) {
        remainer = m % n;
        m = n;
        n = remainer;
    }

    printf("Greatest common divisor: %d\n", m);
    return 0;
}
