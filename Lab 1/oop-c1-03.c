#include <stdio.h>

struct book {
    int book_id;
    char title[100];
    char name[100];
    float price;
};

int main() {
    struct book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.book_id);

    printf("Enter Title: ");
    scanf("%s", b.title);

    printf("Enter Author Name: ");
    scanf("%s", b.name);

    printf("Enter Price: ");
    scanf("%f", &b.price);

    printf("\n----Book Details----\n");
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author Name: %s\n", b.name);
    printf("Price: %.2f\n", b.price);

    return 0;
}