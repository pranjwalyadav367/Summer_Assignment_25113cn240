//Write a program to Write function for Armstrong
#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int originalNum = num;
    int digits = 0;
    int sum = 0;

    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }
    originalNum = num;
    while (originalNum != 0) {
        int remainder = originalNum % 10;
        sum += pow(remainder, digits);
        originalNum /= 10;
    }

    return (sum == num);
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
