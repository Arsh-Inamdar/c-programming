#include <stdio.h>

int main(void)
{
    char first[200], second[100];
    int i = 0, j = 0;

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

    while (first[i] != '\0' && first[i] != '\n')
    {
        i++;
    }

    while (second[j] != '\0' && second[j] != '\n' && i < 199)
    {
        first[i] = second[j];
        i++;
        j++;
    }

    first[i] = '\0';

    printf("Concatenated string: %s\n", first);

    return 0;
}
