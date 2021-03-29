 #include <stdio.h>
 #include <string.h>

 int main(){
    char piscada[8][4] = {"---", "--*", "-*-", "-**", "*--", "*-*", "**-", "***"};
    char grito[8] = {"caw caw"};
    char entrada[8];
    int i, j, olho = 0, numero = 0;
    while(olho < 3){
        setbuf(stdin, NULL);
        gets(entrada);

        if(strcmp(entrada, grito) == 0){
            printf("%d\n", numero);
            olho++;
            numero = 0;
        }

        for(i = 0; i < 8; i++){
            if(strcmp(entrada, piscada[i]) == 0)
                j = i;
        }
        numero += j;
        j = 0;
    }
    return(0);
 }



