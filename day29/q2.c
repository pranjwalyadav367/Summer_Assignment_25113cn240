//Write a program to Create menu-driven array operations system
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void display(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insert(int arr[], int n, int element, int pos) {
    if (n >= MAX) {
        printf("Array overflow.\n");
        return n;
    }
    if (pos < 0 || pos > n) {
        printf("Invalid position.\n");
        return n;
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    printf("Element inserted.\n");
    return n + 1;
}

int delete(int arr[], int n, int pos) {
    if (n == 0) {
        printf("Array underflow.\n");
        return n;
    }
    if (pos < 0 || pos >= n) {
        printf("Invalid position.\n");
        return n;
    }
    printf("Deleted element: %d\n", arr[pos]);
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}

int search(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[MAX];
    int n = 0;
    int choice, element, pos, index;

    while (1) {
        printf("\n--- ARRAY OPERATIONS ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position (0 to %d): ", n);
                scanf("%d", &pos);
                n = insert(arr, n, element, pos);
                break;

            case 2:
                printf("Enter position to delete (0 to %d): ", n - 1);
                scanf("%d", &pos);
                n = delete(arr, n, pos);
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d", &element);
                index = search(arr, n, element);
                if (index != -1) {
                    printf("Element found at index %d\n", index);
                } else {
                    printf("Element not found.\n");
                }
                break;

            case 4:
                display(arr, n);
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
