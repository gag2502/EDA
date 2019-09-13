#include <stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *l = malloc(sizeof(celula));

celula *busca_lista(celula *l,int x){
  celula *p;
  for(p=l->prox;p!=NULL && p->dado!=x;p=p->prox);
  //l->prox é o primeiro elemento da lista;
  /*Enquanto p for diferente de NULL(que é o fim da lista) e p for diferente
  de X (que é o elemento que estamos buscando) a busca irá continuar*/
  //Esse algoritmo é O(n) porque faz n interações para encontrar um dado;
  return p;
  //retorna p ou *p?
}
