#include <stdio.h>

#define N 5

int p,u;
int fila[N];

int cria_fila(){
  p = 0;
  u = 0;

}
int enfileira(int x){
  if(u < N){
  fila[u] = x;
  u++;
  return 1;
}
else
 return 0;
}
int desenfileira(int *x){
  if(p == u)
    return 0;

  *x = fila[p];
  p++;
  return 1;

}

int filaCheia() {
  if (u>=N){
    return 1;
  }
  return 0;
}

int filaVazia() {
  if (p == u){
    return 1;
  }
  return 0;
}

int redimensiona(){

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
