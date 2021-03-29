#include <stdio.h>

int main(){
    float i, j;
    int v1, v2;
    for(i = 0; i <= 2.2; i+=0.2){
        for(j = 1 ; j <= 3; j++){
            v1 = i*10;
            v2 = (i+j)*10;
            if(v1%10 == 0 && v2%10 == 0){
                printf("I=%d J=%d\n", (int) i, (int) (j+i));
            }else if(v1%10 == 0){
                printf("I=%d J=%.1f\n", (int) i, (j+i));
            }else{
                printf("I=%.1f J=%.1f\n", i, (j+i));
            }

        }
    }
    return(0);
}
