#include <stdio.h>

int buscaBinaria(int *v, int n, int x) {
    int e,d,m; //esquerda, direita, meio
    e = -1;
    d = n;

    while(e < d-1){
        m = (e+d)/2;
        if(v[m] < x)
            e = m;
        else
            d = m;
    }
    return d;
}

int main () {
    int vetor[5];

    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;
    vetor[3] = 4;
    vetor[4] = 5;
    printf("%d\n", buscaBinaria(vetor, 5, 11));

}
