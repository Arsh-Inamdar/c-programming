#include <stdio.h>

void modify(int *ptr) {
    *ptr = 100;
}

int main(void) {
    int number = 25;

    printf("Before Modification: %d\n", number);

    modify(&number);

    printf("After Modification: %d\n", number);

    return 0;
}
