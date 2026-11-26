#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size;

    printf("Enter number of elements: ");

    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int *ptr = malloc((size_t)size * sizeof *ptr);

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);

        if (scanf("%d", &ptr[i]) != 1) {
            printf("Invalid input.\n");
            free(ptr);
            return 1;
        }
    }

    printf("Array Elements: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\n");

    free(ptr);
    return 0;
}
