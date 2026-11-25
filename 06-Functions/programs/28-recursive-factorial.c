#include <stdio.h>

unsigned long long calculateFactorial(int number);

int main(void)
{
    int number;

    printf("Enter a non-negative integer (0 to 20): ");
    scanf("%d", &number);

    if (number < 0 || number > 20)
    {
        printf("Please enter a number between 0 and 20.\n");
    }
    else
    {
        printf("Factorial = %llu\n", calculateFactorial(number));
    }

    return 0;
}

unsigned long long calculateFactorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }

    return (unsigned long long)number * calculateFactorial(number - 1);
}
