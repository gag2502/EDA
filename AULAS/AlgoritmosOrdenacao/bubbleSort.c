#include <stdio.h>

void troca (int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubble_sort(int *v, int n){

  int inversao;
  int aux = 0;

  do {
      inversao = 0;
      for(int i = 1; i < n; i++){
          if(v[i] < v[i - 1]){
              troca(&v[i],&v[i-1]);
              inversao = 1;
          }
      }
  }while(inversao);

   while (aux < n){
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

  bubble_sort(vetor,3);

}