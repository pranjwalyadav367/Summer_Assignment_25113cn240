//Write a program to Rotate array right
#include <stdio.h>
void rotateRight(int arr[], int size, int k) {
    k = k % size;
    for (int i = 0; i < k; i++) {
        int last = arr[size - 1];
        for (int j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    rotateRight(arr, size, k);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
