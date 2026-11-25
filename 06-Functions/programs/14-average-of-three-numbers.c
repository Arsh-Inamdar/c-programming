#include <stdio.h>

float calculateAverage(float first, float second, float third);

int main(void)
{
    float first;
    float second;
    float third;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &first, &second, &third);

    printf("Average = %.2f\n", calculateAverage(first, second, third));

    return 0;
}

float calculateAverage(float first, float second, float third)
{
    return (first + second + third) / 3.0f;
}
