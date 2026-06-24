//Write a program to Find maximum occurring character
#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;
    int max_idx = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] > freq[max_idx]) {
            max_idx = i;
        }
    }

    printf("Maximum occurring character: '%c' (repeats %d times)\n", max_idx, freq[max_idx]);

    return 0;
}
