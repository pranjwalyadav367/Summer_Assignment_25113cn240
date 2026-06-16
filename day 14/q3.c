//Write a program to Second largest element
#include <stdio.h>
#include <limits.h>
int main() {
    int arr[100];
    int size;
    int i;
    int largest;
    int second_largest;

    printf("Enter the number of elements: ");
    if (scanf("%d", &size) != 1 || size < 2) {
        printf("Invalid size. Please enter at least 2 elements.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    largest = INT_MIN;
    second_largest = INT_MIN;

    for (i = 0; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second_largest);
    }

    return 0;
}
