#include<stdio.h>

 int maximo (int n, int *v)
  {
     if (n == 1)
        return v[0]; // primeira posição é a maior
     else {
        int x; // variavel auxiliar
        x = maximo (n-1, v); // suponha que x é o maior
        // x é o máximo de v[0..n-2]
        if (x > v[n-1]) return x;
        else return v[n-1];
     }
  }

 int main() {

    int v[4]={1,5,3,2};
    int *p;
    p = v;
    printf("%d\n", maximo(4,p));

    return 0;

  }
