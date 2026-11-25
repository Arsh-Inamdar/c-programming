#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char text[200];
    int i, vowels = 0, consonants = 0;
    char ch;

    printf("Enter a string: ");

    if (fgets(text, sizeof(text), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }

    for (i = 0; text[i] != '\0'; i++)
    {
        ch = (char)tolower((unsigned char)text[i]);

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
