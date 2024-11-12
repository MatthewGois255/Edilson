#include <stdio.h>

void cadastro(char *nome, char *email, char *idade) {
    FILE *arquivo;
    arquivo = fopen("scr/11_12/cad_cli.txt","a");
    fprintf(arquivo, nome);
    fprintf(arquivo, email);
    fprintf(arquivo, idade);
    fclose(arquivo);
}

int main() {
    char nome[30];
    char email[50];
    char idade[2];
    // printf("Digite seu nome: ");
    // scanf("%[^\n]s", nome);
    printf("Digite seu email: ");
    scanf("%s", email);
    printf("Digite sua idade: ");
    scanf("%s", idade);

    cadastro(nome, email, idade);
    printf("Cadastrou?");
    return 0;
}