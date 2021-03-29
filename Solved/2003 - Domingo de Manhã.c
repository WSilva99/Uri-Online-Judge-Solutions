#include <stdio.h>
#define HF 480

int main(){
    int h, m, hi, atraso;
    char p;
    while(scanf("%d", &h) != EOF){
        scanf("%c%d", &p, &m);
        hi = h*60+m+60;
        atraso = hi-HF;
        if(atraso < 0)
            atraso = 0;
        printf("Atraso maximo: %d\n", atraso);
    }
    return(0);
}

