//Write a program to Check string rotation
#include <stdio.h>
#include <string.h>
int main() {
    char s1[] = "ABCD";
    char s2[] = "CDAB";
    char temp[20];
    if (strlen(s1) != strlen(s2)) {
        printf("0\n");
        return 0;
    }
    strcpy(temp, s1);
    strcat(temp, s1);
    if (strstr(temp, s2) != NULL)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
