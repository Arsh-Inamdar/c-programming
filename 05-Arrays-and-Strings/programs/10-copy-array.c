#include <stdio.h>

#define MAX 100

int main(void)
{
    int source[MAX], destination[MAX];
    int n, i;

    printf("Enter the number of elements: ");

    if (scanf("%d", &n) != 1 || n < 1 || n > MAX)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        if (scanf("%d", &source[i]) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }
    }

    for (i = 0; i < n; i++)
    {
        destination[i] = source[i];
    }

    printf("Copied array elements:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", destination[i]);
    }

    printf("\n");

    return 0;
}
