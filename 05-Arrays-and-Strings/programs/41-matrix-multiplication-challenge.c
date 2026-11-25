#include <stdio.h>

int main(void)
{
    int first[10][10], second[10][10], result[10][10];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 ||
        r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10)
    {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }

    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    printf("Enter the first matrix:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter the second matrix:\n");

    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            result[i][j] = 0;

            for (k = 0; k < c1; k++)
            {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    printf("Product matrix:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }

        printf("\n");
    }

    return 0;
}
