#include <stdio.h>

int *getNumber(void) {
    static int number = 200;
    return &number;
}

int main(void) {
    int *ptr = getNumber();

    printf("Returned Value: %d\n", *ptr);

    return 0;
}
