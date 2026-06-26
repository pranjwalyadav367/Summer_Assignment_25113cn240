//Write a program to Create number guessing game.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_num, guess, attempts = 0;

    srand(time(0));
    secret_num = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret_num) {
            printf("Too high! Try again.\n");
        } else if (guess < secret_num) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
        }
    } while (guess != secret_num);

    return 0;
}
