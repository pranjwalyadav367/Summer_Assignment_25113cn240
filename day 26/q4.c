//Write a program to Create quiz application.
#include <stdio.h>
#include <ctype.h>

int main() {
    char guess;
    int score = 0;

    char questions[][100] = {
        "1. who is the father of indian mathematics?",
        "2. Who is the creator of the C language?",
        "3. Which keyword is used to prevent modification of a variable?"
    };

    char options[][100] = {
        "A)Pranjwal ", "B) Aryabhatta", "C) Yukta", "D) S Ramanujamn",
        "A) Dennis Ritchie", "B) Bjarne Stroustrup", "C) James Gosling", "D) Linus Torvalds",
        "A) static", "B) volatile", "C) const", "D) final"
    };

    char answers[3] = {'B', 'A', 'C'};
    int totalQuestions = sizeof(questions) / sizeof(questions[0]);

    printf("=== WELCOME TO THE QUIZ ===\n\n");

    for (int i = 0; i < totalQuestions; i++) {
        printf("%s\n", questions[i]);

        for (int j = (i * 4); j < (i * 4) + 4; j++) {
            printf("%s\n", options[j]);
        }

        printf("Your answer (A/B/C/D): ");
        scanf(" %c", &guess);
        guess = toupper(guess);

        if (guess == answers[i]) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong! The correct answer was %c.\n\n", answers[i]);
        }
    }

    printf("=== QUIZ OVER ===\n");
    printf("Your final score: %d/%d\n", score, totalQuestions);

    return 0;
}
