#include <stdio.h>

int main(void) {
    int numbers[] = {25, 10, 75, 40, 60};
    int *ptr = numbers;
    int largest = *ptr;

    for (int i = 1; i < 5; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    printf("Largest Element: %d\n", largest);

    return 0;
}
