#include <stdio.h>

#define MAX 10

int main(void)
{
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];
    int rows1, columns1, rows2, columns2;
    int i, j, k;

    printf("Enter rows and columns of the first matrix: ");

    if (scanf("%d %d", &rows1, &columns1) != 2 ||
        rows1 < 1 || rows1 > MAX || columns1 < 1 || columns1 > MAX)
    {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }

    printf("Enter rows and columns of the second matrix: ");

    if (scanf("%d %d", &rows2, &columns2) != 2 ||
        rows2 < 1 || rows2 > MAX || columns2 < 1 || columns2 > MAX)
    {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }

    if (columns1 != rows2)
    {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    printf("Enter elements of the first matrix:\n");

    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns1; j++)
        {
            if (scanf("%d", &first[i][j]) != 1)
            {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    printf("Enter elements of the second matrix:\n");

    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            if (scanf("%d", &second[i][j]) != 1)
            {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            result[i][j] = 0;

            for (k = 0; k < columns1; k++)
            {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");

    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            printf("%d\t", result[i][j]);
        }

        printf("\n");
    }

    return 0;
}
