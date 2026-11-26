#include <stdio.h>

int main(void) {
    int number = 250;

    int *ptr = &number;
    int **doublePtr = &ptr;

    **doublePtr = 500;

    printf("Modified Value: %d\n", number);

    return 0;
}
