#include <stdio.h>
#include <stdlib.h>


typedef struct celula {
    int numBota;
    char lado;
    struct celula *prox;
} celula;

void insere_inicio_lista(celula *l, int numBota, char lado){
    celula *novo = malloc(sizeof(celula));
    novo->numBota= numBota;
    novo->lado = lado;
    novo->prox = l->prox;
    l->prox = novo;
}


void conta_pares(celula *l){

  for(celula *p=l->prox ;p!=NULL;p=p->prox){
    printf("%d %c\n",p->numBota,p->lado );
  }

}

int main(){

  int m; //tamanho da botas
  char l; //lado da bota 'D' ou 'E'
  int numBotas;
  int i = 0;

  scanf("%d", &numBotas);

  celula *botas = malloc(numBotas * sizeof(celula));

  while(i < numBotas){
    scanf("%d %c",&m,&l);
    insere_inicio_lista(botas,m,l);
    i++;
  }
  conta_pares(botas);

}
