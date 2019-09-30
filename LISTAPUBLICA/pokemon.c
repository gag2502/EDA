#include<stdio.h>

int main() {
  int corda = 0;
  int tesoura = 1;
  int agua = 2;
  int fogo = 3;
  int papel = 4;
  int pedra = 5;
  int a,b;

  scanf("%d %d",&a,&b);

  if(a==corda && b ==pedra)
    printf("A\n");
  if (b==corda && a==pedra)
    printf("B\n");
  if (a==tesoura && b==papel || a==tesoura && b==corda)
    printf("A\n");
  if (b==tesoura && a==papel || b==tesoura && a==corda)
    printf("B\n");
  if (a==agua && b==fogo || a==agua && b== corda || a==agua && b==papel || a==agua && b==tesoura)
    printf("A\n");
  if (b==agua && a==fogo || b==agua && a== corda || b==agua && a==papel || b==agua && a==tesoura)
    printf("B\n");
  if (a==fogo && b==papel || a==fogo && b==tesoura || a==fogo && b==corda || a==fogo && b==pedra)
    printf("A\n");
  if (b==fogo && a==papel || b==fogo && a==tesoura || b==fogo && a==corda || b==fogo && a==pedra)
    printf("B\n");
  if (a==papel && b==pedra || a==papel && b==corda)
    printf("A\n");
  if (b==papel && a==pedra || b==papel && a==corda)
    printf("B\n");
  if (a==pedra && b==tesoura || a==pedra && b==agua)
    printf("A\n");
  if (b==pedra && a==tesoura || b==pedra && a==agua)
    printf("B\n");
  if(b==a)
    printf("empate\n");

  return 0;
}
