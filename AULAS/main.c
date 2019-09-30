#include<stdio.h>
#include <stdlib.h>
#include "pilhas_int.h"

int main() {

  int *numeros;
  int valor;
  int i = 0;

  numeros = malloc(4*sizeof(int));

  numeros[0] = 1;
  numeros[1] = 2;
  numeros[2] = 3;

  cria_pilha();

  empilha(1);
  empilha(2);
  empilha(3);
  empilha(4);


  if (desempilha(&valor)){
    while (desempilha(&valor)) {
      printf("%d\n",valor);
    }
  } else {
    printf("Não deu certo!\n");
  }


}
