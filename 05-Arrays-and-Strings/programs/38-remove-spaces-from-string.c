#include <stdio.h>

int main(void)
{
    char text[200];
    int i, j = 0;

    printf("Enter a string: ");

    if (fgets(text, sizeof(text), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }

    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] != ' ' && text[i] != '\t' && text[i] != '\n')
        {
            text[j] = text[i];
            j++;
        }
    }

    text[j] = '\0';

    printf("String without spaces: %s\n", text);

    return 0;
}
