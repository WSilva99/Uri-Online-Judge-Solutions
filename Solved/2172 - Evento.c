 #include <stdio.h>

 int main(){
     unsigned long long int x, m;
     scanf("%llu %llu", &x, &m);
     while(x != 0 && m != 0){
         m *= x;
         printf("%llu\n", m);
         scanf("%llu %llu", &x, &m);
     }
     return(0);
 }
