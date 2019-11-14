#include <stdio.h>
#include <stdlib.h>


typedef struct celula{
  int tamanho;
  char pe;
  struct celula *prox;
}celula;

void insere_inicio_lista(celula *l, int x, char pe){
    celula *novo = malloc(sizeof(celula));
    novo->tamanho=x;
    novo->pe=pe;
    novo->prox = l->prox;
    l->prox = novo;
}


void contaPares (celula *l) {
  int i = 0;
  int j = 0;
  int qtd;
  for(celula *p = l->prox;p!=NULL;p=p->prox){

    if(p->tamanho == l->prox->tamanho){
      i++;
      printf("%d\n", p->tamanho);
      printf("%d\n", l->prox->tamanho);
      printf("%d\n", p->prox->tamanho);
    }



  }

  printf("%d\n",i);

}

int main(){
  int t;
  char p;
  celula *botas = malloc(sizeof(celula));
  while(scanf("%d %c ",&t, &p)!= EOF){
      insere_inicio_lista(botas,t,p);
  }
  contaPares(botas);

}
