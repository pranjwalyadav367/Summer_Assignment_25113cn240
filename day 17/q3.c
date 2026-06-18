//Write a program to Intersection of arrays.
#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 2, 1};
    int b[] = {3, 2, 2, 3, 4};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    int res[100];
    int res_size = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                int duplicate = 0;
                for (int k = 0; k < res_size; k++) {
                    if (res[k] == a[i]) {
                        duplicate = 1;
                        break;
                    }
                }
                if (!duplicate) {
                    res[res_size] = a[i];
                    res_size++;
                }
                break;
            }
        }
    }
    printf("Intersection: ");
    for (int i = 0; i < res_size; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");

    return 0;
}
