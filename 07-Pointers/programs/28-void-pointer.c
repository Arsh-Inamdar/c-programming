#include <stdio.h>

int main(void) {
    int number = 75;
    float decimal = 12.5f;

    void *ptr;

    ptr = &number;
    printf("Integer Value: %d\n", *(int *)ptr);

    ptr = &decimal;
    printf("Float Value: %.2f\n", *(float *)ptr);

    return 0;
}
