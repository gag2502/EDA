#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *busca_lista(celula *l,int x){
  celula *p;
  for(p=l->prox;p!=NULL && p->dado!=x;p=p->prox);
  return p;
}

celula *busca_lista_rec(celula *p, int x){
    if(p==NULL)
        return NULL;
    if(p->dado==x)
        return p;
    else
        return busca_lista_rec(p->prox,x);
}

void insere_inicio_lista(celula *l, int x){
    celula *novo = malloc(sizeof(celula));
    novo->dado=x;
    novo->prox = l->prox;
    l->prox = novo;
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
        printf("%d\n",p->dado);
    }
}

int main(){
    celula *l = malloc(5 * sizeof(celula));
    celula *h;
    int n;
    int i = 1;

    while (i <= 5) {
      scanf("%d",&n);
      insere_inicio_lista(l,n);
      i++;
    }
    h = busca_lista(l,5);
    imprimir_lista(h);

    return 0;
}
