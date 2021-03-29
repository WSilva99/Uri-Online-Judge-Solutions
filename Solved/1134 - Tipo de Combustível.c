#include <stdio.h>

int main(){
    int c, a = 0, g = 0, d = 0;
    while(1){
        scanf("%d", &c);
        if(c == 1){
            a++;
        }else if(c == 2){
            g++;
        }else if(c == 3){
            d++;
        }else if(c == 4){
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n", a);
            printf("Gasolina: %d\n", g);
            printf("Diesel: %d\n", d);
            break;
        }
    }
    return(0);
}
