#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100];
    int age;

    printf("Enter your full name: ");

    if (fgets(name, sizeof(name), stdin) == NULL)
    {
        printf("Unable to read your name.\n");
        return 1;
    }

    name[strcspn(name, "\n")] = '\0';

    printf("Enter your age: ");

    if (scanf("%d", &age) != 1 || age < 0)
    {
        printf("Please enter a valid non-negative age.\n");
        return 1;
    }

    printf("\nHello, %s!\n", name);
    printf("Your age is %d.\n", age);

    return 0;
}
