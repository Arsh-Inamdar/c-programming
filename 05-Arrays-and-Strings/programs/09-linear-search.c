#include <stdio.h>

#define MAX 100

int main(void)
{
    int numbers[MAX];
    int n, i, search, found = 0;

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

    printf("Enter the element to search: ");

    if (scanf("%d", &search) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        if (numbers[i] == search)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Element found at position %d.\n", i + 1);
    }
    else
    {
        printf("Element not found.\n");
    }

    return 0;
}
