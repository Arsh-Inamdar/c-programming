#include <stdio.h>

int main(void)
{
    int numbers[5];
    int i;

    printf("Enter five numbers:\n");

    for (i = 0; i < 5; i++)
    {
        if (scanf("%d", &numbers[i]) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Array elements:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
