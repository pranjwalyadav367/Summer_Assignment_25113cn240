//Write a program to Find common elements.
#include <stdio.h>
int main() {
    int arr1[] = {1, 2, 4, 5, 6, 2};
    int arr2[] = {2, 3, 5, 7, 2, 8};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("Common elements: ");
    for (int i = 0; i < n1; i++) {
        int is_duplicate = 0;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                is_duplicate = 1;
                break;
            }
        }
        
        if (is_duplicate) {
            continue;
        }
        
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    
    printf("\n");
    return 0;
}
