#include <stdio.h>
#include <string.h>

int isPalindrome(const char text[], int start, int end);

int main(void)
{
    char text[200];
    int length;

    printf("Enter a word: ");
    scanf("%199s", text);

    length = (int)strlen(text);

    if (isPalindrome(text, 0, length - 1))
    {
        printf("%s is a palindrome.\n", text);
    }
    else
    {
        printf("%s is not a palindrome.\n", text);
    }

    return 0;
}

int isPalindrome(const char text[], int start, int end)
{
    if (start >= end)
    {
        return 1;
    }

    if (text[start] != text[end])
    {
        return 0;
    }

    return isPalindrome(text, start + 1, end - 1);
}
