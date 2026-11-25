#include <stdio.h>

int calculateSquare(int number);

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Square = %d\n", calculateSquare(number));

    return 0;
}

int calculateSquare(int number)
{
    return number * number;
}
