#include <stdio.h>

int findMaximum(int *a, int *b) {
    if (*a > *b) {
        return *a;
    }

    return *b;
}

int main(void) {
    int x = 45;
    int y = 80;

    printf("Maximum: %d\n", findMaximum(&x, &y));

    return 0;
}
