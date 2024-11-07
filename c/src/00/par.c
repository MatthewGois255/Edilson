#include <stdio.h>

int main () {
    int num;

    printf("Número:\n");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O número não é impar\n");
    } else {
        printf("O número não é par\n");
    }

    return 0;
}
