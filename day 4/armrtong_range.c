#include <stdio.h>
#include <math.h>

int main() {
    int start, end, i, temp, remainder, digits, sum;

    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (i = start; i <= end; i++) {
        temp = i;
        digits = 0;
        sum = 0;

        while (temp > 0) {
            temp /= 10;
            digits++;
        }

        temp = i;

        while (temp > 0) {
            remainder = temp % 10;
            sum += round(pow(remainder, digits));
            temp /= 10;
        }

        if (i == sum) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
s