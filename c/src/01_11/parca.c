#include <stdio.h>

int main() {
    int n[] = {3,8,7,11,54,77,13,16};
    int p;
    printf("Pares: ");
    for(p = 0; p <= 7; p++) {
        if(n[p] % 2 == 0) {
            printf("%d", n[p]);
            if (p == 7){
                printf("\n");
                break;
            }
            printf(", ");
        }
    }

    printf("Impares: ");
    int s;
    for(s = 0; s <= 7; s++) {
        if(n[s] % 2 != 0) {
            printf("%d", n[s]);
            if (s == 6){
                // eu inicialmente coloquei igual a 7 e o programa adicionou ', ' no final. Com 6 deu certo
                printf("\n");
                break;
            }
            printf(", ");
        }
    }

    return 0;
}