#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }

    printf("Sum: %d\n", sum);

    return 0;
}
