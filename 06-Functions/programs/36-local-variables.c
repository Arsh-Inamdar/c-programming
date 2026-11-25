#include <stdio.h>

void displayNumber(void);

int main(void)
{
    int number = 10;

    printf("Local variable in main: %d\n", number);

    displayNumber();

    return 0;
}

void displayNumber(void)
{
    int number = 20;

    printf("Local variable in displayNumber: %d\n", number);
}
