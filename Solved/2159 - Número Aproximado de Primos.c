 #include <stdio.h>
 #include <math.h>

 int main(){
     unsigned long long int n;
     double p, m;
     scanf("%llu", &n);
     p = n / log(n);
     m = 1.25506 * p;
     printf("%.1lf %.1lf\n", p, m);
     return(0);
 }




