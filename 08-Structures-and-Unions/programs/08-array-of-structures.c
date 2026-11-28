#include <stdio.h>

struct Student {
    int rollNumber;
    char name[40];
    float marks;
};

int main(void) {
    struct Student students[3] = {
        {101, "Aarav", 88.5f},
        {102, "Priya", 92.0f},
        {103, "Rohan", 79.5f}
    };

    printf("Student Records\n");

    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
