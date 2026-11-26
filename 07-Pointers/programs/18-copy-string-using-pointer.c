#include <stdio.h>

int main(void) {
    char source[] = "Computer";
    char destination[20];

    char *src = source;
    char *dest = destination;

    while ((*dest++ = *src++) != '\0') {
    }

    printf("Copied String: %s\n", destination);

    return 0;
}
