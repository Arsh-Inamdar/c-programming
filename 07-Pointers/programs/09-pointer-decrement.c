#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40};
    int *ptr = &numbers[3];

    printf("Current Value: %d\n", *ptr);

    ptr--;

    printf("Previous Value: %d\n", *ptr);

    return 0;
}
