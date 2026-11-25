#include <stdio.h>

int main(void)
{
    int first[100], second[100];
    int n1, n2, i, j, k, found;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    if (n1 < 1 || n1 > 100)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter the first array elements:\n");

    for (i = 0; i < n1; i++)
    {
        scanf("%d", &first[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    if (n2 < 1 || n2 > 100)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter the second array elements:\n");

    for (i = 0; i < n2; i++)
    {
        scanf("%d", &second[i]);
    }

    printf("Common elements: ");

    for (i = 0; i < n1; i++)
    {
        found = 0;

        for (k = 0; k < i; k++)
        {
            if (first[i] == first[k])
            {
                found = 1;
                break;
            }
        }

        if (found)
        {
            continue;
        }

        for (j = 0; j < n2; j++)
        {
            if (first[i] == second[j])
            {
                printf("%d ", first[i]);
                break;
            }
        }
    }

    printf("\n");

    return 0;
}
