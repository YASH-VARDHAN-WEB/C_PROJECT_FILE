// Create a Book structure containing book_id, title, author name and price.
// Write a C program to pass a structure as a function argument and print the
// book details.
#include <stdio.h>
struct Book // Structure for book
{
    int book_id;
    char title[50];
    char author[50];
    float price;
} b1;
void Input(struct Book b1) // Function for Input of Book Details
{
    printf("Book ID: \n");
    scanf("%d", &b1.book_id);
    printf("Title: \n");
    scanf("%s", b1.title);
    printf("Author: \n");
    scanf("%s", b1.author);
    printf("Price: \n");
    scanf("%f", &b1.price);
}
void display(struct Book b1) // Function for Displaying Book Details
{
    printf("Book ID: %d\n", b1.book_id);
    printf("Title: %s\n", b1.title);
    printf("Author: %s\n", b1.author);
    printf("Price: %.2f\n", b1.price);
}

int main()
{

    Input(b1);
    display(b1);

    return 0;
}
