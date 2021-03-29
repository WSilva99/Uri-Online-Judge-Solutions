#include <stdio.h>

int main(){
    int n, t, menor = 20, i, algoz;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d", &t);
        if(t < menor){
            menor = t;
            algoz = i;
        }
    }
    printf("%d\n", algoz);
    return(0);
}

