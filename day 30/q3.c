//Write a program to Create mini employee management system
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee {
    int id;
    char name[50];
    float salary;
};

struct Employee emp[MAX];
int count = 0;

void addEmployee() {
    if (count >= MAX) {
        printf("System full.\n");
        return;
    }
    printf("Enter ID: ");
    scanf("%d", &emp[count].id);
    getchar();
    printf("Enter Name: ");
    fgets(emp[count].name, sizeof(emp[count].name), stdin);
    emp[count].name[strcspn(emp[count].name, "\n")] = 0;
    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);
    count++;
    printf("Employee added successfully.\n");
}

void displayEmployees() {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }
    printf("\nID\tName\t\tSalary\n");
    printf("----------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%-15s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }
}

void searchEmployee() {
    int id, found = 0;
    printf("Enter ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("\nID: %d\nName: %s\nSalary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee not found.\n");
    }
}

void deleteEmployee() {
    int id, found = 0;
    printf("Enter ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                emp[j] = emp[j + 1];
            }
            count--;
            found = 1;
            printf("Employee deleted successfully.\n");
            break;
        }
    }
    if (!found) {
        printf("Employee not found.\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: deleteEmployee(); break;
            case 5: return 0;
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}
