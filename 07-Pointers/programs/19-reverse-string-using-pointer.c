#include <stdio.h>
#include <string.h>

int main(void) {
    char text[] = "POINTER";
    size_t length = strlen(text);

    char *left = text;
    char *right = text + length - 1;

    while (left < right) {
        char temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }

    printf("Reversed String: %s\n", text);

    return 0;
}
