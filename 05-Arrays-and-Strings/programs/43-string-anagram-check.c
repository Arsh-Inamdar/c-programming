#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char first[200], second[200];
    int frequency[256] = {0};
    int i, anagram = 1;

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

    for (i = 0; first[i] != '\0'; i++)
    {
        if (!isspace((unsigned char)first[i]))
        {
            frequency[(unsigned char)tolower((unsigned char)first[i])]++;
        }
    }

    for (i = 0; second[i] != '\0'; i++)
    {
        if (!isspace((unsigned char)second[i]))
        {
            frequency[(unsigned char)tolower((unsigned char)second[i])]--;
        }
    }

    for (i = 0; i < 256; i++)
    {
        if (frequency[i] != 0)
        {
            anagram = 0;
            break;
        }
    }

    if (anagram)
    {
        printf("The strings are anagrams.\n");
    }
    else
    {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
