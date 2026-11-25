#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (number > 0)
    {
        printf("The number is positive.\n");
    }

    return 0;
}
