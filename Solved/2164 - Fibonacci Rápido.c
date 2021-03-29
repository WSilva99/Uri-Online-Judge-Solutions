 #include <stdio.h>
 #include <math.h>

 int main(){
     int n;
     double f;
     scanf("%d", &n);
     f = pow(1.0+sqrt(5), n) - pow(1.0-sqrt(5), n);
     f /= pow(2, n)*sqrt(5);
     printf("%.1lf\n", f);
     return(0);
 }
