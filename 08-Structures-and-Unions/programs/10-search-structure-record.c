#include <stdio.h>

#define STUDENT_COUNT 4

struct Student {
    int rollNumber;
    char name[40];
    float marks;
};

int main(void) {
    struct Student students[STUDENT_COUNT] = {
        {101, "Aarav", 88.5f},
        {102, "Priya", 92.0f},
        {103, "Rohan", 79.5f},
        {104, "Neha", 85.0f}
    };

    int searchRoll;
    int found = 0;

    printf("Enter roll number to search: ");
    if (scanf("%d", &searchRoll) != 1) {
        printf("Invalid roll number.\n");
        return 1;
    }

    for (int i = 0; i < STUDENT_COUNT; i++) {
        if (students[i].rollNumber == searchRoll) {
            printf("\nRecord Found\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No student found with roll number %d.\n", searchRoll);
    }

    return 0;
}
