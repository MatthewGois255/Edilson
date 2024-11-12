#include <stdio.h>

void dados(int *x, int *y) {
    int soma = *x + *y;
    printf("%p, %p\n", x, y);
    printf("%d\n", soma);
    printf("%p\n", &soma);
}

int main() {
    int a = 5;
    int b = 10;
    dados(&a, &b);
    printf("%p, %p\n", &a, &b);
    return 0;
}