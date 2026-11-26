#include <stdio.h>

int main(void) {
    int number = 50;

    printf("Value: %d\n", number);
    printf("Address: %p\n", (void *)&number);

    return 0;
}
