#include <stdio.h>

int main(void) {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Initial value: %d\n", number);

    printf("Pre-increment: %d\n", ++number);
    printf("Post-increment: %d\n", number++);
    printf("After post-increment: %d\n", number);

    printf("Pre-decrement: %d\n", --number);
    printf("Post-decrement: %d\n", number--);
    printf("After post-decrement: %d\n", number);

    return 0;
}
