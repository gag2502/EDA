#include <stdio.h>
int main() {
    int i,j,count=0;
    int n;

      scanf("%d",&n);

      for(i = 1; i <= n; i++) {
        for(j = 1; j <= n-i; j++) {
          printf(" ");
        }
        for(count = 1; count <= i; count++)
          printf("*");
        for(count = i-1; count >= 1; count--)
          printf("*");
        printf("\n");
      }
    return 0;
}
