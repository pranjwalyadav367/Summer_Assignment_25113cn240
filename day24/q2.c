//Write a program to Compress a string
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "aaabbcccc";
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && s[i] == s[i+1]) {
            count++;
            i++;
        }
        printf("%c%d", s[i], count);
    }
    printf("\n");
    return 0;
}