#include <stdio.h>

void troca_int (int *x, int *y) {
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}

void troca_str (char **x, char **y) {
  char *tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;

  /* int i; */
  /* for ( i = 0; x[i] != '\0' && y[i] != '\0'; i++ ) { */
  /*   char tmp; */
  /*   tmp = x[i]; */
  /*   x[i] = y[i]; */
  /*   y[i] = tmp; */
  /* } */

  /* if ( x[i] == '\0' && y[i] != '\0' ) { */
  /*   for ( int j = i; y[j] != '\0'; j++ ) x[j] = y[j]; */
  /*   y[i] = '\0'; */
  /* } */
  /* else { */
  /*   for ( int j = i; x[j] != '\0'; j++ ) y[j] = x[j]; */
  /*   x[i] = '\0'; */
  /* } */
  
}

int main() {
  int a, b;
  char s1[100] = "Eu deveria aparecer depois", s2[100] = "Eu deveria aparecer primeiro";
  a = 3;
  b = 4;

  troca_int (&a, &b);
  printf("a is %d\n", a);
  printf("b is %d\n", b);

  troca_str (&s1, &s2);
  printf("s1 is %s\n", s1);
  printf("s2 is %s\n", s2);
  return 0;
}
