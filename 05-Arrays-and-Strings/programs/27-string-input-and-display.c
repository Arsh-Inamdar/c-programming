#include <stdio.h>

int main(void)
{
    char text[100];

    printf("Enter a string: ");

    if (fgets(text, sizeof(text), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }

    printf("Entered string: %s", text);

    return 0;
}
