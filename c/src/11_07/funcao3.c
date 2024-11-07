#include <stdio.h>
#include "../../lib/calculos.h"

int main() {
    int valores[] = {4,53,43,21,5,67,2,34};
    printf("%d\n", somaarray(valores, 8));
    printf("%d\n", mediaarray(valores, 8));
    printf("%d\n", maiorvalor(valores, 8));
    return 0;
}