#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    ptr = ptr + 3;

    printf("Value After Pointer Addition: %d\n", *ptr);

    return 0;
}
