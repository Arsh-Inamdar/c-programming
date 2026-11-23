#include <stdio.h>

int main(void)
{
    int age = 20;
    float height = 5.8f;
    double salary = 25000.75;
    char grade = 'A';

    printf("Variables and Data Types\n");
    printf("------------------------\n");

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Salary: %.2lf\n", salary);
    printf("Grade: %c\n", grade);

    age = 21;
    printf("\nUpdated Age: %d\n", age);

    return 0;
}
