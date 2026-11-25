#include <stdio.h>

int main(void)
{
    char text[200];
    int frequency[256] = {0};
    int i, found = 0;

    printf("Enter a string: ");

    if (fgets(text, sizeof(text), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }

    for (i = 0; text[i] != '\0' && text[i] != '\n'; i++)
    {
        frequency[(unsigned char)text[i]]++;
    }

    for (i = 0; text[i] != '\0' && text[i] != '\n'; i++)
    {
        if (frequency[(unsigned char)text[i]] == 1)
        {
            printf("First non-repeating character: %c\n", text[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("No non-repeating character found.\n");
    }

    return 0;
}
