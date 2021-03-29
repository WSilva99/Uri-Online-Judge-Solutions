#include <stdio.h>

int main(){
    int idade, soma = 0, cont = 0;
    double media;
    do{
        scanf("%d", &idade);
        if(idade >=0){
            soma += idade;
            cont++;
        }
    }while(idade >= 0);
    media = soma*1.0/cont;
    printf("%.2lf\n", media);
    return(0);
}
