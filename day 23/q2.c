//Write a program to Find first repeating character
#include <stdio.h>
int main() {
    char str[100];
    int count[256] = {0};
    char result = '\0';

    printf("Enter a string: ");
    scanf("%99s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            result = str[i];
            break;
        }
        count[(unsigned char)str[i]] = 1;
    }

    if (result != '\0') {
        printf("First repeating character: %c\n", result);
    } else {
        printf("No repeating character found.\n");
    }

    return 0;
}
