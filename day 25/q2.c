//Write a program to Find common characters in strings.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Greater Noida";
    char str2[100] = "gautam budh nagar";
    int taken[100] = {0};

    printf("Common characters: ");

    for (int i = 0; str1[i] != '\0'; i++) {
        for (int j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j] && taken[j] == 0) {
                printf("%c ", str1[i]);
                taken[j] = 1;
                break;
            }
        }
    }
    
    printf("\n");
    return 0;
}
