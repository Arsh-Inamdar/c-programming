#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char text[300];
    int i, words = 0, inWord = 0;

    printf("Enter a sentence: ");

    if (fgets(text, sizeof(text), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }

    for (i = 0; text[i] != '\0'; i++)
    {
        if (isspace((unsigned char)text[i]))
        {
            inWord = 0;
        }
        else if (!inWord)
        {
            words++;
            inWord = 1;
        }
    }

    printf("Number of words = %d\n", words);

    return 0;
}
