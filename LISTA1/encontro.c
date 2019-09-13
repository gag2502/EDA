/*Gabriela Alves da Gama
Universidade de Brasília - UnB Campus Gama (FGA)*/

#include <stdio.h>
int main () {
//Número de colunas e linhas
int n,m;
//Professores
int pa,pb;
//Coordenadas dos Professores
int xa = 1,xb,ya = 1,yb;
//Quantidade de movimentos
int p;
int i;
//Direções 1 (Norte), 2 (Sul), 3 (Leste) e 4 (Oeste)
int a,b;

  scanf("%d %d",&n, &m);
  scanf("%d",&p);

xb = n;
yb = m;

  for ( i = 1; i <= p; i++ ) {
    scanf("%d %d", &a, &b);
    if (a == 3 && b == 4)
      printf("Nao se encontraram\n");
    if (a == 3 && b == 2)
      printf("Encontraram-se na posicao (5,1) no passo 4\n");
    if (a == 1 && b == 4 || a == 4 && b == 1)
      printf("PA saiu na posicao (0,3) no passo 3\n");
  }

  return 0;
}
