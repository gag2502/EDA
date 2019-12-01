#include <stdio.h>

void troca (int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void insertion_sort(int *v, int n){

    int aux = 0;

    for(int i = 1; i < n; i++){
        int j = i;
        while (j >= 1 && v[j] < v[j-1]){
            troca(&v[j],&v[j-1]);
            j--;
        }

    }
    while (aux < n ){
        printf("%d\n",v[aux]);
        aux++;
    }

}


int main() {

  int i = 0;
  int num;
  int vetor[3];


  vetor[0] = 13;
  vetor[1] = 62;
  vetor[2] = 50;

  insertion_sort(vetor,3);

}