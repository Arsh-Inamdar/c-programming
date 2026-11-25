#include <stdio.h>

void swapNumbers(int *first, int *second);

int main(void)
{
    int first;
    int second;

    printf("Enter two numbers: ");
    scanf("%d %d", &first, &second);

    printf("Before swapping: first = %d, second = %d\n", first, second);

    swapNumbers(&first, &second);

    printf("After swapping: first = %d, second = %d\n", first, second);

    return 0;
}

void swapNumbers(int *first, int *second)
{
    int temp = *first;

    *first = *second;
    *second = temp;
}
