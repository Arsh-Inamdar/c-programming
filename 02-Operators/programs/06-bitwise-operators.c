#include <stdio.h>

int main(void) {
    unsigned int a, b;

    printf("Enter two non-negative integers: ");
    if (scanf("%u %u", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Bitwise AND: %u\n", a & b);
    printf("Bitwise OR: %u\n", a | b);
    printf("Bitwise XOR: %u\n", a ^ b);
    printf("Bitwise NOT of first number: %u\n", ~a);
    printf("Left Shift: %u\n", a << 1);
    printf("Right Shift: %u\n", a >> 1);

    return 0;
}
