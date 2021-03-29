#include <stdio.h>

int main(){
    int possible[] = {4, 7, 10, 12, 15, 20,
                        22, 25, 30, 40, 52,
                        55, 60, 70, 102, 105,
                        110, 120, 150, 200};
    int n, m, i, p = 0;
    while(1){
        scanf("%d %d", &n, &m);
        if(n == 0 && m == 0)
            break;
        for(i = 0; i < 20 ; i++){
            if(possible[i] == (m-n)){
                p = 1;
                break;
            }
        }
        if(p != 0)
            printf("possible\n");
        else
            printf("impossible\n");
        p = 0;
    }
    return(0);
}
