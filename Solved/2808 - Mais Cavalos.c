#include <stdio.h>
#include <stdlib.h>

int main(){
    char xp, xj;
    int yp, yj;
    scanf("%c%d %c%d", &xp, &yp, &xj, &yj);
    if(xj == xp+2 || xj == xp-2){
        if(yj == yp+1 || yj == yp-1){
            printf("VALIDO\n");
            return 0;
        }
    }else if(xj == xp+1 || xj == xp-1){
        if(yj == yp+2 || yj == yp-2){
            printf("VALIDO\n");
            return 0;
        }
    }
    printf("INVALIDO\n");
    return 0;
}
