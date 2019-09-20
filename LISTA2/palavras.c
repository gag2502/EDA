/*Gabriela Alves da Gama
Universidade de Brasília - UnB Campus Gama (FGA)*/

#include <stdio.h>

int palavraOrdenada(char *palavra){
  int i = 0;
  while(palavra[i] < palavra[i+1]){
    return 1;
    i++;
  }
  return 0;
}

int main () {

    struct tipoPalavras {
      char palavra[43];
    };
    int i = 0;
    int n;

    scanf(" %d",&n);
    struct tipoPalavras palavras[n];

    while(i < n){
      scanf(" %s", palavras[i].palavra);
      i++;
    }

    for (int j = 0; j < n ; j++) {
      if (palavraOrdenada(palavras[j].palavra) == 1) {
        printf("%s: O\n",palavras[j].palavra);
      } else {
        printf("%s: N\n",palavras[j].palavra);
      }
     }

  return 0;
}
