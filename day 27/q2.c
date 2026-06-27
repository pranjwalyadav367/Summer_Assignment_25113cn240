//Write a program to Create employee management system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

struct Employee employees[MAX_EMPLOYEES];
int employeeCount = 0;

void addEmployee() {
    if (employeeCount >= MAX_EMPLOYEES) {
        printf("\nSystem full!\n");
        return;
    }
    struct Employee emp;
    printf("\nEnter ID: ");
    scanf("%d", &emp.id);
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].id == emp.id) {
            printf("Error: ID already exists.\n");
            return;
        }
    }
    printf("Enter Name: ");
    scanf(" %[^\n]s", emp.name);
    printf("Enter Department: ");
    scanf(" %[^\n]s", emp.department);
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);
    employees[employeeCount++] = emp;
    printf("Employee added successfully.\n");
}

void displayEmployees() {
    if (employeeCount == 0) {
        printf("\nNo records found.\n");
        return;
    }
    printf("\nID\tName\t\tDepartment\tSalary\n");
    printf("------------------------------------------------\n");
    for (int i = 0; i < employeeCount; i++) {
        printf("%d\t%-15s\t%-15s\t%.2f\n", employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
    }
}

void searchEmployee() {
    if (employeeCount == 0) {
        printf("\nNo records found.\n");
        return;
    }
    int id, found = 0;
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].id == id) {
            printf("\nID: %d\nName: %s\nDepartment: %s\nSalary: %.2f\n", employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee not found.\n");
    }
}

void updateEmployee() {
    if (employeeCount == 0) {
        printf("\nNo records found.\n");
        return;
    }
    int id, found = 0;
    printf("\nEnter Employee ID to update: ");
    scanf("%d", &id);
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].id == id) {
            printf("Enter New Name: ");
            scanf(" %[^\n]s", employees[i].name);
            printf("Enter New Department: ");
            scanf(" %[^\n]s", employees[i].department);
            printf("Enter New Salary: ");
            scanf("%f", &employees[i].salary);
            printf("Record updated successfully.\n");
            found = 1;
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
        printf("\n=== EMPLOYEE MANAGEMENT SYSTEM ===\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: updateEmployee(); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}
