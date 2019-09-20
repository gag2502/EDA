#include <stdio.h>

 // Contador de movimentos
int quantidade; // Nº de discos

/*
* Funçao recursiva que movimenta os discos entre os pinos
* Pino Origem = 0
* Pino Auxiliar = 1
* Pino Destino = 2
*/
int TorreHanoi(int origem, int destino, int auxiliar, int quantidade,int count){

  if( quantidade == 1 ){
    printf("Move de %d para %d\n", origem, destino);
    count+=1;
  }else{
    TorreHanoi(origem, auxiliar, destino, quantidade-1,count);
    TorreHanoi(origem, destino, auxiliar, 1,count);
    TorreHanoi(auxiliar, destino, origem, quantidade-1,count);
  }
  return count;
}

int main(){
  // Chama a função Torre de Hanoi passando como parâmetro a origem, o destino, o pino auxiliar e a quantidade de discos
while (scanf("%d",&quantidade ),quantidade) {

  printf("\nQuantidade de Discos: %d\n", quantidade);
  printf("Nº minimo de movimentos: %d\n\n", TorreHanoi(0, 2, 1, quantidade,0));
}

  return 0;
}
