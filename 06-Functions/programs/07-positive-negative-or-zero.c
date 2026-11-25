#include <stdio.h>

void checkNumber(int number);

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkNumber(number);

    return 0;
}

void checkNumber(int number)
{
    if (number > 0)
    {
        printf("The number is positive.\n");
    }
    else if (number < 0)
    {
        printf("The number is negative.\n");
    }
    else
    {
        printf("The number is zero.\n");
    }
}
