#include <stdio.h>

void displayReverse(unsigned long long number);

int main(void)
{
    unsigned long long number;

    printf("Enter a non-negative integer: ");
    scanf("%llu", &number);

    printf("Reversed number = ");
    displayReverse(number);
    printf("\n");

    return 0;
}

void displayReverse(unsigned long long number)
{
    printf("%llu", number % 10);

    if (number >= 10)
    {
        displayReverse(number / 10);
    }
}
