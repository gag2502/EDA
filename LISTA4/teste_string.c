#include<stdio.h>

int main(void)
{
//char numero[] = "999";
int soma = 0;
int numero = 111;


//char *letra = numero; //ponteiro letra aponta para o primeiro caractere


while (*letra!='\0'){ //enquanto não apanhar o terminador da string
    soma += (*letra) - '0'; //conversão de letra para número e soma
    letra++; //aponta para a proxima letra
}

printf("%s dá como soma de numeros %d\n", numero,soma);

 while(numero%10){
        soma = soma + numero%10;
        numero = numero/10;
       }

printf("%d\n",soma);
}




