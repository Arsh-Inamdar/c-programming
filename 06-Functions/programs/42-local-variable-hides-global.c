#include <stdio.h>

int number = 100;

int main(void)
{
    printf("Global variable: %d\n", number);

    {
        int number = 50;

        printf("Local variable: %d\n", number);
    }

    printf("Global variable again: %d\n", number);

    return 0;
}
