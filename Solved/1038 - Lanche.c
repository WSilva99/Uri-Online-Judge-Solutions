#include <stdio.h>

int main(){
    int cod, qtd;
    float p;
    scanf("%d %d", &cod, &qtd);
    if(cod == 1){
        p = 4.0 * qtd;
        printf("Total: R$ %.2f\n", p);
    }else if(cod == 2){
        p = 4.5 * qtd;
        printf("Total: R$ %.2f\n", p);
    }else if(cod == 3){
        p = 5.0 * qtd;
        printf("Total: R$ %.2f\n", p);
    }else if(cod == 4){
        p = 2.0 * qtd;
        printf("Total: R$ %.2f\n", p);
    }else if(cod == 5){
        p = 1.5 * qtd;
        printf("Total: R$ %.2f\n", p);
    }

    return(0);
}
