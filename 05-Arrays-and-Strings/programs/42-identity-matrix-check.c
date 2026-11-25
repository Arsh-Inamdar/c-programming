#include <stdio.h>

int main(void)
{
    int matrix[10][10];
    int n, i, j, identity = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    if (n < 1 || n > 10)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter the matrix elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((i == j && matrix[i][j] != 1) ||
                (i != j && matrix[i][j] != 0))
            {
                identity = 0;
                break;
            }
        }

        if (!identity)
        {
            break;
        }
    }

    if (identity)
    {
        printf("The matrix is an identity matrix.\n");
    }
    else
    {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}
