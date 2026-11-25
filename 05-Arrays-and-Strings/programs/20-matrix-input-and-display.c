#include <stdio.h>

#define MAX 10

int main(void)
{
    int matrix[MAX][MAX];
    int rows, columns, i, j;

    printf("Enter the number of rows and columns: ");

    if (scanf("%d %d", &rows, &columns) != 2 ||
        rows < 1 || rows > MAX || columns < 1 || columns > MAX)
    {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (scanf("%d", &matrix[i][j]) != 1)
            {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    printf("Matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d\t", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}
