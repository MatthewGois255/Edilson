#include <stdio.h>

int main() {
    char texto[10];
    scanf("%s", &texto);
    FILE *arquivo;
    arquivo = fopen("src/11_12/texto.txt","w");
    fprintf(arquivo, texto);
    fclose(arquivo);
    printf("Criado\n");
    return 0;
}