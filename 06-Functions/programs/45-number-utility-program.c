#include <stdio.h>

int isPrime(int number);
unsigned long long factorial(int number);
int calculateDigitSum(unsigned long long number);

int main(void)
{
    int number;
    int choice;

    printf("Number Utility Program\n");
    printf("1. Prime Check\n");
    printf("2. Factorial\n");
    printf("3. Sum of Digits\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%d", &number);

    switch (choice)
    {
        case 1:
            if (isPrime(number))
            {
                printf("%d is a prime number.\n", number);
            }
            else
            {
                printf("%d is not a prime number.\n", number);
            }
            break;

        case 2:
            if (number < 0 || number > 20)
            {
                printf("Enter a number between 0 and 20.\n");
            }
            else
            {
                printf("Factorial = %llu\n", factorial(number));
            }
            break;

        case 3:
            if (number < 0)
            {
                printf("Enter a non-negative number.\n");
            }
            else
            {
                printf("Sum of digits = %d\n",
                       calculateDigitSum((unsigned long long)number));
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

int isPrime(int number)
{
    int i;

    if (number <= 1)
    {
        return 0;
    }

    for (i = 2; i <= number / i; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

unsigned long long factorial(int number)
{
    unsigned long long result = 1;
    int i;

    for (i = 1; i <= number; i++)
    {
        result *= (unsigned long long)i;
    }

    return result;
}

int calculateDigitSum(unsigned long long number)
{
    int sum = 0;

    while (number > 0)
    {
        sum += (int)(number % 10);
        number /= 10;
    }

    return sum;
}
