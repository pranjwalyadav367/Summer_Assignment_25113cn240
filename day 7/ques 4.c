#include <stdio.h>
int reverse(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    return reverse(n / 10, rev * 10 + n % 10);
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Reversed number: %d\n", reverse(number, 0));
    return 0;
}
