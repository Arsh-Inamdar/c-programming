#include <stdio.h>

int main(void)
{
    int age = 20;
    float percentage = 85.5f;
    double distance = 12345.6789;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Percentage: %.2f\n", percentage);
    printf("Distance: %.4f\n", distance);
    printf("Grade: %c\n", grade);

    age = 21;
    printf("Updated age: %d\n", age);

    return 0;
}
