#include <stdio.h>
 
int main() {
 
    double a, b, c, p, ar;
    scanf("%lf %lf %lf", &a, &b, &c);
    if((b-c)<a && a<(b+c) && (a-c)<b && b<(a+c) && (a-b)<c && c<(a+b)){
        p = a+b+c;
        printf("Perimetro = %.1lf\n", p);
    }else{
        ar = ((a+b)*c)/2;
        printf("Area = %.1lf\n", ar);
    }
    return 0;
}