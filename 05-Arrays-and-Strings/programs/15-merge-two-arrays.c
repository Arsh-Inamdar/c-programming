#include <stdio.h>

#define MAX 100

int main(void)
{
    int first[MAX], second[MAX], merged[MAX * 2];
    int n1, n2, i;

    printf("Enter the size of the first array: ");

    if (scanf("%d", &n1) != 1 || n1 < 1 || n1 > MAX)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n1);

    for (i = 0; i < n1; i++)
    {
        if (scanf("%d", &first[i]) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }

        merged[i] = first[i];
    }

    printf("Enter the size of the second array: ");

    if (scanf("%d", &n2) != 1 || n2 < 1 || n2 > MAX)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n2);

    for (i = 0; i < n2; i++)
    {
        if (scanf("%d", &second[i]) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }

        merged[n1 + i] = second[i];
    }

    printf("Merged array:\n");

    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

    printf("\n");

    return 0;
}
