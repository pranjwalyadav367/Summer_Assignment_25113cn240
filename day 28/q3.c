//Write a program to Create ticket booking system
#include <stdio.h>
#include <string.h>

#define TOTAL_SEATS 20

void displaySeats(int seats[]) {
    printf("\n--- SEAT MAP ---\n");
    for (int i = 0; i < TOTAL_SEATS; i++) {
        if (seats[i] == 0) {
            printf("[ %d ]  ", i + 1);
        } else {
            printf("[ X ]  ", i + 1);
        }
        if ((i + 1) % 5 == 0) {
            printf("\n");
        }
    }
    printf("----------------\n");
}

int main() {
    int seats[TOTAL_SEATS] = {0}; 
    int choice;
    int seatNumber;
    int tickets;
    int bookedCount = 0;

    printf("=== WELCOME TO THE CINEMA ===\n");

    do {
        printf("\n1. View Available Seats\n");
        printf("2. Book a Ticket\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displaySeats(seats);
                break;

            case 2:
                displaySeats(seats);
                printf("\nHow many tickets would you like to book? ");
                scanf("%d", &tickets);

                if (tickets <= 0) {
                    printf("Invalid number of tickets.\n");
                    break;
                }

                for (int i = 0; i < tickets; i++) {
                    if (bookedCount >= TOTAL_SEATS) {
                        printf("\nSorry, the cinema is fully booked!\n");
                        break;
                    }

                    printf("Enter seat number (1 to 20) to book: ");
                    scanf("%d", &seatNumber);

                    if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
                        printf("Invalid seat number. Please try again.\n");
                        i--; 
                    } else if (seats[seatNumber - 1] == 1) {
                        printf("Seat %d is already booked! Please pick another.\n", seatNumber);
                        i--; 
                    } else {
                        seats[seatNumber - 1] = 1;
                        bookedCount++;
                        printf("Seat %d booked successfully!\n", seatNumber);
                    }
                }
                break;

            case 3:
                printf("\nThank you for using the booking system. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice. Please pick from the menu.\n");
        }
    } while (choice != 3);

    return 0;
}

