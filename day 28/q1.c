//Write a program to Create library management system
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    int id;
    char title[50];
    char author[50];
    int is_issued;
};

struct Book lib[MAX_BOOKS];
int count = 0;

void addBook() {
    if (count >= MAX_BOOKS) return;
    struct Book b;
    printf("ID: "); scanf("%d", &b.id);
    printf("Title: "); scanf(" %[^\n]s", b.title);
    printf("Author: "); scanf(" %[^\n]s", b.author);
    b.is_issued = 0;
    lib[count++] = b;
}

void showBooks() {
    for (int i = 0; i < count; i++)
        printf("%d | %s | %s | %s\n", lib[i].id, lib[i].title, lib[i].author, 
               lib[i].is_issued ? "Issued" : "Available");
}

int main() {
    int opt;
    do {
        printf("1.Add 2.Show 3.Exit: ");
        scanf("%d", &opt);
        if (opt == 1) addBook();
        else if (opt == 2) showBooks();
    } while (opt != 3);
    return 0;
}
