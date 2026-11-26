#include <stdio.h>

int main(void) {
    int number = 40;

    int *ptr1 = &number;
    int *ptr2 = &number;

    printf("Original Value: %d\n", number);
    printf("Value using First Pointer: %d\n", *ptr1);
    printf("Value using Second Pointer: %d\n", *ptr2);

    return 0;
}
