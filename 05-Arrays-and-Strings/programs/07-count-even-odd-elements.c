#include <stdio.h>

#define MAX 100

int main(void)
{
    int numbers[MAX];
    int n, i, even = 0, odd = 0;

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

        if (numbers[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);

    return 0;
}
