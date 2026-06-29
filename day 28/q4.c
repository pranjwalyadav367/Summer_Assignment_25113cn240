//Write a program to Create contact management system.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

void addContact() {
    FILE *fp = fopen("contacts.dat", "ab");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }
    
    struct Contact c;
    printf("Enter Name: ");
    scanf(" %[^\n]", c.name);
    printf("Enter Phone: ");
    scanf("%s", c.phone);
    printf("Enter Email: ");
    scanf("%s", c.email);
    
    fwrite(&c, sizeof(struct Contact), 1, fp);
    fclose(fp);
    printf("Contact added successfully!\n");
}

void displayContacts() {
    FILE *fp = fopen("contacts.dat", "rb");
    if (fp == NULL) {
        printf("No contacts found.\n");
        return;
    }
    
    struct Contact c;
    printf("\n--- Contact List ---\n");
    while (fread(&c, sizeof(struct Contact), 1, fp)) {
        printf("Name: %s\n", c.name);
        printf("Phone: %s\n", c.phone);
        printf("Email: %s\n", c.email);
        printf("--------------------\n");
    }
    fclose(fp);
}

void searchContact() {
    FILE *fp = fopen("contacts.dat", "rb");
    if (fp == NULL) {
        printf("No contacts found.\n");
        return;
    }
    
    char searchName[50];
    struct Contact c;
    int found = 0;
    
    printf("Enter name to search: ");
    scanf(" %[^\n]", searchName);
    
    while (fread(&c, sizeof(struct Contact), 1, fp)) {
        if (strcasecmp(c.name, searchName) == 0) {
            printf("\nContact Found:\n");
            printf("Name: %s\n", c.name);
            printf("Phone: %s\n", c.phone);
            printf("Email: %s\n", c.email);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Contact not found.\n");
    }
    fclose(fp);
}

int main() {
    int choice;
    
    while (1) {
        printf("\n*** Contact Management System ***\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
