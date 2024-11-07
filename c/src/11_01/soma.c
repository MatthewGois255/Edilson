#include <stdio.h>

int main() {
    int n[] = {13,8,23,95,47,14,10,45,165};
    
    int p, m = 0;
    for(p = 0; p <= 8; p++) {
        m = m + n[p];
    }
    printf("%d\n", m);
    return 0;
}