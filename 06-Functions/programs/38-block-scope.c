#include <stdio.h>

int main(void)
{
    int number = 10;

    printf("Outside block: %d\n", number);

    {
        int number = 20;

        printf("Inside block: %d\n", number);
    }

    printf("Outside block again: %d\n", number);

    return 0;
}
