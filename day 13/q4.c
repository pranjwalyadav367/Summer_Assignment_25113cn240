//Write a program to Count even and odd elements.
#include <stdio.h>
int main() {
    int arr[100];
    int size, i;
    int even = 0;
    int odd = 0;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d\n", odd);

    return 0;
}
