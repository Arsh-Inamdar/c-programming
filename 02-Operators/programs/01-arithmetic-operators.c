#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);

    if (b != 0) {
        printf("Integer Division: %d\n", a / b);
        printf("Modulus: %d\n", a % b);
        printf("Floating Division: %.2f\n", (double)a / b);
    } else {
        printf("Division and modulus are undefined for zero divisor.\n");
    }

    return 0;
}
