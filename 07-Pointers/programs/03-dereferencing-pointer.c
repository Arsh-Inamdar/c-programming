#include <stdio.h>

int main(void) {
    int number = 75;
    int *ptr = &number;

    printf("Value of number: %d\n", number);
    printf("Value using dereferencing: %d\n", *ptr);

    return 0;
}
