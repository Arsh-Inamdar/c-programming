#include <stdio.h>

float calculateArea(float radius);

int main(void)
{
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Area = %.2f\n", calculateArea(radius));

    return 0;
}

float calculateArea(float radius)
{
    const float PI = 3.14159f;

    return PI * radius * radius;
}
