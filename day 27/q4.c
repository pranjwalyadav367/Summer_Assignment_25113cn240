//Write a program to Create marksheet generation system
#include <stdio.h>

int main() {
    char name[50];
    int roll;
    float math, science, english, total, percentage;
    char grade;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Maths Marks: ");
    scanf("%f", &math);

    printf("Enter Science Marks: ");
    scanf("%f", &science);

    printf("Enter English Marks: ");
    scanf("%f", &english);

    total = math + science + english;
    percentage = total / 3.0;

    if (percentage >= 85) {
        grade = 'A';
    } else if (percentage >= 70) {
        grade = 'B';
    } else if (percentage >= 50) {
        grade = 'C';
    } else if (percentage >= 35) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("\n==================================\n");
    printf("            MARKSHEET             \n");
    printf("==================================\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", roll);
    printf("----------------------------------\n");
    printf("Maths:   %.2f\n", math);
    printf("Science: %.2f\n", science);
    printf("English: %.2f\n", english);
    printf("----------------------------------\n");
    printf("Total Marks: %.2f / 300.00\n", total);
    printf("Percentage:  %.2f%%\n", percentage);
    printf("Final Grade: %c\n", grade);
    printf("==================================\n");

    return 0;
}

