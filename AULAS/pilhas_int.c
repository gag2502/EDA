#include <stdio.h>
#include <stdlib.h>

static int *pilha;
static int N, topo;

int cria_pilha(){
  N = 10;
  topo = 0;
  pilha = malloc(N*sizeof(int));
  if(pilha == NULL)
    return 0; // deu errado
  return 1;
}

int empilha(int y){
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

int desempilha(int *y){
  if(!topo)
    return 0;
  *y = pilha[--topo];
  return 1;
}

void destroi_pilha() {
  free(pilha);
}
