#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a, b, c, aa, ab, ac, ad, ae, pi = 3.14159;
    scanf("%lf %lf %lf", &a, &b, &c);
    aa = (a*c)/2;
    ab = pi * pow(c, 2);
    ac = ((a+b)*c)/2;
    ad = pow(b, 2);
    ae = a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", aa, ab, ac, ad, ae);

 
    return 0;
}