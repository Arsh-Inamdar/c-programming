#include <stdio.h>

int main(void) {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Initial value: %d\n", number);

    number += 5;
    printf("After += 5: %d\n", number);

    number -= 2;
    printf("After -= 2: %d\n", number);

    number *= 3;
    printf("After *= 3: %d\n", number);

    number /= 2;
    printf("After /= 2: %d\n", number);

    number %= 4;
    printf("After %%= 4: %d\n", number);

    return 0;
}
