#include <stdio.h>

int main() {
    int idade = 18;
    int *p_idade = &idade;
    printf("%d, %p, %p\n", *p_idade, p_idade, &idade);
    *p_idade+=1;
    printf("%d\n", *p_idade);
    return 0;
}