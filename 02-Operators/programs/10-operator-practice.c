#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("\nArithmetic Results\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);

    if (b != 0) {
        printf("Division: %d\n", a / b);
        printf("Modulus: %d\n", a % b);
    } else {
        printf("Division and modulus unavailable for zero divisor.\n");
    }

    printf("\nRelational Results\n");
    printf("a == b: %d\n", a == b);
    printf("a > b: %d\n", a > b);

    printf("\nLogical Results\n");
    printf("Both positive: %d\n", a > 0 && b > 0);
    printf("At least one positive: %d\n", a > 0 || b > 0);

    printf("\nConditional Result\n");
    printf("Largest: %d\n", (a > b) ? a : b);

    return 0;
}
