#include <stdio.h>

void displayDetails(const char name[], const char college[]);

int main(void)
{
    char name[100];
    char college[150];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your college name: ");
    fgets(college, sizeof(college), stdin);

    displayDetails(name, college);

    return 0;
}

void displayDetails(const char name[], const char college[])
{
    printf("\nStudent Details\n");
    printf("Name: %s", name);
    printf("College: %s", college);
}
