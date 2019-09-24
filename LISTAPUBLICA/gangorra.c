#include <stdio.h>

int main() {

int p1,p2,c1,c2;
int direito,esquerdo;

scanf("%d %d %d %d",&p1,&c1,&p2,&c2);

esquerdo = p1*c1;
direito = p2*c2;



if(esquerdo == direito){
  printf("0\n");
} else if (esquerdo > direito) {
  printf("-1\n");
} else {
  printf("1\n");
}

}
