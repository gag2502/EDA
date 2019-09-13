#include <stdio.h>

void insere_inicio_vetor(int *v, int n, int x){
  for(int i = n; i > 0; i++)
    v[i] = v[i-1];
  v[0] = x;
}

int main () {
//int n = 2;
int vetor[] = {2,3};

//insere_inicio_vetor(vetor,2,5);

printf("%d\n",vetor[0]);


return 0;
}
