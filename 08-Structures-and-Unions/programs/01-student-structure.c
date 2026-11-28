#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main(void) {
    struct Student student = {101, "Aarav", 89.5f};

    printf("Student Details\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
