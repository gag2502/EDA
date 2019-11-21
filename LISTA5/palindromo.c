#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int *pilha;
static int N, topo;

int cria_pilha1(int n){
  N = n;
  topo = 0;
  pilha = malloc(N*sizeof(int));
  if(pilha == NULL)
    return 0; // deu errado
  return 1;
}

int empilha1(char y){
  if(topo < N)
    pilha[topo++] = y;
  else {
    pilha = realloc(pilha,2*N);
    if (pilha == NULL)
      return 0;
    pilha[topo++] = y;
  }
  return 1;
}

int desempilha1(char *y){
  if ( pilha != NULL ) {
    if(!topo)
      return 0;
    *y = pilha[--topo];
    return 1;
  }
  else
    return - 1;
}

int cria_pilha2(int n){
  N = n;
  topo = 0;
  pilha = malloc(N*sizeof(int));
  if(pilha == NULL)
    return 0; // deu errado
  return 1;
}

int empilha2(char y){
  if(topo < N)
    pilha[topo++] = y;
  else {
    pilha = realloc(pilha,2*N);
    if (pilha == NULL)
      return 0;
    pilha[topo++] = y;
  }
  return 1;
}

int desempilha2(char *y){
  if ( pilha != NULL ) {
    if(!topo)
      return 0;
    *y = pilha[--topo];
    return 1;
  }
  else
    return - 1;
}

  void palindromo (int tamanho, char *palavra) {

    int j = tamanho - 1;
    int k = 0;
    int a = 1;
    int b = 1;
    int ret1;
    int ret2;
    char *palavra1;
    char *palavra2;
    char letra1;
    char letra2;

    for (int i = 0; tamanho/2;i++){
      empilha1(palavra[j]);
      empilha2(palavra[k]);
        j--;
        k++;
    }

    ret1 = desempilha1(&letra1);
    if (ret1 == 1){
      palavra1[0] = letra1;
      while (desempilha1(&letra1)) {
        palavra1[a] = letra1;
        a++;
      }
    }

    ret2 = desempilha2(&letra2);
    if (ret2 == 1){
      palavra2[0] = letra2;
      while (desempilha2(&letra2)) {
        palavra2[b] = letra2;
        b++;
      }
    }

    if(strcmp(palavra1,palavra2))
      printf("0\n");
    else
      printf("1\n");
  }

  int main () {
    cria_pilha1(4);
    cria_pilha2(4);
    palindromo(4,"abba");
  }
