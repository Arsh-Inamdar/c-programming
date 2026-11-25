#include <stdio.h>

int main(void)
{
    char text[100];
    int length = 0;

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

    printf("Length of the string = %d\n", length);

    return 0;
}
