/*Gabriela Alves da Gama
Universidade de Brasília - UnB Campus Gama (FGA)*/

#include <stdio.h>



int hanoi(int n,int count){
      if (n <= 1)
        return count;
      else
        return 2 * hanoi(n - 1, count) + 1;
      return count;
}

int main () {
  int i = 1;
  int n;

  while (scanf("%d",&n),n) {
      printf("Teste %d\n", i);
      printf("%d\n",hanoi(n,1));
      i++;
    }

  return 0;
}
