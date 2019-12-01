#include <stdio.h>
#include <stdlib.h>

void ord_contagem(int *v, int n, int a, int b){

    int *aux = calloc(b-a+1,sizeof(int));
    int x = 0;

    for(int i = 0; i < n; i++ ){
        aux[v[i]-a]++;
    }
    int j = 0;
    for(int i = 0; i < b-a+1;i++){
        while(aux[i]>0){
            v[j] = i + a;
            j++;
            aux[i]--;
        }
    }

     while (x < n ){
        printf("%d\n",v[x]);
        x++;
    }

    free(aux);
}


int main() {

  int i = 0;
  int num;
  int vetor[3];


  vetor[0] = 13;
  vetor[1] = 62;
  vetor[2] = 50;

  ord_contagem(vetor,3,13,62);

}