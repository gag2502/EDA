/*Gabriela Alves da Gama
Universidade de Brasília - UnB Campus Gama (FGA)*/

#include <stdio.h>

int comparaPalavras(char *palavra1, char *palavra2) {
  for (int i = 0; palavra1 != '\0' && palavra2 != '\0';i++){
    if (palavra1[i] != palavra2[i])
      return 0;
  }
  if(*palavra1 == '\0' && *palavra2 == '\0')
    return 1;
  else
    return 0;
}

int main() {
  char a[5] = "dado", b[5] = "dado";

  int testa = comparaPalavras(a,b);

  if (testa == 1)
    printf("São Iguais");
  else
    printf("Não são iguais\n");

  return 0;
}
