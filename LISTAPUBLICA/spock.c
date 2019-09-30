#include<stdio.h>

int main () {

  int pedra = 0;
  int papel = 1;
  int tesoura = 2;
  int lagarto = 3;
  int spock = 4;
  int a,b;

  scanf("%d %d",&a,&b);

  if (a==pedra && b==lagarto || a==pedra && b==tesoura)
    printf("A\n");
  if (b==pedra && a==lagarto || b==pedra && a==tesoura)
    printf("B\n");
  if (a==tesoura && b==lagarto || a==tesoura && b==papel)
    printf("A\n");
  if (b==tesoura && a==lagarto || b==tesoura && a==papel)
    printf("B\n");
  if (a==papel && b==spock || a==papel && b==pedra)
    printf("A\n");
  if (b==papel && a==spock || b==papel && a==pedra)
    printf("B\n");
  if (a==lagarto && b==spock || a==lagarto && b==papel)
    printf("A\n");
  if (b==lagarto && a==spock || b==lagarto && a==papel)
    printf("B\n");
  if (a==spock && b==tesoura || a==spock && b==pedra)
    printf("A\n");
  if (b==spock && a==tesoura || b==spock && a==pedra)
    printf("B\n");
  if(a==b)
    printf("empate\n");

    return 0;
}
