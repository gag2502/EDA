#include <stdio.h>
#include <stdlib.h>

#define N 5
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

int filaCheia(){
  if((u+1)%N == p){
    return 1;
  }
  return 0;
}

int filaVazia(){
  if(p == u){
    return 1;
  }
  return 0;
}

void imprimeFila() {
  printf (" -----");
  for (int i = 1; i < N; i++) printf ("------");
  printf ("\n|");
  for (int i = 0; i < N; i++) printf (" %3d |", fila[i]);
  printf ("\n");
  printf (" -----");
  for (int i = 1; i < N; i++) printf ("------");
  printf ("\n");

  if (p == u) {
    printf ("  ");
    for (int i = 0; i < p; i++) printf ("      ");
    printf ("p-u\n");
  }
  else {
    printf ("   ");
    for (int i = 0; i < N; i++) {
      if (i == p) printf ("p");
      else if (i == u) printf ("u");
      else printf (" ");
      printf ("     ");
    }
    printf ("\n");
  }
}
