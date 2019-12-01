#include <stdio.h>

void troca (int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void insertion_sort(int *v, int n){

  if ( n > 1) {
      insertion_sort(v, n-1);
      int j = n;
      while(j >= 1 && v[j] < v[j- 1]){
        troca(&v[j], &v[j- 1]);
        j--;
      }

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