#include <stdio.h>
#include <string.h>

#define MAX_DEVOTEES 100

struct Devotee {
    char name[50];
    char date[12];
    char time[10];
    double cash;
    double gold;
};

struct Devotee templeLog[MAX_DEVOTEES];
int totalDevotees = 0;

void addDevotee() {
    if (totalDevotees >= MAX_DEVOTEES) {
        printf("\nLog is full!\n");
        return;
    }

    struct Devotee d;

    printf("\nEnter Devotee Name: ");
    scanf(" %[^\n]s", d.name);
    printf("Enter Date (DD/MM/YYYY): ");
    scanf("%s", d.date);
    printf("Enter Time (HH:MM): ");
    scanf("%s", d.time);
    printf("Enter Cash Offering (INR): ");
    scanf("%lf", &d.cash);
    printf("Enter Gold Offering (Grams): ");
    scanf("%lf", &d.gold);

    templeLog[totalDevotees] = d;
    totalDevotees++;
    printf("\nOffering recorded successfully!\n");
}

void displaySummary() {
    double totalCash = 0;
    double totalGold = 0;

    printf("\n--- DEVOTEE OFFERINGS LOG ---\n");
    for (int i = 0; i < totalDevotees; i++) {
        printf("\nDonor: %s\n", templeLog[i].name);
        printf("Date: %s | Time: %s\n", templeLog[i].date, templeLog[i].time);
        printf("Cash: %.2f INR | Gold: %.2f grams\n", templeLog[i].cash, templeLog[i].gold);
        printf("-----------------------------\n");

        totalCash += templeLog[i].cash;
        totalGold += templeLog[i].gold;
    }

    printf("\n========== TOTAL COLLECTION ==========\n");
    printf("Total Cash Collected: %.2f INR\n", totalCash);
    printf("Total Gold Collected: %.2f grams\n", totalGold);
    printf("Total Devotees Visited: %d\n", totalDevotees);
    printf("======================================\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n*** TEMPLE MANAGEMENT SYSTEM ***\n");
        printf("1. Record New Offering\n");
        printf("2. View Collection Summary\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            addDevotee();
        } else if (choice == 2) {
            displaySummary();
        } else if (choice == 3) {
            printf("\nExiting System.\n");
            break;
        } else {
            printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}