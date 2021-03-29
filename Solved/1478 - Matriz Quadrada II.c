#include <stdio.h>
#include <math.h>

int main(){
    int n, l, c;
    while(scanf("%d", &n)){
        if(n == 0)
            break;
        int m[n][n], inc = 1, prox = 0;

        for(c = 0; c < n; c++){
            for(l = c; l < n; l++){
                m[l][c] = inc;
                inc++;
            }
            inc = 1;
        }

        for(l = 0; l < n; l++){
            for(c = l; c < n; c++){
                m[l][c] = inc;
                inc++;
            }
            inc = 1;
        }

        for(l = 0; l < n; l++){
            printf("%3d", m[l][0]);
            for(c = 1; c < n; c++){
                printf(" %3d", m[l][c]);
            }
            printf("\n");
        }
        printf("\n");

    }
    return(0);
}

