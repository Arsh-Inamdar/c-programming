#include <stdio.h>

void modifyValue(int number);

int main(void)
{
    int number = 10;

    printf("Before function call: %d\n", number);

    modifyValue(number);

    printf("After function call: %d\n", number);

    return 0;
}

void modifyValue(int number)
{
    number = 50;

    printf("Inside function: %d\n", number);
}
