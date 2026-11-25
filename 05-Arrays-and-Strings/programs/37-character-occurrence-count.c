#include <stdio.h>

int main(void)
{
    char text[200], target;
    int i, count = 0;

    printf("Enter a string: ");

    if (fgets(text, sizeof(text), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }

    printf("Enter the character to count: ");

    if (scanf(" %c", &target) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == target)
        {
            count++;
        }
    }

    printf("Occurrences of '%c' = %d\n", target, count);

    return 0;
}
