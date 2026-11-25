#include <stdio.h>

void calculateResults(int first, int second, int *sum, int *difference);

int main(void)
{
    int first;
    int second;
    int sum;
    int difference;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    calculateResults(first, second, &sum, &difference);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);

    return 0;
}

void calculateResults(int first, int second, int *sum, int *difference)
{
    *sum = first + second;
    *difference = first - second;
}
