#include <stdio.h>

int main(void)
{
    int age = 20;
    float height = 5.8f;
    double salary = 25000.75;
    char grade = 'A';
    char name[] = "Arsh";

    printf("C Format Specifiers\n");
    printf("-------------------\n");

    printf("Integer (%d): %d\n", age, age);
    printf("Float (%%f): %.2f\n", height);
    printf("Double (%%f): %.2f\n", salary);
    printf("Character (%%c): %c\n", grade);
    printf("String (%%s): %s\n", name);

    return 0;
}
