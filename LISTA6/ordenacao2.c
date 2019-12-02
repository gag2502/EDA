#include <stdio.h>
#include <stdlib.h>

void shellSort(int *vet, int size) {
    int i , j , value, aux = 0;
    int gap = 1;
    while(gap < size) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < size; i++) {
            value = vet[i];
            j = i - gap;
            while (j >= 0 && value < vet[j]) {
                vet [j + gap] = vet[j];
                j -= gap;
            }
            vet [j + gap] = value;
        }
    }

    while (aux < size - 1){
      printf("%d ",vet[aux]);
      aux++;
    }
    printf("%d\n",vet[aux]);

}

int main() {

  int i = 0;
  int tamanho;

  scanf("%d",&tamanho);
  int *vetor = malloc(tamanho*sizeof(int));
  while ( i < tamanho) {
    scanf("%d",&vetor[i]);
    i++;
  }

  shellSort(vetor,i);

}
