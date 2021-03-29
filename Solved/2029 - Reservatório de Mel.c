 #include <stdio.h>
 #include <math.h>

 int main(){
     float v, d, h, a;
     while(scanf("%f", &v) != EOF){
        scanf("%f", &d);
        a = 3.14*pow(d/2, 2);
        h = v / a;
        printf("ALTURA = %.2f\n", h);
        printf("AREA = %.2f\n", a);
     }
     return(0);
 }
