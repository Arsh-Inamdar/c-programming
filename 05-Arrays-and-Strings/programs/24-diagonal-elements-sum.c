#include <stdio.h>

#define MAX 10

int main(void)
{
    int matrix[MAX][MAX];
    int n, i, j, sum = 0;

    printf("Enter the order of the square matrix: ");

    if (scanf("%d", &n) != 1 || n < 1 || n > MAX)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (scanf("%d", &matrix[i][j]) != 1)
            {
                printf("Invalid input.\n");
                return 1;
            }

            if (i == j)
            {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
