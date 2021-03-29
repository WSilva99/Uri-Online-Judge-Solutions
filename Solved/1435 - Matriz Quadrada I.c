#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

int main(){
    int tam, m[MAX][MAX], g, i, j;
    while(scanf("%d", &tam)){
        if(tam == 0){
            break;
        }

        int ini = 0, fim = tam - 1, inc = 1;

        for(g = 0; g < tam; g++){
            for(i = ini; i <= fim; i++){
                for(j = ini; j <= fim; j++){
                    if(i == fim || i == ini || j == fim || j == ini){
                        m[i][j] = inc;
                    }
                }
            }
            inc++;
            fim--;
            ini++;
        }
        for(i = 0; i < tam; i++){
            for(j = 0; j < tam; j++){
                    printf("%3d", m[i][j]);
                    if(j != tam-1)
                        printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return (0);
}
