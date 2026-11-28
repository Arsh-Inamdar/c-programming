#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main(void) {
    struct Student student;

    printf("Enter roll number: ");
    if (scanf("%d", &student.rollNumber) != 1) {
        printf("Invalid roll number.\n");
        return 1;
    }

    printf("Enter name (single word): ");
    if (scanf("%49s", student.name) != 1) {
        printf("Invalid name.\n");
        return 1;
    }

    printf("Enter marks: ");
    if (scanf("%f", &student.marks) != 1) {
        printf("Invalid marks.\n");
        return 1;
    }

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
