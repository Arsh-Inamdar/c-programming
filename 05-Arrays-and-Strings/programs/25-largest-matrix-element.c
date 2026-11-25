#include <stdio.h>

#define MAX 10

int main(void)
{
    int matrix[MAX][MAX];
    int rows, columns, i, j, largest;

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

    largest = matrix[0][0];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (matrix[i][j] > largest)
            {
                largest = matrix[i][j];
            }
        }
    }

    printf("Largest matrix element = %d\n", largest);

    return 0;
}
