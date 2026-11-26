#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40};
    int *ptr = numbers;

    printf("Current Value: %d\n", *ptr);

    ptr++;

    printf("Next Value: %d\n", *ptr);

    return 0;
}
