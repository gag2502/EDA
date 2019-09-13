/*Gabriela Alves da Gama
Universidade de Brasília - UnB Campus Gama (FGA)*/

#include <stdio.h>

int encaixa(int a, int b);
int segmento(int a, int b);

int main(){
  int segmentoTeste;
  segmentoTeste = segmento(567890,678);
  printf("%d\n",segmentoTeste );
}

int encaixa(int a, int b) {
  if (a%10 == b%10)
    return 1;
  else
    return 0;
}

int segmento(int a, int b) {
  int encaixaTeste;
  encaixaTeste = encaixa(567890,678);

  if (encaixaTeste == 0)
    return 0;
  if (encaixaTeste == 1)
    return 1;
  if ((a%10)%10 == (b%10)%10)
    return 1;
}

/*Meu maior problema aqui é não conseguir comparar apenas um dígito com o
último dígito. Porque, por exemplo dois números 678 e 668 eu consigo achar
o último digito dividindo o número por 10 e guardado o resto da divisão.
Nesses dois casos os últimos digitos são 8, então são iguais. Beleza! Mas,
se o número for 163 e 164 os dois  útlimos dígitos não são iguais.O "16"
está no início dos dígitos. Aí nesse caso eu comparar dígito a dígito não daria
muito certo porque logo de cara os dois últimos não são iguais.
E se eu fizesse um laço para percorrer todos os dígitos também não daria
muito certo porque teria que ser uma sequência de dígitos, então ver se num número
possui X dígitos iguais não faz sentido */
