#include <stdio.h>

int main() {

  unsigned long long int cod;
  int dig1, dig2, dig3, dig4, dig5, dig6, dig7;
  int soma;
  int dv;
  int res1,res2,res3,res4,res5,res6,res7;
  int aux1,aux2,aux3,aux4,aux5,aux6,aux7;
  int a,b,c,d,e,f,g;

  scanf("%llu",&cod);

  dig7 = cod%10;
  cod = cod/10;
  dig6 = cod%10;
  cod = cod/10;
  dig5 = cod%10;
  cod = cod/10;
  dig4 = cod%10;
  cod = cod/10;
  dig3 = cod%10;
  cod = cod/10;
  dig2 = cod%10;
  cod = cod/10;
  dig1 = cod%10;

  res1 = dig7*2;
  a = res1%10;
  res1 = res1/10;
  aux1 = res1 + a;
  res2 = dig6*1;
  b = res2%10;
  res2 = res2/10;
  aux2 = res2 + b;
  res3 = dig5*2;
  c = res3%10;
  res3 = res3/10;
  aux3 = res3 + c;
  res4 = dig4*1;
  d = res4%10;
  res4 = res4/10;
  aux4 = res4 + d;
  res5 = dig3*2;
  e = res5%10;
  res5 = res5/10;
  aux5 = res5 + e;
  res6 = dig2*1;
  f = res6%10;
  res6 = res6/10;
  aux6 = res6 + f;
  res7 = dig1*2;
  g = res7%10;
  res7 = res7/10;
  aux7 = res7 + g;

  soma = aux1 + aux2 + aux3 + aux4 + aux5 + aux6 + aux7;

  if (soma%10 == 0)
    printf("0\n");
  else
    printf("%d\n", 10-soma%10 );

return 0;

}
