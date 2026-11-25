#include <stdio.h>

float convertToFahrenheit(float celsius);

int main(void)
{
    float celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    printf("Temperature in Fahrenheit = %.2f\n", convertToFahrenheit(celsius));

    return 0;
}

float convertToFahrenheit(float celsius)
{
    return (celsius * 9.0f / 5.0f) + 32.0f;
}
