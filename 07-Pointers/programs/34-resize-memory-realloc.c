#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr = malloc(3 * sizeof *ptr);

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        ptr[i] = (i + 1) * 10;
    }

    int *temp = realloc(ptr, 5 * sizeof *ptr);

    if (temp == NULL) {
        printf("Memory reallocation failed.\n");
        free(ptr);
        return 1;
    }

    ptr = temp;

    ptr[3] = 40;
    ptr[4] = 50;

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\n");

    free(ptr);
    return 0;
}
