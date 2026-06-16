//Write a program to Find duplicates in array
#include <stdio.h>
int main() {
    int arr[] = {4, 2, 7, 4, 8, 2, 3, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicate elements: ");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");

    return 0;
}
