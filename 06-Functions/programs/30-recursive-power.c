#include <stdio.h>

long long calculatePower(int base, int exponent);

int main(void)
{
    int base;
    int exponent;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter a non-negative exponent: ");
    scanf("%d", &exponent);

    if (exponent < 0)
    {
        printf("Please enter a non-negative exponent.\n");
    }
    else
    {
        printf("Result = %lld\n", calculatePower(base, exponent));
    }

    return 0;
}

long long calculatePower(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }

    return (long long)base * calculatePower(base, exponent - 1);
}
