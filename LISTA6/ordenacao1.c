#include <stdio.h>
#include <stdlib.h>

void troca (int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selection_sort(int *v, int n){

  int menor;
  int aux = 0;

  for (int i = 0; i < n; i++){
    menor = i;
    for (int j = i; j < n; j++){
      if(v[j] < v[menor])
        menor = j;
    }
    troca(&v[i],&v[menor]);
  }

  while (aux < n - 1){
    printf("%d ",v[aux]);
    aux++;
  }
  printf("%d\n",v[aux]);

}

int main() {

  int i = 0;
  int num;
  int vetor[1000];

  while (scanf("%d",&vetor[i])!=EOF) {
    i++;
  }

  selection_sort(vetor,i);

}
