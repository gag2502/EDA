#include<stdio.h>

int main() {

  int m;
  int a,b,c;

  scanf("%d",&m);
  scanf("%d",&a);
  scanf("%d",&b);

c = m-a-b;
if (c > a && c > b)
  printf("%d\n",c);
else if (a > b)
  printf("%d\n",a);
else
  printf("%d\n",b);

return 0;

}
