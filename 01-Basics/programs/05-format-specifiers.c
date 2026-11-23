#include <stdio.h>

int main(void)
{
    int number = 25;
    float percentage = 87.5f;
    double price = 1499.99;
    char grade = 'A';
    char language[] = "C Programming";

    printf("Integer (%d): %d\n", number, number);
    printf("Float (%f): %f\n", percentage, percentage);
    printf("Double with printf %%f: %f\n", price);
    printf("Character (%%c): %c\n", grade);
    printf("String (%%s): %s\n", language);

    return 0;
}
