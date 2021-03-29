 #include <stdio.h>
 #include <string.h>

 int main(){
     int n, i, c = 0;
     char s[101];
     scanf("%s", &s);
     n = strlen(s);
     for(i = 0; i < n; i++)
        if(s[i] == '1')
            c++;
     printf("%s", s);
     if(c%2 == 0)
        printf("0\n");
     else
        printf("1\n");
     return(0);
 }






