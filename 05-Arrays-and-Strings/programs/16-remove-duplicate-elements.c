#include <stdio.h>

#define MAX 100

int main(void)
{
    int numbers[MAX];
    int n, i, j, k;

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

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; )
        {
            if (numbers[i] == numbers[j])
            {
                for (k = j; k < n - 1; k++)
                {
                    numbers[k] = numbers[k + 1];
                }

                n--;
            }
            else
            {
                j++;
            }
        }
    }

    printf("Array after removing duplicates:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
