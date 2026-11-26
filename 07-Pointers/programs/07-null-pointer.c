#include <stdio.h>

int main(void) {
    int *ptr = NULL;

    if (ptr == NULL) {
        printf("Pointer is NULL.\n");
    } else {
        printf("Pointer is not NULL.\n");
    }

    return 0;
}
