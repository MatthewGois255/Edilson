#include <stdio.h>

int main() {
    int mes;
    printf("Digite o número correspondente ao mês\n-> ");
    scanf("%d", &mes);
    printf("A estação predominante desse mês é: ");
    switch (mes) {
        case 1:
            printf("Verão\n");
            break;
        case 2:
            printf("Verão\n");
            break;
        case 3:
            printf("Verão\n");
            break;
        case 4:
            printf("Outono\n");
            break;
        case 5:
            printf("Outono\n");
            break;
        case 6:
            printf("Outono\n");
            break;
        case 7:
            printf("Inverno\n");
            break;
        case 8:
            printf("Inverno\n");
            break;
        case 9:
            printf("Inverno\n");
            break;
        case 10:
            printf("Primavera\n");
            break;
        case 11:
            printf("Primavera\n");
            break;
        case 12:
            printf("Primavera\n");
            break;
    }

    printf("\n---------- Segundo Código ----------\n\n");

    if(mes == 1 || mes == 2 || mes == 3) {
        printf("VeRãO\n");
    }
    if(mes == 4 || mes == 5 || mes == 6){
        printf("OuToNo\n");
    }
    if(mes == 7 || mes == 8 || mes == 9){
        printf("InVeRnO\n");
    }
    if(mes == 10 || mes == 11 || mes == 12){
        printf("PrImAvErA\n");
    }
    return 0;
}