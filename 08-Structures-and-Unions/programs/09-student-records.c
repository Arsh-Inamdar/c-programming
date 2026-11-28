#include <stdio.h>

#define STUDENT_COUNT 3

struct Student {
    int rollNumber;
    char name[40];
    float marks;
};

int main(void) {
    struct Student students[STUDENT_COUNT];
    float total = 0.0f;

    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Roll number: ");
        if (scanf("%d", &students[i].rollNumber) != 1) {
            printf("Invalid roll number.\n");
            return 1;
        }

        printf("Name (single word): ");
        if (scanf("%39s", students[i].name) != 1) {
            printf("Invalid name.\n");
            return 1;
        }

        printf("Marks: ");
        if (scanf("%f", &students[i].marks) != 1) {
            printf("Invalid marks.\n");
            return 1;
        }

        total += students[i].marks;
    }

    printf("\nStudent Records\n");
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("%d  %-15s  %.2f\n",
               students[i].rollNumber,
               students[i].name,
               students[i].marks);
    }

    printf("\nAverage Marks: %.2f\n", total / STUDENT_COUNT);

    return 0;
}
