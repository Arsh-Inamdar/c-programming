#include <stdio.h>

int sum(int *a, int *b) {
    return *a + *b;
}

int main(void) {
    int x = 25;
    int y = 35;

    printf("Sum: %d\n", sum(&x, &y));

    return 0;
}
