#include <stdio.h>

void addMatrices(int first[10][10], int second[10][10],
                 int result[10][10], int rows, int columns);

void displayMatrix(int matrix[10][10], int rows, int columns);

int main(void)
{
    int first[10][10];
    int second[10][10];
    int result[10][10];
    int rows;
    int columns;
    int i;
    int j;

    printf("Enter the number of rows and columns (1 to 10): ");
    scanf("%d %d", &rows, &columns);

    if (rows < 1 || rows > 10 || columns < 1 || columns > 10)
    {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }

    printf("Enter elements of the first matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }

    addMatrices(first, second, result, rows, columns);

    printf("Sum of the matrices:\n");
    displayMatrix(result, rows, columns);

    return 0;
}

void addMatrices(int first[10][10], int second[10][10],
                 int result[10][10], int rows, int columns)
{
    int i;
    int j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            result[i][j] = first[i][j] + second[i][j];
        }
    }
}

void displayMatrix(int matrix[10][10], int rows, int columns)
{
    int i;
    int j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }
}
