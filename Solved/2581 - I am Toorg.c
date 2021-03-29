#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int main(){
    int n;
    char s[MAX];
    scanf("%d", &n);
    while(n--){
        setbuf(stdin, NULL);
        gets(s);
        printf("I am Toorg!\n");
    }
    return(0);
}


