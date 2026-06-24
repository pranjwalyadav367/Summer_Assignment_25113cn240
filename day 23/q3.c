//Write a program to Check anagram strings
#include <stdio.h>
#include <string.h>
int main() {
    char a[100], b[100];
    int count[256] = {0};
    int i;

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    if (strlen(a) != strlen(b)) {
        printf("Not anagram");
        return 0;
    }

    for (i = 0; a[i] != '\0'; i++) {
        count[(int)a[i]]++;
        count[(int)b[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}