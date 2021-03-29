#include <stdio.h>
 
int main() {
 
    int hi, hf, duracao;
    scanf("%d %d", &hi, &hf);
    if(hi<hf){
        duracao = hf - hi;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }else{
        duracao = 24 - (hi - hf);
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }
 
    return 0;
}