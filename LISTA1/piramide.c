#include <stdio.h>

int main() {
    int i,count = 0;
    int n;
        scanf("%d",&n);

        for(i = 1; i <= n; i++){
          for(count = 1;count <= i; count++)
            printf("%02d ",i);
          printf("\n");
        }

        printf("\n");

        for( i = 1; i <= n; i++) {
          for(count = 1 ; count <= i ; count++)
            printf("%02d ",count);
          printf("\n");
        }

    return 0;
}
