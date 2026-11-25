#include <stdio.h>

#define MAX 100

int main(void)
{
    int numbers[MAX];
    int n, i, j, count = 0;
    int duplicate;

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
        duplicate = 0;

        for (j = 0; j < i; j++)
        {
            if (numbers[i] == numbers[j])
            {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate)
        {
            for (j = i + 1; j < n; j++)
            {
                if (numbers[i] == numbers[j])
                {
                    count++;
                    break;
                }
            }
        }
    }

    printf("Number of duplicate elements = %d\n", count);

    return 0;
}
