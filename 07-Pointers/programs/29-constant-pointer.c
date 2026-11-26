#include <stdio.h>

int main(void) {
    int number = 50;
    int anotherNumber = 100;

    const int *ptr1 = &number;
    int *const ptr2 = &number;

    printf("Pointer to Constant: %d\n", *ptr1);

    *ptr2 = 75;

    printf("Constant Pointer: %d\n", *ptr2);

    ptr1 = &anotherNumber;

    printf("Updated Pointer Address Value: %d\n", *ptr1);

    return 0;
}
