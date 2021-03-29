#include <stdio.h>
#include <math.h>

int main(){
    double a, b, p;
    scanf("%lf %lf", &a, &b);
    p = 100*(b-a)/a;
    printf("%.2lf%%\n", p);
    return(0);
}


