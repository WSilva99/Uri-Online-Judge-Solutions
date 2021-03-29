#include <stdio.h>

int main(){
    int n, i, j, t;
    while(scanf("%d", &n) != EOF){
        int m[n][n];
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                m[i][j] = 3;
            }
        }

        for(i = 0; i < n; i++){
            m[i][i] = 1;
            m[n-i-1][i] = 2;
        }

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                printf("%d", m[i][j]);
            }
            printf("\n");
        }

    }
    return(0);
}
