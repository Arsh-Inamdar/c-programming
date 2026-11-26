#include <stdio.h>

int main(void) {
    char text[] = "Programming";
    char *ptr = text;
    int length = 0;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("String Length: %d\n", length);

    return 0;
}
