#include <stdio.h>

int buscaSequencial (int *v, int x, int n) {
    for (int i = 0; i < n; i++){
        if(v[i] == x)
            printf("%d\n", i);
    }
    return -1;
}

int main () {
    int vetor[5];

    vetor[0] = 3;
    vetor[1] = 5;
    vetor[2] = 8;
    vetor[3] = 2;
    vetor[4] = 7;

    buscaSequencial(vetor, 8, 5);
}
