#include <stdio.h>

int number = 100;

void displayNumber(void);

int main(void)
{
    printf("Global variable in main: %d\n", number);

    displayNumber();

    return 0;
}

void displayNumber(void)
{
    printf("Global variable in displayNumber: %d\n", number);
}
