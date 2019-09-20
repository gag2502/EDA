/*Gabriela Alves da Gama
Universidade de Brasília - UnB Campus Gama (FGA)*/

#include <stdio.h>

int f91(int n){

    if (n >= 101)
      return n - 10;
    else
      return f91(f91(n+11));
}

int main () {

  int numero;

  while (scanf("%d",&numero),numero) {
    printf("f(%d) = %d\n",numero,f91(numero);
  }

  return 0;
}
