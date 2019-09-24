#include <stdio.h>

int main() {

char cpf[1000000];
int soma = 0;
int verificador = 0;

scanf("%s",cpf);

soma = ((cpf[5]-'0') * 2) + ((cpf[4]-'0') * 3) + ((cpf[3]-'0') * 4) + ((cpf[2]-'0') * 5) + ((cpf[1]-'0') * 6) + ((cpf[0]-'0') * 7);



verificador = 11 - soma%11;

printf("%d\n",verificador);



}
