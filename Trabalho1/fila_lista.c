#include <stdio.h>
#include <stdlib.h>
#include "fila_lista.h"

#define N 5

typedef struct Fila {
  int dado;
  struct Fila *prox;
}Fila;

Fila *fila;

int cria_fila(){
  fila = malloc(sizeof(Fila));
  if (fila == NULL){
    printf("Deu ruim!\n");
  }
  fila->prox = fila;
}
int enfileira(int x){
  Fila *novo = malloc(sizeof(Fila));
  novo->prox = fila->prox;
  fila->prox = novo;
  fila->dado = x;
  fila = novo;
}

int desenfileira(int *x){
  Fila *lixo = malloc(sizeof(Fila));
  if(lixo == NULL){
    return 0;
    fila->prox = lixo->prox;
    *x = lixo->dado;
    free(lixo);
    return 1;
  }
}

int redimensiona(){

}

int filaCheia(){

}

int filaVazia(){
  if(fila->prox == fila){
    return 1;
  }
  return 0;
}

void imprimeFila() {
  printf (" -----");
   for (Fila *f = fila->prox; f != fila; f = f->prox) printf ("------");
  printf ("\n|");
   for (Fila *f = fila->prox; f != fila; f = f->prox) printf (" %3d |", f->dado);
  printf ("\n");
  printf (" -----");
  // for (Fila *f = fila->prox; f != fila; f = f->prox) printf ("------");
  printf ("\n");

     printf ("   ");
     printf ("p");
     for (Fila *f = fila->prox; f != fila; f = f->prox){
       printf("    ");
     }
     printf("u");

     printf ("\n");

}
