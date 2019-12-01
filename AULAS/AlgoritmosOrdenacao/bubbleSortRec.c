#include <stdio.h>

void troca (int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubble_sort(int *v, int n){

    if (n == 1)
        return;
    for( int i = 0; i < n - 1 ; i++){
        if(v[i] > v[i+1]){
            troca(&v[i], &v[i+1]);
        }
    }
    bubble_sort(v,n-1);

}

void printArray(int *v, int n)
{
    for (int i=0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}


int main() {

  int i = 0;
  int num;
  int vetor[3];


  vetor[0] = 13;
  vetor[1] = 62;
  vetor[2] = 50;

  bubble_sort(vetor,3);
  printArray(vetor, 3);

}