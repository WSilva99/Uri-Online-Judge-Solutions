 #include <stdio.h>
 #define MAX 501

 int main(){
     int nl;
     char entrada[MAX];
     gets(entrada);
     nl = (int) strlen(entrada);
     if(nl <= 80)
        printf("YES\n");
     else
        printf("NO\n");
     return(0);
 }




