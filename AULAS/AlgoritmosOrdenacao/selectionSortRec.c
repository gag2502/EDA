#include <stdio.h>

void troca (int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selection_sort(int *v, int i, int n){

    if(i<n){
        int menor = i;
        for (int j = i + 1; j < n; j++){
            if (v[j] < v[menor])
                menor = j;
        }
        troca(&v[i],&v[menor]);
        printf("%d\n",v[i]);
        selection_sort(v , i+1, n);

    }

}


int main() {

  int i = 0;
  int num;
  int vetor[3];


  vetor[0] = 13;
  vetor[1] = 62;
  vetor[2] = 50;

  selection_sort(vetor,0,3);

}