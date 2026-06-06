#include <stdio.h>
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main() {
    int num = 29;
    printf("%d", countSetBits(num));
    return 0;
}
