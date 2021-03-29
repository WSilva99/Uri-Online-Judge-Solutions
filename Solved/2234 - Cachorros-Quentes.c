 #include <stdio.h>
 #define MAX 501

 int main(){
     int h, p;
     float m;
     scanf("%d %d", &h, &p);
     m = h*1.0/p;
     printf("%.2f\n", m);
     return(0);
 }

