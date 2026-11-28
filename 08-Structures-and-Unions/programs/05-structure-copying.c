#include <stdio.h>

struct Product {
    int productId;
    char name[50];
    float price;
};

int main(void) {
    struct Product original = {501, "Keyboard", 1299.0f};
    struct Product copy;

    copy = original;

    printf("Original Product\n");
    printf("ID: %d\n", original.productId);
    printf("Name: %s\n", original.name);
    printf("Price: %.2f\n", original.price);

    printf("\nCopied Product\n");
    printf("ID: %d\n", copy.productId);
    printf("Name: %s\n", copy.name);
    printf("Price: %.2f\n", copy.price);

    return 0;
}
