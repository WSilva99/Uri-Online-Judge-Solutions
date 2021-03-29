#include <stdio.h>
#include <math.h>

int main(){
    int a, n, anterior, c;
    scanf("%d %d", &a, &n);
    scanf("%d", &c);
    anterior = c;
    while(n > 1){
        scanf("%d", &c);
        if(abs(anterior-c) > a){
            printf("GAME OVER\n");
            return (0);
        }
        anterior = c;
        n--;
    }
    printf("YOU WIN\n");
    return(0);
}

