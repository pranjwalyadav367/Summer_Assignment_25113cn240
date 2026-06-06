//Write a program to Find x^n without pow().
#include <stdio.h>
int main() {
    double base, result = 1.0;
    int exp, i;
    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (n): ");
    scanf("%d", &exp);
    if (exp >= 0) {
        for (i = 0; i < exp; i++) {
            result *= base;
        }
    } else {
        for (i = 0; i > exp; i--) {
            result /= base;
        }
    }
    printf("Result: %.2lf\n", result);
    return 0;
}
