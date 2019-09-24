#include <stdio.h>

int main() {

unsigned long long int cpfCompleto;
int dig1,dig2,dig3,dig4,dig5,dig6,dig7,dig8,dig9,dig10,dig11;
int somaV1,somaV2;
int v1,v2;

scanf("%llu",&cpfCompleto);

dig11 = cpfCompleto%10;
cpfCompleto = cpfCompleto/10;
dig10 = cpfCompleto%10;
cpfCompleto = cpfCompleto/10;
dig9 = cpfCompleto%10;
cpfCompleto = cpfCompleto/10;
dig8 = cpfCompleto%10;
cpfCompleto = cpfCompleto/10;
dig7 = cpfCompleto%10;
cpfCompleto = cpfCompleto/10;
dig6 = cpfCompleto%10;
cpfCompleto = cpfCompleto/10;
dig5 = cpfCompleto%10;
cpfCompleto = cpfCompleto/10;
dig4 = cpfCompleto%10;
cpfCompleto = cpfCompleto/10;
dig3 = cpfCompleto%10;
cpfCompleto = cpfCompleto/10;
dig2 = cpfCompleto%10;
cpfCompleto = cpfCompleto/10;
dig1 = cpfCompleto%10;

somaV1 = (dig1*10)+(dig2*9)+(dig3*8)+(dig4*7)+(dig5*6)+(dig6*5)+(dig7*4)+(dig8*3)+(dig9*2);
v1 = 11 - somaV1%11;

if(v1 > 9) {
    v1 = 0;
}

somaV2 = (dig1*11)+(dig2*10)+(dig3*9)+(dig4*8)+(dig5*7)+(dig6*6)+(dig7*5)+(dig8*4)+(dig9*3)+(v1*2);

v2 = 11 - somaV2%11;

if(v1 == dig10 && v2 == dig11)
{
    printf("valido\n");
} else {
    printf("invalido\n");
}

}
