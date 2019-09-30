#include <stdio.h>
#include<string.h>

int main() {

  int a,b,c,d;
  int x1,x2,x3;
  int winner1,winner2,bigWinner;

  scanf("%d %d %d",&x1,&a,&b);
  scanf("%d %d %d",&x2,&c,&d);
  scanf("%d %d %d",&x3,&winner1,&winner2);

  if (x1 == 0 && (a+b)%2 == 0)
    a = winner1;
  if (x1 == 0 && (a+b)%2 != 0)
    b = winner1;
  if (x1 == 1 && (a+b)%2 != 0)
    a = winner1;
  if (x1 == 1 && (a+b)%2 == 0)
    b = winner1;

  if (x2 == 0 && (c+d)%2 == 0)
    c = winner2;
  if (x2 == 0 && (c+d)%2 != 0)
    d = winner2;
  if (x2 == 1 && (c+d)%2 != 0)
    c = winner2;
  if (x2 == 1 && (c+d)%2 == 0)
    d = winner2;

  if(a == winner1 && c == winner2){
    if (x3 == 1 && (a+c)%2 != 0)
      printf("A\n");
    else
      printf("C\n");
    if (x3 == 0 && (a+c)%2 == 0)
      printf("A\n");
    else
      printf("C\n");
  }

  if(b == winner1 && c == winner2){
    if (x3 == 1 && (b+c)%2 != 0)
      printf("B\n");
    else
      printf("C\n");
    if (x3 == 0 && (b+c)%2 == 0)
      printf("B\n");
    else
      printf("C\n");
  }

  if(a == winner1 && d == winner2){
    if (x3 == 1 && (a+d)%2 != 0)
      printf("A\n");
    else
      printf("D\n");
    if (x3 == 0 && (a+d)%2 == 0)
      printf("A\n");
    else
      printf("D\n");
  }
 char string[2];

  if(b == winner1 && d == winner2){
    if (x3 == 1 && (b+d)%2 != 0)
      printf("B\n");
    else
      printf("D\n");
    if (x3 == 0 && (b+d)%2 == 0)
      printf("B\n");
    else
      printf("D\n");
  }

  return 0;

}
