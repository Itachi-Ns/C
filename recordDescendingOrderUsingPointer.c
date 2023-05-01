#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

struct book {
    int bid;
    char title[50];
    float price;
    int pages;
};

void sort_books_by_title(struct book *books, int num_books) {
    int i, j;
    struct book temp;
    for (i = 0; i < num_books - 1; i++) {
        for (j = i + 1; j < num_books; j++) {
            if (strcmp(books[i].title, books[j].title) < 0) {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

int main() {
    int i, num_books;
    struct book books[MAX_BOOKS];

    printf("Enter the number of books: ");
    scanf("%d", &num_books);

    for (i = 0; i < num_books; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Bid: ");
        scanf("%d", &books[i].bid);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("Pages: ");
        scanf("%d", &books[i].pages);
    }

    sort_books_by_title(books, num_books);

    printf("\nBooks sorted in descending order by title:\n");
    for (i = 0; i < num_books; i++) {
        printf("\nBid: %d\nTitle: %s\nPrice: %.2f\nPages: %d\n", books[i].bid, books[i].title, books[i].price, books[i].pages);
    }

    return 0;
}
