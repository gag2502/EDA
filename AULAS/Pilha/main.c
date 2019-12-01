#include<stdio.h>
#include <stdlib.h>
#include "pilhas_int.h"

void imprime_pilha(int valor){
  int ret;
  ret = desempilha(&valor);
  if ( ret == 1 ) {
    printf("%d\n",valor);
    while (desempilha(&valor)) {
      printf("%d\n",valor);
    }
  }
  else {
    if ( ret == 0 ) {
      printf("Pilha vazia\n");
    }
    else {
      printf( "Pilha nao existe\n" );
    }
  }
}

int main() {

  int numeros[3];
  int valor;
  int i = 0;


  numeros[0] = 1;
  numeros[1] = 2;
  numeros[2] = 3;

 cria_pilha();
 empilha(numeros[0]);
 empilha(numeros[1]);
 empilha(numeros[2]);

 imprime_pilha(valor);

 destroi_pilha();

}
