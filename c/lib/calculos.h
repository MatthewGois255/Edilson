int somaarray(int n[], int qtd) {
    int rs = 0;
    int ps;
    for(ps = 0; ps < qtd; ps++){
        rs = rs + n[ps];
    }
    return rs;
}

int mediaarray(int n[], int qtd) {
    int rs = 0;
    int ps;
    for(ps = 0; ps < qtd; ps++){
        rs = rs + n[ps];
    }
    return rs/qtd;
}

int maiorvalor(int n[], int qtd) {
    int m = n[0];
    int ps;
    for(ps = 1; ps < qtd; ps++) {
        if(n[ps] > m) {
            m = n[ps];
        }
    }
    return m;
}