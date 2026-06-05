#include <stdio.h>
int main() {
    long long n;
    long long max_prime = -1;
    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1 || n <= 1) {
        printf("Please enter an integer greater than 1.\n");
        return 1;
    }
    while (n % 2 == 0) {
        max_prime = 2;
        n /= 2;
    }
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            max_prime = i;
            n /= i;
        }
    }

    if (n > 2) {
        max_prime = n;
    }
    printf("Largest prime factor: %lld\n", max_prime);
    return 0;
}
