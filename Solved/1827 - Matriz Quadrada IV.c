#include <stdio.h>
#include <math.h>

int main(){
    int n, l, c;
    while(scanf("%d", &n) != EOF){
        int m[n][n];

        for(l = 0; l < n; l++){
            for(c = 0; c < n; c++){
                m[l][c] = 0;
                if(l == c)
                    m[l][c] = 2;
                if(l == n-1-c)
                    m[l][c] = 3;
            }
        }

        for(l = (n/3); l < n-(n/3); l++){
            for(c = (n/3); c < n-(n/3); c++){
                m[l][c] = 1;
            }
        }

        m[(n/2)][(n/2)] = 4;

        for(l = 0; l < n; l++){
            for(c = 0; c < n; c++){
                printf("%d", m[l][c]);
            }
            printf("\n");
        }
        printf("\n");

    }
    return(0);
}

