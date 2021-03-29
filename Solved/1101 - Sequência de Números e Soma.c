#include <stdio.h>

int main(){
    int m = 1, n = 1, s = 0;

    while (1){
        scanf("%d %d", &m, &n);
        if(m <= 0 || n <= 0){
            break;
        }
        if (n > m){
            n = n + m;
            m = n - m;
            n = n - m;
        }
        for(n; n <= m; n++){
            printf("%d ", n);
            s += n;
        }
        printf("Sum=%d\n", s);
        s = 0;
    }
    return(0);
}
