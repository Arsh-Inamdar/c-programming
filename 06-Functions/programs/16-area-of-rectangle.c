#include <stdio.h>

float calculateArea(float length, float width);

int main(void)
{
    float length;
    float width;

    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);

    printf("Area = %.2f\n", calculateArea(length, width));

    return 0;
}

float calculateArea(float length, float width)
{
    return length * width;
}
