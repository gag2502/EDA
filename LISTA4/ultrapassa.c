/*Gabriela Alves da Gama
Universidade de Brasília - UnB Campus Gama (FGA)*/

#include <stdio.h>
#include <stdlib.h>

void verifica(int *numeros, int i, int tam, int limite) {
  int soma = 0;

  if (i >= tam) return;
  else {
    while (soma <= limite && i < tam) {
      soma = soma + numeros[i];
      i++;
    }

    if ( soma > limite ) {
      verifica(numeros, i, tam, limite);
      printf("%d\n", numeros[i-1]);
    }
  }
}


int main () {
  int *numeros;
  int num, i, tam, lim;

  tam = 10;
  numeros = malloc(tam*sizeof(int));

  i = 0;
  while ( scanf( "%d", &numeros[i] ), numeros[i] != 0 ) {
    i++;
    if (i == tam) {
      tam = tam*2;
      numeros = realloc(numeros, tam*sizeof(int));
    }
  }

  scanf( "%d", &lim );

  verifica(numeros, 0, i, lim);

  return 0;
}
