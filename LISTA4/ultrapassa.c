/*Gabriela Alves da Gama
Universidade de Brasília - UnB Campus Gama (FGA)*/

#include <stdio.h>

void verifica(int *numeros,int limite){
  for (int i = 0; i < n; i++){
    soma = soma + numeros[i];
    if (soma > 90)
      printf("%d\n",numeros[i]);
    verifica(numeros,n,i,soma);
  }
  printf("%d\n",soma );
}


int main () {

// Criar um vetor com alocação dinâmica
// Realocar memória caso vetor > n-1
// guarda todos os números lidos num vetor
// verificar e somando
  int n = 0;
  int numero;
  int *numeros;
  int i = 0;
  *numeros = malloc(10*sizeof(int));

  for (int i = 0; numeros[i]==0;i++){
    if(n[i])

  }

  verifica(numeros,n,0,0);

  return 0;
}
