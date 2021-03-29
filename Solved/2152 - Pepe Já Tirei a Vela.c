 #include <stdio.h>

 int main(){
     int c, h, m, o;
     scanf("%d", &c);
     while(c > 0){
         scanf("%d %d %d", &h, &m, &o);
         if(o == 1)
            printf("%02d:%02d - A porta abriu!\n", h, m);
         else
            printf("%02d:%02d - A porta fechou!\n", h, m);
         c--;
     }
     return(0);
 }



