//Write a program to Print repeated character pattern.
//A
//BB
//CCC
//DDDD
//EEEEE
#include <stdio.h>
int main() {
    int i, j;
    int rows = 5;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + i - 1);
        }
        printf("\n");
    }

    return 0;
}
