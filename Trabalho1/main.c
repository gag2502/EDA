#include <stdio.h>
#include "fila_vetor.h"

void menu();

int insereFila(){
  int n;
  int valor;
  int i;
  int teste = 1;

  printf("Digite quantos elementos voce deseja Inserir:\n");
  scanf("%d ",&n);
  i = n;
    while (n > 0  && teste != 0) {
        scanf("%d",&valor);
        teste = enfileira(valor);
        if(teste)
           n--;
    }
    if (n > 0)
      printf ("%d elementos foram inseridos na fila, mas %d nao couberam.\n",i - n, n);
}
int removeFila() {
   int n;
   int valor;
   printf("Digite quantos elementos voce deseja remover:\n");
   scanf("%d",&n);

   while (n > 0 && desenfileira(&valor)) {
       printf("Elemento removido: %d\n", valor);
       n--;
   }
   if ( n > 0 )
   printf ("A fila ficou vazia, %d elementos nao foram removidos.\n", n);
}

void reiniciaFila(){
  int valor;
  while(desenfileira(&valor)){
    printf("Removi %d da fila!\n",valor);
  }
}


void menu (){

int opcao;
  cria_fila();
  while (opcao!=5) {
    printf("Escolha uma opcao:\n");
    printf("1. Inserir n elementos na fila.\n");
    printf("2. Remover n elementos na fila\n");
    printf("3. Imprimir a fila.\n");
    printf("4. Reiniciar a fila\n");
    printf("5. Sair.\n");
    scanf("%d",&opcao);

    switch (opcao){
        case 1 : insereFila(); break;
        case 2 : removeFila(); break;
        case 3 : imprimeFila(); break;
        case 4 : reiniciaFila(); break;
    }
  }


}

int main(void) {

	menu();

	return 0;
}
