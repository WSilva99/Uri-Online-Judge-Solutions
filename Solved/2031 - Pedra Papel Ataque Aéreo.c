#include <stdio.h>
#include <string.h>
#define MAX 8

int main(){
    int n;
    char jogador1[MAX], jogador2[MAX];
    scanf("%d", &n);
    while(n > 0){
        setbuf(stdin, NULL);
        scanf("%s", &jogador1);
        setbuf(stdin, NULL);
        scanf("%s", &jogador2);
        if(strcmp(jogador1, jogador2) == 0){
            if(strcmp(jogador1, "pedra") == 0){
                printf("Sem ganhador\n");
            }else if(strcmp(jogador1, "papel") == 0){
                printf("Ambos venceram\n");
            }else if(strcmp(jogador1, "ataque") == 0){
                printf("Aniquilacao mutua\n");
            }
        }else{
            if(strcmp(jogador1, "pedra") == 0){
                if(strcmp(jogador2, "ataque") == 0){
                    printf("Jogador 2 venceu\n");
                }else{
                    printf("Jogador 1 venceu\n");
                }
            }else if(strcmp(jogador1, "papel") == 0){
                printf("Jogador 2 venceu\n");
            }else if(strcmp(jogador1, "ataque") == 0){
                printf("Jogador 1 venceu\n");
            }
        }
        n--;
    }
    return(0);
}


