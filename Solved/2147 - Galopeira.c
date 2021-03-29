 #include <stdio.h>
 #include <string.h>

 int main(){
     int c, nl;
     double t;
     char galopeira[10001];
     scanf("%d", &c);
     while(c > 0){
         setbuf(stdin, NULL);
         scanf("%s", &galopeira);
         nl = (int) strlen(galopeira);
         t = nl * (1.0 / 100);
         printf("%.2lf\n", t);
         c--;
     }
     return(0);
 }


