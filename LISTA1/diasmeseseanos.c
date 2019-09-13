#include <stdio.h>

int main() {
  struct dataHoje
{
int dia;
int mes;
int ano;
};
struct idade
{
int dia;
int mes;
int ano;
};
struct idade idade;
struct dataHoje dataHoje;

  scanf("%d %d %d",&idade.dia, &idade.mes, &idade.ano );
  scanf("%d %d %d",&dataHoje.dia, &dataHoje.mes, &dataHoje.ano );
  if (dataHoje.ano >= 0 && dataHoje.ano <= 9999 ) {
     if (idade.ano >= 0 && idade.ano <= 9999 ) {
       if (dataHoje.mes >= 0 && dataHoje.mes <= 15) {
         if (idade.mes >= 0 && idade.mes <= 15) {
           if (dataHoje.dia >= 0 && dataHoje.dia <= 35) {
             if (idade.dia >= 0 && idade.dia <= 35) {

              printf("%d\n%d\n%d\n", dataHoje.ano - idade.ano, dataHoje.mes - (idade.mes + 1), ((30 - idade.dia )+ 1) + dataHoje.dia);
            } else {
              printf("data invalida\n");
            }
          } else {
            printf("data invalida\n");
          }
        } else {
          printf("data invalida\n");
        }
      } else {
        printf("data invalida\n");
      }
    } else {
      printf("data invalida\n");
    }
  } else {
    printf("data invalida\n");
  }
  return 0;
}
