#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];
    int age;

    printf("User Input and Output\n");
    printf("---------------------\n");

    printf("Enter your name: ");

    if (fgets(name, sizeof(name), stdin) == NULL)
    {
        printf("Error reading name.\n");
        return 1;
    }

    name[strcspn(name, "\n")] = '\0';

    printf("Enter your age: ");

    if (scanf("%d", &age) != 1 || age < 0)
    {
        printf("Please enter a valid age.\n");
        return 1;
    }

    printf("\nUser Details\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    return 0;
}
