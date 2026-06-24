//Write a program to Remove spaces from string
#include <stdio.h>
void remove_spaces(char *str) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';
}

int main() {
    char str[] = "G l B a j a j";
    remove_spaces(str);
    printf("%s\n", str);
    return 0;
}
