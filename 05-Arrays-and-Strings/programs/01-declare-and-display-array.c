#include <stdio.h>

int main(void)
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Array elements:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
