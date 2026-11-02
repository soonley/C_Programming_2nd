#include <stdio.h>
#define SCALE_FACTOR (4.0f / 3.0f)
#define PI 3.14

int main(void) 
{
    float radius = 0.0f;
    float volume = 0.0f;

    printf("enter a radius: ");
    scanf("%f", &radius);

    volume = SCALE_FACTOR * PI * radius 
            * radius *radius;
    
    printf("volume: %.2f\n", volume);

    return 0;
}
