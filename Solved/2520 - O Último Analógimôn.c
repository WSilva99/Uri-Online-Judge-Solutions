#include <stdio.h>
#include <math.h>

int main(){
    int n, m, x, i, j, xp, yp, xa, ya;
    while(scanf("%d %d", &n, &m) != EOF){
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                scanf("%d", &x);
                if(x == 1){
                    xp = j;
                    yp = i;
                    continue;
                }
                if(x == 2){
                    xa = j;
                    ya = i;
                }
            }
        }
        int d;
        d = abs(xp-xa);
        d += abs(yp-ya);
        printf("%d\n", abs(d));
    }
    return(0);
}

