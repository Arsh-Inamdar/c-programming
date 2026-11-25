#include <stdio.h>

int calculateDigitSum(unsigned long long number);

int main(void)
{
    unsigned long long number;

    printf("Enter a non-negative integer: ");
    scanf("%llu", &number);

    printf("Sum of digits = %d\n", calculateDigitSum(number));

    return 0;
}

int calculateDigitSum(unsigned long long number)
{
    if (number == 0)
    {
        return 0;
    }

    return (int)(number % 10) + calculateDigitSum(number / 10);
}
