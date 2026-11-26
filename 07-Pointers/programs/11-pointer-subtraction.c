#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = &numbers[4];

    ptr = ptr - 2;

    printf("Value After Pointer Subtraction: %d\n", *ptr);

    return 0;
}
