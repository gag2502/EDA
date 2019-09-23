#include<stdio.h>
#include<stdlib.h>

int main()
{
int *numero = malloc(10*sizeof(int));
*numero[10] = {10,10,20};


printf("%ld\n", sizeof(numero));
}

