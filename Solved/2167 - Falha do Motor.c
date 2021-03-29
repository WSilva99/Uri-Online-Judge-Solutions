 #include <stdio.h>

 int main(){
     int n, i, x, last, flag = 0;
     scanf("%d", &n);
     scanf("%d", &last);
     i = 2;
     while(i <= n){
        scanf("%d", &x);
        if(last > x && flag == 0)
            flag = i;
        last = x;
        i++;
     }
     printf("%d\n", flag);
     return(0);
 }




