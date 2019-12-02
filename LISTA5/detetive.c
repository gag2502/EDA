#include <stdio.h>
#include <stdlib.h>

typedef struct pista {
  int identificador;
  int valor;
}pista;


int main () {

  int n;
  int i = 0;
  int id,valor;

  scanf("%d",&n);
  struct pista pistas[n];
  int prox[n];

  while (i < n) {
    scanf("%d %d %d", &pistas[i].identificador,&pistas[i].valor,&prox[i]);
    i++;
  }

  printf("%d\n",pistas[0].valor);
  for (int i = 1; i < n; i++) {
    for(int j = 0; j < n; j++){
    if(pistas[i].identificador == prox[j])
      printf("%d\n", pistas[i].identificador);
    }
  }


}
