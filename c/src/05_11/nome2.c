#include <stdio.h>

int main() {
    char nome[20];
    printf("Digite o seu nome: ");
    scanf("%[^\n]s", &nome);
    printf("O seu nome por acaso seria %s?\n", nome);
    return 0;
}