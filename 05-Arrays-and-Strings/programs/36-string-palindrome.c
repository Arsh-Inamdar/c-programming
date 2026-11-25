#include <stdio.h>

int main(void)
{
    char text[100];
    int length = 0, i, palindrome = 1;

    printf("Enter a string: ");

    if (fgets(text, sizeof(text), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }

    while (text[length] != '\0' && text[length] != '\n')
    {
        length++;
    }

    for (i = 0; i < length / 2; i++)
    {
        if (text[i] != text[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
