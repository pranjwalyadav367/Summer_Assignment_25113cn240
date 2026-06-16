//Write a program to Linear search
#include <stdio.h>
int main() {
    int array[100];
    int size;
    int target;
    int i;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &target);

    for (i = 0; i < size; i++) {
        if (array[i] == target) {
            found = 1;
            break;
        }
    }
    if (found == 1) {
        printf("Element found at index %d\n", i);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
