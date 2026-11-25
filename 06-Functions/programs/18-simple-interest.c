#include <stdio.h>

float calculateSimpleInterest(float principal, float rate, float time);

int main(void)
{
    float principal;
    float rate;
    float time;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    printf("Simple Interest = %.2f\n", calculateSimpleInterest(principal, rate, time));

    return 0;
}

float calculateSimpleInterest(float principal, float rate, float time)
{
    return (principal * rate * time) / 100.0f;
}
