#include <stdio.h>
int main(){
    int t, num, i, par[5], impar[5], cp = 0, ci = 0;
    for(t = 0; t < 15; t++){
        scanf("%d", &num);
        if(num%2 == 0){
            par[cp] = num;
            cp++;
        }else{
            impar[ci] = num;
            ci++;
        }
        if(cp == 5)
            for(i = 0; i < 5; i++){
                printf("par[%d] = %d\n", i, par[i]);
                par[i] = 0;
                cp = 0;
            }
        if(ci == 5)
            for(i = 0; i < 5; i++){
                printf("impar[%d] = %d\n", i, impar[i]);
                impar[i] = 0;
                ci = 0;
            }
    }

    for(i = 0; i < 5; i++){
        if(impar[i] != 0)
            printf("impar[%d] = %d\n", i, impar[i]);
    }

    for(i = 0; i < 5; i++){
        if(par[i] != 0)
            printf("par[%d] = %d\n", i, par[i]);
    }
    
    return(0);
}
