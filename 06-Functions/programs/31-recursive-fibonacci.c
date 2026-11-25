#include <stdio.h>

unsigned long long fibonacci(int number);

int main(void)
{
    int number;
    int i;

    printf("Enter the number of terms (1 to 40): ");
    scanf("%d", &number);

    if (number < 1 || number > 40)
    {
        printf("Please enter a number between 1 and 40.\n");
    }
    else
    {
        printf("Fibonacci series:\n");

        for (i = 0; i < number; i++)
        {
            printf("%llu ", fibonacci(i));
        }

        printf("\n");
    }

    return 0;
}

unsigned long long fibonacci(int number)
{
    if (number == 0)
    {
        return 0;
    }

    if (number == 1)
    {
        return 1;
    }

    return fibonacci(number - 1) + fibonacci(number - 2);
}
