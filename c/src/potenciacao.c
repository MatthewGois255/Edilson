#include <stdio.h>

int main() {
    int i, g, exp, v = 1, y=1;

// ------------- CALCULAR UM EXPOENTE ESPECÍFICO -------------
    printf("Escolha um número: ");
    scanf("%d", &i);
    printf("Elevar o número a: ");
    scanf("%d", &g);
    printf("\n");

    while (y <= g) {
        exp = i * v;
        v = v * i;
        y++;
    }

    y = 1;
    v = 1;

// ---------------- LISTAR TODOS OS EXPOENTES ----------------
    printf("Escolha um número: ");
    scanf("%d", &i);
    printf("Calcular até o grau: ");
    scanf("%d", &g);
    printf("\n");
    
    while (y <= g) {
        exp = i * v;
        printf("%d^%d = %d\n", i, y, exp);
        v = v * i;
        y++;
    }

    printf("Resultado: %d\n", exp);
    return 0;
}