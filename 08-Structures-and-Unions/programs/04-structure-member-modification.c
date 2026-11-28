#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main(void) {
    struct Student student = {102, "Priya", 75.0f};

    printf("Before Modification\n");
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    student.marks = 92.5f;

    printf("\nAfter Modification\n");
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
