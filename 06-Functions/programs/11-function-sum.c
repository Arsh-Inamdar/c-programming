#include <stdio.h>

int calculateSum(int first, int second);

int main(void)
{
    int first;
    int second;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    printf("Sum = %d\n", calculateSum(first, second));

    return 0;
}

int calculateSum(int first, int second)
{
    return first + second;
}
