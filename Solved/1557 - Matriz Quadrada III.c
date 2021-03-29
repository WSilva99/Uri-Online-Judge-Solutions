#include <stdio.h>
#include <math.h>

int main(){
    int n, i, j, k;
    while(scanf("%d", &n)){
        if(n == 0)
            break;

        int m[n][n];
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                m[i][j] = pow(2, i+j);
            }
        }

        int ultimo = m[n-1][n-1];
        int just = 0;
        while(ultimo != 0){
            just++;
            ultimo /= 10;
        }

        int atual, backspace;

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                atual = m[i][j];
                backspace = 0;
                while(atual != 0){
                    backspace++;
                    atual /= 10;
                }
                if(just == 1){
                    if(j == 0)
                        printf("%d", m[i][j]);
                    else
                        printf(" %d", m[i][j]);
                }else{
                    for(k = 0; k < just-backspace; k++){
                        printf(" ");
                    }
                    if(j == 0)
                        printf("%d", m[i][j]);
                    else
                        printf(" %d", m[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");

    }
    return(0);
}
