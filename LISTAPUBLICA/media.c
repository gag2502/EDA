#include <stdio.h>


int main() {

double x,x2,p1,p2;
double x1 = 0.0;

scanf("%lf",&x);
scanf("%lf",&x2);
scanf("%lf %lf", &p1, &p2);

x1 = (x*(p1+p2) - (x2*p2))/p1;

printf("%lf\n",x1);


}
