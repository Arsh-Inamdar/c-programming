#include <stdio.h>

void display(int *ptr) {
    printf("Value: %d\n", *ptr);
}

int main(void) {
    int number = 50;

    display(&number);

    return 0;
}
