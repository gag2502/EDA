/*Gabriela Alves da Gama
Universidade de Brasília - UnB Campus Gama (FGA)*/

#include <stdio.h>
#include <stdlib.h>

int f91(int n){

    if (n >= 101)
      return n - 10;
    else
      return f91(f91(n+11));
}

int main () {
  int numero;
  int *n = malloc(sizeof(int));
  for (int i = 0; i < 20; i++) {
    scanf(" %d",&numero);
    if(numero != 0)
      n[i]= numero;
    else
      break;
}

  for (int j = 0; j < n[j]; j++)
    printf("f(%d)\n",n[j]);

  return 0;
}
