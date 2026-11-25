#include <stdio.h>

int findMaximum(const int *first, const int *second);

int main(void)
{
    int first;
    int second;

    printf("Enter two numbers: ");
    scanf("%d %d", &first, &second);

    printf("Maximum = %d\n", findMaximum(&first, &second));

    return 0;
}

int findMaximum(const int *first, const int *second)
{
    return (*first > *second) ? *first : *second;
}
