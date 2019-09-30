#include<stdio.h>

int main() {

  int dig1,dig2,dig3,dig4;
  unsigned long long int agencia;
  int aux1, aux2, aux3, aux4;
  int res1, res2, res3, res4;
  int a,b,c,d;
  int soma;

  scanf("%llu",&agencia);

  dig4 = agencia%10;
  agencia = agencia/10;
  dig3 = agencia%10;
  agencia = agencia/10;
  dig2 = agencia%10;
  agencia = agencia/10;
  dig1 = agencia%10;

  res1 = dig4*2;
  a = res1%10;
  res1 = res1/10;
  aux1 = res1 + a;
  res2 = dig3*1;
  b = res2%10;
  res2 = res2/10;
  aux2 = res2 + b;
  res3 = dig2*2;
  c = res3%10;
  res3 = res3/10;
  aux3 = res3 + c;
  res4 = dig1*1;
  d = res4%10;
  res4 = res4/10;
  aux4 = res4 + d;

  soma = aux1 + aux2 + aux3 + aux4;

  if(soma%10 == 0)
    printf("0\n");
  else
    printf("%d\n",10-soma%10);

  return 0;

}
