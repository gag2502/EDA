#include <stdio.h>
int main () {

  int num = 14562;

  while ( num != 0 ) {
  printf( "Ultimo digito: %d\n", num%10 );
  num = num / 10;
  printf( "Atualizando o numero: %d\n", num );
  }

return 0;
}
