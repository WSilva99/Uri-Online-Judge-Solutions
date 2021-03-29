#include <stdio.h>

int main(){
    int i, j = 7, v = 5;
    for(i = 1; i <= 9; i+=2){
        for(j; j >= v; j--){
            printf("I=%d J=%d\n", i, j);
        }
        j+=5;
        v+=2;
    }
    return(0);
}
