#include <stdio.h>

#define MAX 100

int main(void)
{
    int numbers[MAX];
    int n, i, j, temp;
    int found = 0;

    printf("Enter the number of elements: ");

    if (scanf("%d", &n) != 1 || n < 2 || n > MAX)
    {
        printf("Enter a valid array size of at least 2.\n");
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

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (numbers[j] < numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for (i = 1; i < n; i++)
    {
        if (numbers[i] != numbers[0])
        {
            printf("Second-largest element = %d\n", numbers[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Second-largest distinct element does not exist.\n");
    }

    return 0;
}
