#include <stdio.h>

int main() {
    int valores[] = {10,9,8,7,6,5,4,3,2,1};
    int *pvalores = valores;
    for(int i = 0; i <= 9; i++){
        if(*pvalores < 10){
            printf("%d  (%p)\n", *pvalores, pvalores);
        } else {
            printf("%d (%p)\n", *pvalores, pvalores);
        }
        pvalores++;
    }

    return 0;
}