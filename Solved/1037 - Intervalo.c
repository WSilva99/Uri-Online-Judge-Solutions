#include <stdio.h>

int main(){
    float p;
    scanf("%f", &p);
    if(p >= 0 && p <= 25){
        printf("Intervalo [0,25]\n");
    }else if(p > 25 && p <= 50){
        printf("Intervalo (25,50]\n");
    }else if(p > 50 && p <= 75){
        printf("Intervalo (50,75]\n");
    }else if(p > 75 && p <= 100){
        printf("Intervalo (75,100]\n");
    }else{
        printf("Fora de intervalo\n");
    }

    return(0);
}
