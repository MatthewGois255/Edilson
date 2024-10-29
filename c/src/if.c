#include <stdio.h>

int main () {
    int time, num1 = 2, num2 = 11;

    printf("Pra qual time você torce?\n\n(1) Palmeiras\n(2) São Paulo\n(3) COrinthians ... infelizmente\n(4) Outro\n");
    scanf("%d", &time);

    if (num1 < 10) {
        printf("Primeiro if\n");
    }
    while (num2 < 20) {
        printf("pão\n");
        num2++;
    }
    if(num2 > 10) {
        printf("Segundo if\n");
        num1 = 12;
    }
    if(num1 < 10){
        printf("verdade");
    }
    num1 = 9;
    if(num1 < 10) {
        printf("mentira");
    }

    return 0;
}