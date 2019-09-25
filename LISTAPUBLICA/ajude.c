#include <stdio.h>

int main () {

int c1,c2,c3;
int t;
int soma = 0;

scanf("%d %d %d", &c1,&c2,&c3);
scanf("%d",&t);

soma = c1 + c2 + c3;

if (t == soma) {
    printf("Acertou\n");
} else {
    printf("Errou\n");
}

return 0;

}
