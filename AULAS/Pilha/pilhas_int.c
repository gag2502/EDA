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
  if ( pilha != NULL ) {
    if(!topo)
      return 0;
    *y = pilha[--topo];
    return 1;
  }
  else
    return - 1;
}
void imprime_pilha(int valor){
  int ret;
  ret = desempilha(&valor);
  if (ret == 1){
    printf("%d\n",valor);
    while (desempilha(&valor)) {
      printf("%d\n",valor);
    }
  }
  else if (ret == 0) {
    printf("Pilha Vazia\n");
  }
  else {
    printf("Pilha não existe\n");
  }

}

void destroi_pilha() {
  free(pilha);
}
