//Write a program to Find longest word
#include <stdio.h>
#include <string.h>
int main() {
    char s[] = " My mentor is a nice guy";
    int len = 0, maxLen = 0, start = 0, maxStart = 0;
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] != ' ') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            start = i + 1;
            len = 0;
        }
        i++;
    }
    if (len > maxLen) {
        maxLen = len;
        maxStart = start;
    }
    printf("Longest word: %.*s\n", maxLen, s + maxStart);
    return 0;
}
