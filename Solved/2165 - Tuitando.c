 #include <stdio.h>
 #define MAX 501

 int main(){
     int nl;
     char entrada[MAX];
     gets(entrada);
     nl = (int) strlen(entrada);
     if(nl <= 140)
        printf("TWEET\n");
     else
        printf("MUTE\n");
     return(0);
 }
