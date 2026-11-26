#include <stdio.h>

int main(void) {
    int number = 10;
    int *ptr = &number;

    printf("Size of Integer: %zu bytes\n", sizeof(number));
    printf("Size of Pointer: %zu bytes\n", sizeof(ptr));

    return 0;
}
