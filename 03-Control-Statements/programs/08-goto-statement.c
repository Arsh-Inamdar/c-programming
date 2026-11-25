#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a positive number: ");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (number <= 0)
    {
        goto invalid;
    }

    printf("You entered %d.\n", number);
    return 0;

invalid:
    printf("The number must be positive.\n");

    return 0;
}
