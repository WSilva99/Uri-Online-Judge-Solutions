#include <stdio.h>
#include <string.h>
#define MAX 26

int main(){
    int t;
    char vilao[MAX];
    scanf("%d", &t);
    while(t--){
        setbuf(stdin, NULL);
        scanf("%s", &vilao);
        printf("Y\n");
    }
    return(0);
}


