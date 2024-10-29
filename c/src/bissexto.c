#include <stdio.h>

int main() {
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    if(ano % 4 == 0) {
        printf("É bissexto");
    } else {
        printf("Não é bissexto");
    }
    return 0;
}