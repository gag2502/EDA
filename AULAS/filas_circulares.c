#include <stdio.h>
#include <stdlib.h>

int *fila;
int p,u,N;

// int cria_fila() {
//   p = 0;
//   u = 0;
//   N = 100;
//   fila = malloc(N*sizeof(int));
//   if (fila == NULL)
//     return 0;
//   return 1;
// }

// int redimensiona() {
//   int i,j;
//   fila = realloc(fila, 2*N*sizeof(int));
//   if (fila == NULL)
//     return 0;
//   if (p > u){
//     if(N - p > u){
//       for(i = 0, j = N; i < u; i++, j++)
//         fila[i] = fila[j];
//       u = N + u;
//     }  else {
//         for (i = N - 1,j = 2*N-1; i >= p; i--, j--)
//           fila[j] = fila[i];
//         p = j +1;
//       }
//      }
//    }

int enfileira(int x) {
  if ((u+1)%N == p){
    if(redimensiona()){
      fila[u] = x;
      u = (u+1)%N;
      return 1;
    }
    return 1;
  }
}

int desenfileira(int *x){
    if(p==u)
      return 0;
    *x = fila[p];
    p = (p+1)%N;
    return 1;
}
