
#include<stdio.h>

int main() {

  int tamanho;
  int comparacao = 1;
  scanf("%d",&tamanho);
  char s[tamanho];
  scanf("%[^\n]",s);

  for (int i = 0; i <= tamanho/2; i++){
    if(s[i] != s[tamanho - i-1]){
      comparacao = 0;
      break;
    }
  }
  printf("%d\n",comparacao);
  return 0;
}
