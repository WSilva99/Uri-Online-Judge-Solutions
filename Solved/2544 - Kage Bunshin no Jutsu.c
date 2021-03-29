#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, q = 1, cont = 0;
    while(scanf("%d", &n) != EOF){
        while(q < n){
            q += q;
            cont++;
        }
        printf("%d\n", cont);
        cont = 0;
        q = 1;
    }
    return(0);
}

