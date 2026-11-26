#include <stdio.h>

int main(void) {
    int number = 100;
    int *ptr = &number;

    printf("Before modification: %d\n", number);

    *ptr = 200;

    printf("After modification: %d\n", number);

    return 0;
}
