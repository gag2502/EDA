#include <stdio.h>

int main() {

int p,q,r;

scanf("%d %d %d",&p,&q,&r);

if (p == 0 && q == 0 && r == 0 || p == 0 && q == 1 && r == 0) {
    printf("MI\n");
}
if (p == 0 && q == 1 && r == 1 || p == 0 && q == 0 && r == 1) {
    printf("MM\n");
}
if (p == 1 && q == 0 && r == 0 || p == 1 && q == 0 && r == 1) {
    printf("MS\n");
}
if (p == 1 && q == 1 && r == 0 || p == 1 && q == 1 && r == 1) {
    printf("SS\n");
}
 return 0;

}
