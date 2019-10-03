/*Gabriela Alves da Gama
Universidade de Brasília - UnB Campus Gama (FGA)*/

#include <stdio.h>
#include <stdlib.h>

void verifica(int *numeros,int i){
  int soma = 0;
    if (numeros[i]==90)
      printf("%d\n",numeros[i]);
    else {
      while (soma < 90){
        soma = soma + numeros[i];
        i++;
      }
      if (soma > 90) {
       verifica(numeros,i+1);
       printf("%d\n",numeros[i]);
   }
 }
}


int main () {

  int *numeros;
  int i = 0;

  numeros = malloc(10*sizeof(int));

  while(scanf("%d",&numeros[i]),numeros[i]) {
     if (i > 10) {
       numeros = realloc(numeros,2*sizeof(numeros));
     }
      i++;
   }

  verifica(numeros,0);
  return 0;
}
