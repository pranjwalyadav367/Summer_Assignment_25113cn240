   //Write a program to Create student record management system
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int rollNo;
    char name[50];
    float gpa;
};

void addStudent(struct Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("\nDatabase is full!\n");
        return;
    }
    
    printf("\nEnter Roll Number: ");
    scanf("%d", &students[*count].rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]s", students[*count].name);
    printf("Enter GPA: ");
    scanf("%f", &students[*count].gpa);
    
    (*count)++;
    printf("\nStudent added successfully!\n");
}

void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("\nNo student records found.\n");
        return;
    }
    
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < count; i++) {
        printf("Roll No: %d | Name: %s | GPA: %.2f\n", 
               students[i].rollNo, students[i].name, students[i].gpa);
    }
}

void searchStudent(struct Student students[], int count) {
    if (count == 0) {
        printf("\nNo records available to search.\n");
        return;
    }
    
    int roll, found = 0;
    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);
    
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            printf("\nRecord Found:\n");
            printf("Roll No: %d\nName: %s\nGPA: %.2f\n", 
                   students[i].rollNo, students[i].name, students[i].gpa);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("\nStudent with Roll Number %d not found.\n", roll);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;
    
    do {
        printf("\n=== Student Record System ===");
        printf("\n1. Add Student");
        printf("\n2. Display All Students");
        printf("\n3. Search Student");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                searchStudent(students, count);
                break;
            case 4:
                printf("\nExiting program.\n");
                break;
            default:
                printf("\nInvalid choice! Try again.\n");
        }
    } while (choice != 4);
    
    return 0;
}
