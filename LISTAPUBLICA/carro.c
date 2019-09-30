#include<stdio.h>

int main() {

  double preco_final;
  double lucro;
  double imposto;
  double custo;

  scanf("%lf",&preco_final);
  scanf("%lf %lf",&lucro,&imposto);
  lucro = lucro/100;
  imposto = imposto/100;

  custo = preco_final/(1 + lucro + imposto);

  printf("%lf\n",custo);
}
