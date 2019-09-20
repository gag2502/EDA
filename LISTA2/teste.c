#include <stdio.h>
int main () {
  int i = 0;
  int num = 14562;
  int soma = 0;
  int numeros[1000];
  while ( num != 0 ) {
    printf( "Ultimo digito: %d\n", num%10);
    numeros[i] = num%10;
    num = num / 10;
    printf( "Atualizando o numero: %d\n", num );
    i++;
  }
  for (int j = 0; j < numeros[j]; j++)
    printf("%d\n",numeros[j]);

return 0;
}
