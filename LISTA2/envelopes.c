/*Gabriela Alves da Gama
Universidade de Brasília - UnB Campus Gama (FGA)*/

#include <stdio.h>
#include <stdlib.h>

int main () {
  int N,K;
  int i = 0,j,l,n;
  int envelopes = 0;

  scanf("%d %d", &N,&K);

//  int rotulos[N];
  int X[N];
  scanf("%d",&X[N]);
  /*for (i = 0; i <= N; i++){
      rotulos [i] = scanf("%d",&X[i]);
    }*/


  while (i < N) {
    printf("%d\n", X[i]);
      i++;
  }

  for (j = 0; j <= N; j++){
    for (l = 0; l <= K; l++){
      if (X[j] == X[j-1])
        envelopes = envelopes + 1;
      }
  }
  //printf("%d\n",X[10]);



}

/*Primeiramente, eu não consegui achar um jeito de ler vários números numa mesma linha.
Depois, eu pensei em comparar o dígito a dígito armazenado num vetor de inteiros.
Eu vi que eu poderia ter alocado memória dinamicamente, mas estou com dúvidas
de como usar a função malloc.
Eu acho que teria que ver qual o dígito ele digitou o menor número de vezes, porque
esse determina o número de envelopes. No caso de "1 1 1 1 1 2 2 2 2 2" o menor número
de vezes seria o próprio 5.*/
