//Write a program to Merge arrays.
#include <stdio.h>
int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = size1 + size2;
    
    int merged[size3];
    
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }
    
    printf("Merged Array: ");
    for (int i = 0; i < size3; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}
