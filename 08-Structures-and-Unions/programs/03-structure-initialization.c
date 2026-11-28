#include <stdio.h>

struct Book {
    int bookId;
    char title[60];
    float price;
};

int main(void) {
    struct Book book = {
        .bookId = 301,
        .title = "C Programming",
        .price = 499.50f
    };

    printf("Book Details\n");
    printf("Book ID: %d\n", book.bookId);
    printf("Title: %s\n", book.title);
    printf("Price: %.2f\n", book.price);

    return 0;
}
