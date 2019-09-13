#include <stdio.h>

int main() {

  int a, n;

  scanf("%d",&n );

  if ( n > 10 && n <= 30 ) {
    a = 7 + (n - 10) ;
  }
  else if (n > 30 && n <= 100) {
    a = 7 + 20 + ((n - 30) * 2);
  }
  else if (n > 100 ) {
    a = 7 + 20 + 140 + ((n - 100)*5);
  } else {
    a = 7;
  }
  printf("%d\n",a);
  return 0;
}
