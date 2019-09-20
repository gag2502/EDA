#include <stdio.h>
#include <string.h>

int noves(int soma){ //36
  int grau = 0;
  if (soma < 10)
    if (soma == 9)
      return 1;
    else {
      soma = soma/10; // 3
      soma = soma + soma%10; // 3 + 6
      grau = noves(soma);
      grau++;
        return grau;
      if (soma != 9)
        return 0;
    }

  }

int main(){
   char n[1001];
   int i=0;
   int soma = 0;
   while (scanf(" %s",&n[i]),strcmp(n[i],"0")) {
      i++;
   }
   for (int j = 0; n[j] != '\0'; j++ ){
      soma = n[j]-'0';
      printf("%d\n",soma);
    }
}
