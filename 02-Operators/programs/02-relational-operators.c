#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Equal: %d\n", a == b);
    printf("Not Equal: %d\n", a != b);
    printf("Greater Than: %d\n", a > b);
    printf("Less Than: %d\n", a < b);
    printf("Greater Than or Equal: %d\n", a >= b);
    printf("Less Than or Equal: %d\n", a <= b);

    printf("First number is positive: %d\n", a > 0);
    printf("Second number is zero: %d\n", b == 0);

    return 0;
}
