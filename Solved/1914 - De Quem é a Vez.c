#include <stdio.h>
#include <string.h>

int main(){
    int t, i, j, n1, n2;
    char jogador1[10], jogador2[10];
    char jogada1[6], jogada2[6];
    scanf("%d", &t);

    while(t > 0){
        setbuf(stdin, NULL);
        scanf("%s %s %s %s", &jogador1, &jogada1, &jogador2, &jogada2);
        scanf("%d %d", &n1, &n2);

        if(strcmp(jogada1, "PAR") == 0)
            if((n1+n2)%2 == 0)
                printf("%s\n", jogador1);
            else
                printf("%s\n", jogador2);

        if(strcmp(jogada1, "IMPAR") == 0)
            if((n1+n2)%2 != 0)
                printf("%s\n", jogador1);
            else
                printf("%s\n", jogador2);
        t--;
    }
    return(0);
}
