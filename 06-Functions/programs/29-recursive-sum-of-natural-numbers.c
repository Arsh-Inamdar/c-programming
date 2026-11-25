#include <stdio.h>

int calculateSum(int number);

int main(void)
{
    int number;

    printf("Enter the value of N: ");
    scanf("%d", &number);

    if (number < 1)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        printf("Sum = %d\n", calculateSum(number));
    }

    return 0;
}

int calculateSum(int number)
{
    if (number == 1)
    {
        return 1;
    }

    return number + calculateSum(number - 1);
}
