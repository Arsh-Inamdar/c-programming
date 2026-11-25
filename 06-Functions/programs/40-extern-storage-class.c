#include <stdio.h>

extern int number;

int main(void)
{
    printf("Value of external variable: %d\n", number);

    return 0;
}

int number = 100;
