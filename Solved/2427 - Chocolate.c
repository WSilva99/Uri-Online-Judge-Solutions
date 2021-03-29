 #include <stdio.h>
 #include <math.h>

 int main(){
     int l, i;
     scanf("%d", &l);
     for(i = 0; l >= 2; i++){
        l /= 2;
     }
     printf("%.lf\n", pow(4,i));
     return(0);
 }
