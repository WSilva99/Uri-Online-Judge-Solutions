#include <stdio.h>

int main(){
    int n, m, l, c, jogadores = 0;
    scanf("%d %d", &n, &m);
    int jogos[n][m];
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &jogos[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        int cont = 0;
        for(j = 0; j < m; j++){
            if(jogos[i][j] != 0){
                cont++;
            }
        }
        if(cont == m){
            jogadores++;
        }
    }
    printf("%d\n", jogadores);
    return(0);
}

