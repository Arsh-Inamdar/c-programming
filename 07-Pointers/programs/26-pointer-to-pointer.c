#include <stdio.h>

int main(void) {
    int number = 100;

    int *ptr = &number;
    int **doublePtr = &ptr;

    printf("Original Value: %d\n", number);
    printf("Using Pointer: %d\n", *ptr);
    printf("Using Double Pointer: %d\n", **doublePtr);

    return 0;
}
