#include <stdio.h>


int main() {

  int a,b,c,d;
  int x1,x2,x3;
  int winner1,winner2,bigWinner;
  char firtwinner, secondwinner;


  scanf("%d %d %d",&x1,&a,&b);
  scanf("%d %d %d",&x2,&c,&d);
  scanf("%d %d %d",&x3,&winner1,&winner2);

  int result = a + b;
  if (x1 == 0 && (result)%2 == 0 || x1 != 0 && (result)%2 != 0) {
    firtwinner = 'A';
  } else {
    firtwinner = 'B';
  }

  result = c + d;
  if (x2 == 0 && (result)%2 == 0 || x2 != 0 && (result)%2 != 0) {
    secondwinner = 'C';
  } else {
    secondwinner = 'D';
  }

  result = winner1 + winner2;
  if (x3 == 0 && (result)%2 == 0 || x3 != 0 && (result)%2 != 0) {
    printf("%c\n",firtwinner);
  } else {
    printf("%c\n",secondwinner);
  }



  return 0;

}
