#include <stdio.h>

int main(){
    int n, c = 1, i, j, inc, qtdn;
    while(scanf("%d", &n) != EOF){
        qtdn = 1;
        for(i = 0; i < n; i++){
            qtdn += (n-i);
        }
        if(qtdn > 1)
            printf("Caso %d: %d numeros\n", c, qtdn);
        else
            printf("Caso %d: %d numero\n", c, qtdn);
        printf("0");
        inc = 1;
        for(i = 1; inc <= n; i++){
            for(j = 1; j <= inc; j++){
                printf(" %d", inc);
            }
            inc++;
        }
        printf("\n");
        printf("\n");
        c++;
    }
    return(0);
}


