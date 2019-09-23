#include <stdio.h>
#include <string.h>


int noves(int soma){
  int aux = 0;
  int soma2 = 0;

if (soma < 10){
    if (soma == 9){
     return 1;
    }
    else {
      return 0;
    }
} else {
    while(soma%10 != 0){
      soma2 = soma2 + soma%10;
      soma = soma/10;
    }
    if (soma2%9 !=0 || soma2 < 9){
        printf("\n%d\n",soma2%9);
           return 0;
        }
     else {
      aux = noves(soma2);
      return aux + 1;
    }

}

  }

int main(){
   char n[1001];
   int soma = 0;
   int i = 0;

  while(scanf("%s",n),strcmp(n,"0")) {
     i = 0;
     soma = 0;
    printf("%s ",n);
       while (n[i]!='\0'){
           soma += n[i] - '0';
           i++;
       }
       if(noves(soma)!=0){ //189
           printf("is a multiple of 9 and has 9-degree %d.\n", noves(soma));
        } else {
            printf("is not a multiple of 9.\n");
        }
   }
   return 0;
}
