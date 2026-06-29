//Write a program to Create menu-driven string operations system
#include <stdio.h>
#include <string.h>
void reverse_string(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    int choice;
    char str1[100], str2[100], result[200];

    while (1) {
        printf("\n--- String Operations Menu ---\n");
        printf("1. Concatenate Strings\n");
        printf("2. Compare Strings\n");
        printf("3. Calculate String Length\n");
        printf("4. Reverse String\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        if (scanf("%d", &choice) != 1) {
            break;
        }
        getchar();

        if (choice == 5) {
            printf("Exiting program.\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                strcpy(result, str1);
                strcat(result, str2);
                printf("Concatenated string: %s\n", result);
                break;

            case 2:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                int cmp = strcmp(str1, str2);
                if (cmp == 0) {
                    printf("Strings are equal.\n");
                } else if (cmp > 0) {
                    printf("First string is greater than second string.\n");
                } else {
                    printf("Second string is greater than first string.\n");
                }
                break;

            case 3:
                printf("Enter string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Length of the string: %lu\n", strlen(str1));
                break;

            case 4:
                printf("Enter string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                reverse_string(str1);
                printf("Reversed string: %s\n", str1);
                break;

            default:
                printf("Invalid choice! Please select between 1 and 5.\n");
        }
    }

    return 0;
}
