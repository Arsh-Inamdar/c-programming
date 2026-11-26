#include <stdio.h>

int main(void) {
    int number = 25;
    int *ptr = &number;

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", (void *)&number);
    printf("Value using pointer: %d\n", *ptr);
    printf("Address stored in pointer: %p\n", (void *)ptr);

    return 0;
}
