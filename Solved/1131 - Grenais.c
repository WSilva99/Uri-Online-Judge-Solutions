#include <stdio.h>

int main(){
    int i, g, c, qj = 0, vi = 0, vg = 0, em = 0;
    while(1){
        scanf("%d %d", &i, &g);
        if(i > g){
            vi++;
        }else if(i < g){
            vg++;
        }else{
            em++;
        }
        qj++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &c);
        if(c == 2){
            printf("%d grenais\n", qj);
            printf("Inter:%d\n", vi);
            printf("Gremio:%d\n", vg);
            printf("Empates:%d\n", em);
            if(i > g){
                printf("Inter venceu mais\n");
            }else if(i < g){
                printf("Gremio venceu mais\n");
            }else{
                printf("Nao houve vencedor\n");
            }
            break;
        }
    }

    return(0);
}
