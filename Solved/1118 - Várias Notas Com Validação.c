#include <stdio.h>

int main(){
    int op, cont = 0;
    float n, sn = 0, m;

    do{
        scanf("%f", &n);
        if(n < 0 || n > 10){
            printf("nota invalida\n");
        }else{
            sn += n;
            cont++;
        }
    }while(cont < 2);
    m = sn/2.0;
    printf("media = %.2f\n", m);
    cont = 0;
    sn = 0;
    do{
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &op);
        switch (op){
            case 1:
                do{
                scanf("%f", &n);
                if(n < 0 || n > 10){
                printf("nota invalida\n");
                }else{
                sn += n;
                cont++;
                }
                }while(cont < 2);
                m = sn/2.0;
                printf("media = %.2f\n", m);
                cont = 0;
                sn = 0;
            break;

            default:
                printf("");
        }
    }while(op != 2);

    return(0);
}
