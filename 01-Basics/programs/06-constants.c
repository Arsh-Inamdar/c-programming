#include <stdio.h>

int main(void)
{
    const float PI = 3.14159f;
    float radius = 5.0f;
    float area = PI * radius * radius;

    printf("PI = %.5f\n", PI);
    printf("Radius = %.2f\n", radius);
    printf("Area of circle = %.2f\n", area);

    return 0;
}
