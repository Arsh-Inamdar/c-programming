#include <stdio.h>

int main(void)
{
    char first[100], second[100];
    int i = 0, result = 0;

    printf("Enter the first string: ");

    if (fgets(first, sizeof(first), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }

    printf("Enter the second string: ");

    if (fgets(second, sizeof(second), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }

    while (first[i] != '\0' && first[i] != '\n' &&
           second[i] != '\0' && second[i] != '\n')
    {
        if (first[i] != second[i])
        {
            result = first[i] - second[i];
            break;
        }

        i++;
    }

    if (result == 0)
    {
        if (first[i] != second[i])
        {
            result = first[i] - second[i];
        }
    }

    if (result == 0)
    {
        printf("Both strings are equal.\n");
    }
    else
    {
        printf("Strings are different.\n");
    }

    return 0;
}
