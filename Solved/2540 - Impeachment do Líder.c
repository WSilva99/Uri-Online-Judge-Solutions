#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, v, sv = 0;
    float m;
    while(scanf("%d", &n) != EOF){
        m = 2.0*(n/3.0);
        while(n--){
            scanf("%d", &v);
            sv += v;
        }
        if(sv >= m)
            printf("impeachment\n");
        else
            printf("acusacao arquivada\n");
        sv = 0;
    }
    return(0);
}
