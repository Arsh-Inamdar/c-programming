#include <stdio.h>

int main(void)
{
    char text[100];
    int length = 0, i;
    char temp;

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
        temp = text[i];
        text[i] = text[length - i - 1];
        text[length - i - 1] = temp;
    }

    text[length] = '\0';

    printf("Reversed string: %s\n", text);

    return 0;
}
