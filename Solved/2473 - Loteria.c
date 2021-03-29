#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, cont = 0, sorteado[6], x;
    for(i = 0; i < 6; i++)
        scanf("%d", &sorteado[i]);
    for(i = 0; i < 6; i++){
        scanf("%d", &x);
        for(j = 0; j < 6; j++)
            if(x == sorteado[j])
                cont++;
    }
    if(cont == 6){
        printf("sena\n");
        return 0;
    }else if(cont == 5){
        printf("quina\n");
        return 0;
    }else if(cont == 4){
        printf("quadra\n");
        return 0;
    }else if(cont == 3){
        printf("terno\n");
        return 0;
    }else{
        printf("azar\n");
        return 0;
    }
}
