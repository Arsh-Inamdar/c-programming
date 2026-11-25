#include <stdio.h>

#define MAX 10

int main(void)
{
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];
    int rows, columns, i, j;

    printf("Enter the number of rows and columns: ");

    if (scanf("%d %d", &rows, &columns) != 2 ||
        rows < 1 || rows > MAX || columns < 1 || columns > MAX)
    {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }

    printf("Enter elements of the first matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (scanf("%d", &first[i][j]) != 1)
            {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    printf("Enter elements of the second matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (scanf("%d", &second[i][j]) != 1)
            {
                printf("Invalid input.\n");
                return 1;
            }

            result[i][j] = first[i][j] + second[i][j];
        }
    }

    printf("Sum of the matrices:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d\t", result[i][j]);
        }

        printf("\n");
    }

    return 0;
}
