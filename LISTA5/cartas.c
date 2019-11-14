#include<stdio.h>
#include<stdlib.h>

#define N 10000
int *fila;
int p,u;


int cria_fila() {
  p = 0;
  u = 0;
  fila = malloc(N*sizeof(int));
  if (fila == NULL)
    return 0;
  return 1;
}

int redimensiona() {
  int i,j;
  fila = realloc(fila, 2*N*sizeof(int));
  if (fila == NULL)
    return 0;
  if (p > u){
    if(N - p > u){
      for(i = 0, j = N; i < u; i++, j++)
        fila[i] = fila[j];
      u = N + u;
    }  else {
        for (i = N - 1,j = 2*N-1; i >= p; i--, j--)
          fila[j] = fila[i];
        p = j +1;
      }
    }
}

int enfileira(int x) {

  if ((u+1)%N == p)
     if (!redimensiona())
       return 0;

   fila[u] = x;
   u = (u+1)%N;
   return 1;
}

int desenfileira(int *x) {
  if(p==u) //fila vazia
    return 0;
  *x = fila[p];
  p = (p+1)%N;
  return 1;
}

int main() {
    int n;
    int count = 0;
    int valor;
    int temp;

    cria_fila();

    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
      enfileira(i);
    }

    printf("Cartas descartadas: ");

    while (count < n - 2) {
      desenfileira(&valor);
      printf("%d, ",valor);
      desenfileira(&temp);
      enfileira(temp);
      count++;
    }
    desenfileira(&valor);
    printf("%d\n",valor);
    desenfileira(&valor);
    printf("Carta restante: %d\n",valor);


}
