#include <stdio.h>

int main(){
    int cont = 0;
    float n, sn = 0, m;
    while (1){
        scanf("%f", &n);
        if(n < 0 || n > 10){
            printf("nota invalida\n");
        }else{
            sn += n;
            cont++;
        }
        if(cont == 2){
            m = sn/2.0;
            printf("media = %.2f\n", m);
            break;
        }
    }
    return(0);
}
