#include<stdio.h>

int main() {

  int y500=0,y100=0,y50=0,y10=0,y5=0,y1=0;
  int custo,dinheiro,troco;
  int a,b,c,d,e,f;

  scanf("%d %d",&custo,&dinheiro);

  troco = dinheiro - custo;
  if(troco/500>=1){
    a = troco/500;
    y500=a;
    troco = troco - a*500;
  }
  if(troco/100>=1){
    b = troco/100;
    y100=b;
    troco = troco - b*100;
  }
  if(troco/50>=1){
    c = troco/50;
    y50=c;
    troco = troco - c*50;
  }
  if(troco/10>=1) {
    d = troco/10;
    y10=d;
    troco = troco - d*10;
  }
  if(troco/5>=1) {
    e = troco/5;
    y5=e;
    troco = troco - e*5;
  }
  if(troco/1>=1){
    f = troco/1;
    y1=f;
    troco = troco - f*1;
  }

  printf("%d\n",y500);
  printf("%d\n",y100);
  printf("%d\n",y50);
  printf("%d\n",y10);
  printf("%d\n",y5);
  printf("%d\n",y1);

  return 0;


}
