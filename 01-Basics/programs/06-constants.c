#include <stdio.h>

int main(void)
{
    const float PI = 3.14159f;
    const float radius = 5.0f;

    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;

    printf("Constants in C\n");
    printf("--------------\n");

    printf("PI: %.5f\n", PI);
    printf("Radius: %.2f\n", radius);
    printf("Area of Circle: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}
