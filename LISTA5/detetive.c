#include <stdio.h>
#include <stdlib.h>

typedef struct Fila {
  int identificador;
  int valor;
  int proximo;
  struct Fila *prox;
}Fila;

Fila *fila;

int cria_fila(){
  fila = malloc(sizeof(Fila));
  if (fila == NULL){
    printf("Não funcionou!\n");
  }
  fila->prox = fila;
}

int enfileira(int identificador,int valor,int proximo){
  Fila *novo = malloc(sizeof(Fila));
  novo->prox = fila->prox;
  fila->prox = novo;
  fila->identificador = identificador;
  fila->valor = valor;
  fila->proximo = proximo;
  fila = novo;
}


void ordena_pistas() {

  for (Fila *f = fila->prox; f != fila; f = f->prox){
      printf("%d\n",f->valor);
  }

}


int main () {

cria_fila();

int identificador1 = 10;
int valor1 = 35;
int proximo1 = 80;

int identificador2 = 20;
int valor2 = 50;
int proximo2 = -1;

int identificador3 = 80;
int valor3 = 57;
int proximo3 = 20;

enfileira(identificador1,valor1,proximo1);
enfileira(identificador2,valor2,proximo2);
enfileira(identificador3,valor3,proximo3);
ordena_pistas();

}
