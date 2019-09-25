#include <stdio.h>

int main()
{
  int hdia, ndia;
  int hmes, nmes;
  int hano, nano;
  int dia, mes, ano;
  int diferenca;

  hdia = 0;
  ndia = 0;
  hmes = 0;
  nmes = 0;
  hano = 0;
  nano = 0;



  scanf(" %d%d%d", &ndia, &nmes, &nano);
  scanf(" %d%d%d", &hdia, &hmes, &hano);



  if ( hmes <=12 && hano >= 0 && hdia <= 31 && nmes <=12 && nano >= 0 && ndia <= 31 ){
      diferenca =   372*hano + 31*hmes + hdia
                  - 372*nano - 31*nmes - ndia;

      ano = diferenca/372;
      diferenca = diferenca%372;

      mes = diferenca/31;
      diferenca = diferenca%31;

      dia = diferenca;

      printf("%d\n%d\n%d\n", ano, mes, dia);
 }

else {

    printf("data invalida\n");

}
  return 0;
}
