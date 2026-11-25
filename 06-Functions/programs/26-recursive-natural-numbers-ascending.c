#include <stdio.h>

void displayNumbers(int number);

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
        displayNumbers(number);
        printf("\n");
    }

    return 0;
}

void displayNumbers(int number)
{
    if (number == 0)
    {
        return;
    }

    displayNumbers(number - 1);
    printf("%d ", number);
}
