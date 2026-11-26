#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main(void) {
    struct Student student = {101, 85.5f};
    struct Student *ptr = &student;

    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
