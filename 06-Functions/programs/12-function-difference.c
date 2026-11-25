#include <stdio.h>

int calculateDifference(int first, int second);

int main(void)
{
    int first;
    int second;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    printf("Difference = %d\n", calculateDifference(first, second));

    return 0;
}

int calculateDifference(int first, int second)
{
    return first - second;
}
