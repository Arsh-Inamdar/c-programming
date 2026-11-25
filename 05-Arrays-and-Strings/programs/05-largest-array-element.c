#include <stdio.h>

#define MAX 100

int main(void)
{
    int numbers[MAX];
    int n, i, largest;

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

    largest = numbers[0];

    for (i = 1; i < n; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    printf("Largest element = %d\n", largest);

    return 0;
}
