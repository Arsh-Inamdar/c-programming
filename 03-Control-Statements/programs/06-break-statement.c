#include <stdio.h>

int main(void)
{
    int number;

    for (number = 1; number <= 10; number++)
    {
        if (number == 5)
        {
            break;
        }

        printf("%d\n", number);
    }

    printf("Loop terminated using break.\n");

    return 0;
}
