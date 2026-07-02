//Write a program to Create student record system using arrays and strings
#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student students[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Student\n2. Display All\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count < 100) {
                printf("Enter Roll Number: ");
                scanf("%d", &students[count].roll_no);
                printf("Enter Name: ");
                scanf("%s", students[count].name);
                printf("Enter Marks: ");
                scanf("%f", &students[count].marks);
                count++;
            } else {
                printf("Database full!\n");
            }
        } else if (choice == 2) {
            if (count == 0) {
                printf("No records found.\n");
            } else {
                printf("\n--- Student Records ---\n");
                for (int i = 0; i < count; i++) {
                    printf("Roll No: %d, Name: %s, Marks: %.2f\n", 
                           students[i].roll_no, students[i].name, students[i].marks);
                }
            }
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
