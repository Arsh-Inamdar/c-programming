#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr = calloc(5, sizeof *ptr);

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\n");

    free(ptr);
    return 0;
}
