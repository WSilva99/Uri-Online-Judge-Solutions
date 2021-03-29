#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, amin, amax;
    while(scanf("%d %d %d", &n, &amin, &amax) != EOF){
        int i, a, entrou = 0;
        for(i = 0; i < n; i++){
            scanf("%d", &a);
            if(a >= amin && a <= amax)
                entrou++;
        }
        printf("%d\n", entrou);
    }
    return 0;
}

