#include <stdio.h>

int main(void) {
    int a = 10;
    int b = 5;
    int c = 2;

    printf("a + b * c = %d\n", a + b * c);
    printf("(a + b) * c = %d\n", (a + b) * c);
    printf("a / b * c = %d\n", a / b * c);
    printf("a > b && b > c = %d\n", a > b && b > c);
    printf("a == 10 || b == 0 = %d\n", a == 10 || b == 0);

    return 0;
}
