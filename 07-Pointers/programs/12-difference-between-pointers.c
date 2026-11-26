#include <stdio.h>
#include <stddef.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};

    int *ptr1 = &numbers[1];
    int *ptr2 = &numbers[4];

    ptrdiff_t difference = ptr2 - ptr1;

    printf("Pointer Difference: %td\n", difference);

    return 0;
}
