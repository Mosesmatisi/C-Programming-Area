// BOOK 2(USER PROMPT)
#include <stdio.h>
#include <string.h>

struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
} book1;

int main() {
    
    printf("Enter book title: ");
    fgets(book1.title, sizeof(book1.title), stdin);
    
    book1.title[strcspn(book1.title, "\n")] = '\0';

    printf("Enter author name: ");
    fgets(book1.author, sizeof(book1.author), stdin);
    
    book1.author[strcspn(book1.author, "\n")] = '\0';

    printf("Enter publication year: ");
    scanf("%d", &book1.publication_year);
    
    printf("Enter ISBN: ");
    scanf("%s", book1.ISBN);

    printf("Enter price: ");
    scanf("%f", &book1.price);

    printf("\nBook Details:\n");
    printf("Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Publication Year: %d\n", book1.publication_year);
    printf("ISBN: %s\n", book1.ISBN);
    printf("Price: %.2f\n", book1.price);

    return 0;
}