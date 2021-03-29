#include <stdio.h>
#include <string.h>

int main(){
    int t, i;
    float x, menor;
    while(scanf("%d", &t) != EOF){
        scanf("%f", &menor);
        i = 1;
        while(i < t){
            scanf("%f", &x);
            if(x < menor)
                menor = x;
            i++;
        }
        printf("%.2f\n", menor);
    }
    return(0);
}


