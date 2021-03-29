#include <stdio.h>

int main(){
    int t;
    char entrada[100];
    char saida[] = "Ciencia da Computacao";
    scanf("%d", &t);
    while(t > 0){
        setbuf(stdin, NULL);
        gets(entrada);
        t--;
    }
    printf("%s\n", saida);
    return(0);
}

