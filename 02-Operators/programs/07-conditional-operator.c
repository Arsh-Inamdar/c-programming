#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    int largest = (a > b) ? a : b;

    printf("Largest number: %d\n", largest);
    printf("%d is %s.\n", a, (a % 2 == 0) ? "Even" : "Odd");
    printf("%d is %s.\n", b, (b % 2 == 0) ? "Even" : "Odd");

    return 0;
}
