#include <stdio.h>

#define MAX 100

int main(void)
{
    int numbers[MAX];
    int n, rotations, i, j, first;

    printf("Enter the number of elements: ");

    if (scanf("%d", &n) != 1 || n < 1 || n > MAX)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        if (scanf("%d", &numbers[i]) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Enter the number of left rotations: ");

    if (scanf("%d", &rotations) != 1 || rotations < 0)
    {
        printf("Invalid rotation count.\n");
        return 1;
    }

    rotations %= n;

    for (i = 0; i < rotations; i++)
    {
        first = numbers[0];

        for (j = 0; j < n - 1; j++)
        {
            numbers[j] = numbers[j + 1];
        }

        numbers[n - 1] = first;
    }

    printf("Array after left rotation:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
