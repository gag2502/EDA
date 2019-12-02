#include <stdio.h>
#include <stdlib.h>

int palindromo(char *palavra, int n) {
  int aux = n/2;
  for (int i = 0; i < aux;i++){
    if(palavra[i] != palavra[n - 1 -i ])
      return 0;
  }
  return 1;
}

int main() {

  int n;

  scanf("%d",&n );

  char *palavra = malloc(n*sizeof(char));

  scanf("%s",palavra);

  if (palindromo(palavra,n) == 0){
    printf("0\n");
  } else {
    printf("1\n");
  }

}
