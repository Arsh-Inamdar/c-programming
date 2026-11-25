#include <stdio.h>

int findMaximum(const int array[], int size);
int findMinimum(const int array[], int size);

int main(void)
{
    int array[100];
    int size;
    int i;

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &size);

    if (size < 1 || size > 100)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Maximum = %d\n", findMaximum(array, size));
    printf("Minimum = %d\n", findMinimum(array, size));

    return 0;
}

int findMaximum(const int array[], int size)
{
    int maximum = array[0];
    int i;

    for (i = 1; i < size; i++)
    {
        if (array[i] > maximum)
        {
            maximum = array[i];
        }
    }

    return maximum;
}

int findMinimum(const int array[], int size)
{
    int minimum = array[0];
    int i;

    for (i = 1; i < size; i++)
    {
        if (array[i] < minimum)
        {
            minimum = array[i];
        }
    }

    return minimum;
}
