 #include <stdio.h>

 int main(){
     int a, b, c, aux;
     scanf("%d %d %d", &a, &b, &c);
     a /= 2;
     b /= 3;
     c /= 5;
     if (a > b){
        aux = a;
        a = b;
        b = aux;
     }
     if (b > c){
        aux = b;
        b = c;
        c = aux;
     }
     if (a > b){
        aux = a;
        a = b;
        b = aux;
     }
     printf("%d\n", a);
     return(0);
 }

