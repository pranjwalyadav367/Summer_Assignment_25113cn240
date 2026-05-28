/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main() {
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    
    do {
        n /= 10;
        ++count;
    } while (n != 0);

    printf("Number of digits: %d\n", count);

    return 0;
}

