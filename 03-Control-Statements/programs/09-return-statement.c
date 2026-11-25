#include <stdio.h>

int square(int number)
{
    return number * number;
}

int main(void)
{
    int number;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Square = %d\n", square(number));

    return 0;
}
