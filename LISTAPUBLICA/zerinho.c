#include <stdio.h>

int main() {


int A,B,C;

scanf("%d %d %d",&A,&B,&C);

if(A>B && A>C){
    printf("A\n");
}
else if (B>A && B>C){
    printf("B\n");
}
else if (C>A && C>B){
    printf("C\n");
}
else if(A<B && A<C){
    printf("A\n");
}
else if (B<A && B<C){
    printf("B\n");
}
else if (C<A && C<B){
    printf("C\n");
}
else {
    printf("empate\n");
}



}
