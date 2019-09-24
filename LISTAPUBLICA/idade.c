#include <stdio.h>
int main(void)
{
  int hdia, ndia;
  int hmes, nmes;
  int hano, nano;
  int dia, mes, ano;
  int diferenca;

  hdia = 0;  /* dia de hoje                                               */
  ndia = 0;  /* dia de nascimento                                         */
  hmes = 0;  /* mes de hoje                                               */
  nmes = 0;  /* mes de nascimento                                         */
  hano = 0;  /* ano de hoje                                               */
  nano = 0;  /* ano de nascimento                                         */


/*  ENTRADA DE DADOS                                                      */
  printf("%s","*** Calculadora de Tempo de Vida ANSI C\n");
  printf("%s","Por favor informe a data de ""hoje?\n");
  printf("%s","[dd mm aaaa]: ");
  scanf(" %d%d%d", &hdia, &hmes, &hano);
  printf("              %2d/%2d/%3d\n\n", hdia, hmes, hano);

  printf("%s","Por favor informe a data de ""nascimento?\n");
  printf("%s","[dd mm aaaa]: ");
  scanf(" %d%d%d", &ndia, &nmes, &nano);
  printf("              %2d/%2d/%3d\n\n", ndia, nmes, nano);

/* PROCESSAMENTO DE  DADOS                                                */
  diferenca =   372*hano + 31*hmes + hdia
              - 372*nano - 31*nmes - ndia;

  ano = diferenca/372;
  diferenca = diferenca%372;

  mes = diferenca/31;
  diferenca = diferenca%31;

  dia = diferenca;

/* RESULTADO                                                              */
  printf("%s %d %s %d %s %d %s", /* ---são as máscaras de saída do printf */
          "Tem de vida:", ano, "ano(s)", mes, "mes(es)", dia, "dia(s).\n");
  return 0;
}
