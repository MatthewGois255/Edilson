#include <stdio.h>

int modulus(int a, int b);

int main() {
    printf("%d\n", modulus(10, 5));
    return 0;
}

int modulus(int a, int b) {
    return a % b;
} 