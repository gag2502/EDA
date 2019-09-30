#include <stdio.h>

#difine N = 10;

typedef struct pilha {
  int dado[N];
  int topo;
} pilha;

//Criação da pilha
void cria_pilha (pilha *p){
  p->topo = 0;
}

// Empilha
void empilha (pilha *p, int y){
  p->dado[p->topo++] = y;
}

//Pilha cheia
int pilha_cheia (pilha *p){
  return(p->topo == N); // resultado booleano
}

//Desempilha
int desempilha (pilha *p){
  return p->dado[--p->topo];
}

//Pilha vazia
int pilha_vazia (pilha *p){
  return !p->topo;
}

int main () {

}
