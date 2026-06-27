//Write a program to Create salary management system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float basic_salary;
    float hra;
    float da;
    float pf;
    float gross_salary;
    float net_salary;
};

void calculate_salary(struct Employee *emp) {
    emp->hra = emp->basic_salary * 0.15;
    emp->da = emp->basic_salary * 0.20;
    emp->pf = emp->basic_salary * 0.10;
    emp->gross_salary = emp->basic_salary + emp->hra + emp->da;
    emp->net_salary = emp->gross_salary - emp->pf;
}

int main() {
    struct Employee emp[100];
    int count = 0;
    int choice;
    int search_id;
    int found;

    while (1) {
        printf("\n--- SALARY MANAGEMENT SYSTEM ---\n");
        printf("1. Add Employee Record\n");
        printf("2. Display All Salary Slips\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count >= 100) {
                    printf("\nSystem full. Cannot add more employees.\n");
                    break;
                }
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[count].id);
                printf("Enter Employee Name: ");
                scanf(" %[^\n]s", emp[count].name);
                printf("Enter Basic Salary: ");
                scanf("%f", &emp[count].basic_salary);
                
                calculate_salary(&emp[count]);
                count++;
                printf("\nRecord added successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("\nNo employee records found.\n");
                    break;
                }
                for (int i = 0; i < count; i++) {
                    printf("\n-----------------------------------\n");
                    printf("ID: %d\n", emp[i].id);
                    printf("Name: %s\n", emp[i].name);
                    printf("Basic Salary:  $%.2f\n", emp[i].basic_salary);
                    printf("HRA (15%%):     $%.2f\n", emp[i].hra);
                    printf("DA (20%%):      $%.2f\n", emp[i].da);
                    printf("PF (10%%):      $%.2f\n", emp[i].pf);
                    printf("Gross Salary:  $%.2f\n", emp[i].gross_salary);
                    printf("Net Salary:    $%.2f\n", emp[i].net_salary);
                    printf("-----------------------------------\n");
                }
                break;

            case 3:
                if (count == 0) {
                    printf("\nNo records available to search.\n");
                    break;
                }
                printf("\nEnter Employee ID to search: ");
                scanf("%d", &search_id);
                found = 0;
                for (int i = 0; i < count; i++) {
                    if (emp[i].id == search_id) {
                        printf("\nRecord Found:\n");
                        printf("-----------------------------------\n");
                        printf("ID: %d\n", emp[i].id);
                        printf("Name: %s\n", emp[i].name);
                        printf("Basic Salary:  $%.2f\n", emp[i].basic_salary);
                        printf("Gross Salary:  $%.2f\n", emp[i].gross_salary);
                        printf("Net Salary:    $%.2f\n", emp[i].net_salary);
                        printf("-----------------------------------\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("\nEmployee ID %d not found.\n", search_id);
                }
                break;

            case 4:
                exit(0);

            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }
    return 0;
}
