//Write a program to Union of arrays.
#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};
    
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    
    int u[20];
    int k = 0;
    
    for (int i = 0; i < n1; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (u[j] == a[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            u[k++] = a[i];
        }
    }
    
    for (int i = 0; i < n2; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (u[j] == b[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            u[k++] = b[i];
        }
    }
    
    printf("Union: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", u[i]);
    }
    printf("\n");
    
    return 0;
}
