#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char text[200];
    int i, uppercase = 0, lowercase = 0;

    printf("Enter a string: ");

    if (fgets(text, sizeof(text), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }

    for (i = 0; text[i] != '\0'; i++)
    {
        if (isupper((unsigned char)text[i]))
        {
            uppercase++;
        }
        else if (islower((unsigned char)text[i]))
        {
            lowercase++;
        }
    }

    printf("Uppercase letters = %d\n", uppercase);
    printf("Lowercase letters = %d\n", lowercase);

    return 0;
}
