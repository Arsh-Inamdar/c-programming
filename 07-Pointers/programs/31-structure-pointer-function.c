#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

void displayStudent(const struct Student *ptr) {
    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);
}

int main(void) {
    struct Student student = {102, 92.5f};

    displayStudent(&student);

    return 0;
}
