//Write a program to Write function to find maximum 
#include <stdio.h>
int findMax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    }
    return num2;
}
int main() {
    int a ,b ;
   printf("enter the first num");
   scanf("%d",&a);
   printf("enter the second num");
   scanf("%d",&b);
    int max = findMax(a, b);
    printf("Maximum is: %d\n", max);
    return 0;
}
