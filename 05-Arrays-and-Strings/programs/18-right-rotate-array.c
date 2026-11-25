#include <stdio.h>

#define MAX 100

int main(void)
{
    int numbers[MAX];
    int n, rotations, i, j, last;

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

    printf("Enter the number of right rotations: ");

    if (scanf("%d", &rotations) != 1 || rotations < 0)
    {
        printf("Invalid rotation count.\n");
        return 1;
    }

    rotations %= n;

    for (i = 0; i < rotations; i++)
    {
        last = numbers[n - 1];

        for (j = n - 1; j > 0; j--)
        {
            numbers[j] = numbers[j - 1];
        }

        numbers[0] = last;
    }

    printf("Array after right rotation:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
