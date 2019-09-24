#include <stdio.h>

int main() {

float notafinal;
float nota1,nota2,nota3,nota4,nota5;
float soma = 0.0;

scanf(" %f %f %f %f %f",&nota1,&nota2,&nota3,&nota4,&nota5);

float maior = nota1;
float menor = nota1;

if(nota1 >= maior)
    maior = nota1;
if (nota2 >= maior)
    maior = nota2;
if (nota3 >= maior)
    maior = nota3;
if (nota4 >= maior)
    maior = nota4;

if(nota5 >= maior)
    maior = nota5;

if (nota1 <= menor)
    menor = nota1;
if (nota2 <= menor)
    menor = nota2;
if (nota3 <= menor)
    menor = nota3;
if (nota4 <= menor)
    menor = nota4;
if(nota5 <= menor)
    menor = nota5;

soma = nota1 + nota2 + nota3 + nota4 + nota5 - maior - menor;

printf("%.1f\n",soma);

}
