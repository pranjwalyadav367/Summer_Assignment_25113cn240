//Write a program to Create bank account system
#include <stdio.h>
#include <string.h>

struct Account {
    int accountNumber;
    char name[50];
    double balance;
};

void createAccount(struct Account accounts[], int *count) {
    struct Account newAcc;
    
    printf("\nEnter Account Number: ");
    scanf("%d", &newAcc.accountNumber);
    
    printf("Enter Name: ");
    scanf(" %[^\n]", newAcc.name);
    
    newAcc.balance = 0.0;
    
    accounts[*count] = newAcc;
    (*count)++;
    
    printf("Account created successfully!\n");
}

void deposit(struct Account accounts[], int count) {
    int accNum;
    double amount;
    int found = 0;
    
    printf("\nEnter Account Number: ");
    scanf("%d", &accNum);
    
    for (int i = 0; i < count; i++) {
        if (accounts[i].accountNumber == accNum) {
            printf("Enter Deposit Amount: ");
            scanf("%lf", &amount);
            
            if (amount > 0) {
                accounts[i].balance += amount;
                printf("Successfully deposited $%.2f. New Balance: $%.2f\n", amount, accounts[i].balance);
            } else {
                printf("Invalid amount.\n");
            }
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Account not found.\n");
    }
}

void withdraw(struct Account accounts[], int count) {
    int accNum;
    double amount;
    int found = 0;
    
    printf("\nEnter Account Number: ");
    scanf("%d", &accNum);
    
    for (int i = 0; i < count; i++) {
        if (accounts[i].accountNumber == accNum) {
            printf("Enter Withdrawal Amount: ");
            scanf("%lf", &amount);
            
            if (amount > 0 && amount <= accounts[i].balance) {
                accounts[i].balance -= amount;
                printf("Successfully withdrew $%.2f. New Balance: $%.2f\n", amount, accounts[i].balance);
            } else if (amount > accounts[i].balance) {
                printf("Insufficient balance.\n");
            } else {
                printf("Invalid amount.\n");
            }
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Account not found.\n");
    }
}

void checkBalance(struct Account accounts[], int count) {
    int accNum;
    int found = 0;
    
    printf("\nEnter Account Number: ");
    scanf("%d", &accNum);
    
    for (int i = 0; i < count; i++) {
        if (accounts[i].accountNumber == accNum) {
            printf("\n--- Account Details ---\n");
            printf("Account Number: %d\n", accounts[i].accountNumber);
            printf("Holder Name: %s\n", accounts[i].name);
            printf("Current Balance: $%.2f\n", accounts[i].balance);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Account not found.\n");
    }
}

int main() {
    struct Account accounts[100];
    int count = 0;
    int choice;
    
    while (1) {
        printf("\n=== BANKING SYSTEM ===\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                createAccount(accounts, &count);
                break;
            case 2:
                deposit(accounts, count);
                break;
            case 3:
                withdraw(accounts, count);
                break;
            case 4:
                checkBalance(accounts, count);
                break;
            case 5:
                printf("Thank you for using our system.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    
    return 0;
}
