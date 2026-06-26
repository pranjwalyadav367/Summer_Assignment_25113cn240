//Write a program to Create ATM simulation.
#include <stdio.h>

int main() {
    int pin ;
    int entered_pin;
    int choice;
    int attempts = 0;
    float balance = 5000.0;
    float amount;
    printf("Enter the pin");
    scanf("%d",&pin);
    while (attempts < 3) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &entered_pin);
        
        if (entered_pin == pin) {
            break;
        } else {
            attempts++;
            printf("Incorrect PIN. Attempts remaining: %d\n\n", 3 - attempts);
        }
    }

    if (attempts == 3) {
        printf("Too many incorrect attempts. Card locked.\n");
        return 0;
    }

    while (1) {
        printf("\n*** ATM MENU ***\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("$%.2f deposited successfully.\n", amount);
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient balance.\n");
                } else if (amount <= 0) {
                    printf("Invalid withdrawal amount.\n");
                } else {
                    balance -= amount;
                    printf("$%.2f withdrawn successfully.\n", amount);
                }
                break;

            case 4:
                printf("Thank you for using our ATM. Goodbye!\n");
                return 0;

            default:
                printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}
