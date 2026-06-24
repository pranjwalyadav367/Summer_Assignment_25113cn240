//Write a program to Remove duplicate characters.
#include <stdio.h>
#include <string.h>
int main() {
    char s[] = "Glbiaaan";
    int index = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (s[i] == s[j])
                break;
        }
        if (j == i) {
            s[index++] = s[i];
        }
    }
    s[index] = '\0';
    printf("%s\n", s);
    return 0;
}
