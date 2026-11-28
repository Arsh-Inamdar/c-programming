#include <stdio.h>
#include <string.h>

struct Book {
    char title[60];
    char author[50];
};

int main(void) {
    struct Book book;

    printf("Enter book title: ");
    if (fgets(book.title, sizeof(book.title), stdin) == NULL) {
        printf("Unable to read title.\n");
        return 1;
    }
    book.title[strcspn(book.title, "\n")] = '\0';

    printf("Enter author name: ");
    if (fgets(book.author, sizeof(book.author), stdin) == NULL) {
        printf("Unable to read author.\n");
        return 1;
    }
    book.author[strcspn(book.author, "\n")] = '\0';

    printf("\nBook Information\n");
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);

    return 0;
}
