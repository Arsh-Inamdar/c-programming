#include <stdio.h>

int main(void)
{
    int arr[100], visited[100] = {0};
    int n, i, j, count;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (visited[i])
        {
            continue;
        }

        count = 1;

        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d occurs %d time(s).\n", arr[i], count);
    }

    return 0;
}
