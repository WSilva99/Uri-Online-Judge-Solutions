#include <stdio.h>
int main(){
    int n, i, mv, mp;
    scanf("%d", &n);
    int v[n];
    for(i = 0; i < n; i++)
        scanf("%d", &v[i]);
    mv = v[0];
    mp = 0;
    for(i = 0; i < n; i++){
        if(v[i] < mv){
            mv = v[i];
            mp = i;
        }
    }
    printf("Menor valor: %d\n", mv);
    printf("Posicao: %d\n", mp);
    return(0);
}
