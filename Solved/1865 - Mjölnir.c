#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
    int c, n;
    char nome[MAX];
    scanf("%d", &c);
    while(c > 0){
        scanf("%s %d", &nome, &n);
        if(strcmp(nome, "Thor") == 0 && n > 0)
            printf("Y\n");
        else
            printf("N\n");
        c--;
    }
    return(0);
}
