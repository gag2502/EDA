#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *l = malloc(sizeof(celula));

celula *busca_lista(celula *l,int x){
  celula *p;
  for(p=l->prox;p!=NULL && p->dado!=x;p=p->prox);
  return p;
  //l->prox é o primeiro elemento da lista;
  /*Enquanto p for diferente de NULL(que é o fim da lista) e p for diferente
  de X (que é o elemento que estamos buscando) a busca irá continuar*/
  //Esse algoritmo é O(n) porque faz n interações para encontrar um dado;

}

celula *busca_lista_rec(celula *p, int x){

    if(p==NULL)
        return NULL;
    if(p->dado==x)
        return p;
    else
        return busca_lista_rec(p->prox,x);
}


void insere_inicio_lista(celula *){

    celula *novo = malloc(sizeof(celula));
    novo->dado=x;
    novo->prox = l->prox;

}

void insere_posicao(celula *l, int i, int x) {
    celula *p = l;
    for (int j = 0; j < i - 1 && p != NULL; j++,p=p->prox);
    if(p!=NULL)
        insere_inicio_lista(p,x);
}


int remove_inicio_lista(celula *l) {
    celula *lixo = l->prox;
    l->prox = lixo->prox;
    int elem = lixo->dado;
    free(lixo);
    return elem;

}

int remove_lista(celula *l, int i) {

    celula *p = l;
    for(int j = 1; j <= i-1 && p!=NULL;j++,p=p->prox);
    if(p!=NULL)
        return remove_inicio_lista(p);
}

void imprimir_lista(celula *l){
    for(celula *p = l->prox;p!=NULL;p=p->prox){
        printf("%d",p->dado);
    }
}

int main(){

    int i = 0;
    int n;


    while(scanf("%d",l->dado),?) {
      l->dado = n;
    }

    imprimir_lista(celula);

    return 0;

}
