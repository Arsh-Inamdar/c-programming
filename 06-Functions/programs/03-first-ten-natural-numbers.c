#include <stdio.h>

void displayNumbers(void);

int main(void)
{
    displayNumbers();

    return 0;
}

void displayNumbers(void)
{
    int i;

    printf("First 10 natural numbers:\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    printf("\n");
}
