/*Gabriela Alves da Gama
Universidade de Brasília - UnB Campus Gama (FGA)*/

#include <stdio.h>

int main () {

  int n;
  int acertos = 0;
  int i = 0;

  scanf("%d", &n);

  char gabarito [n];
  char resposta [n];

  scanf("%s", &gabarito);
  scanf("%s", &resposta);

  for (i = 0; i <= n - 1; i++) {
    if(gabarito[i] == resposta[i])
      acertos = acertos + 1;
  }
  printf("%d\n", acertos);

return 0;
}
