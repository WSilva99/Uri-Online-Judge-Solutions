#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, x, last, seq = -3;
    scanf("%d", &last);
    for(i = 0; i < 4; i++){
        scanf("%d", &x);
        if(x > last && (seq == -3 || seq == 1)){
            seq = 1;
        }else if(x < last && (seq == -3 || seq == -1)){
            seq = -1;
        }else{
            seq = 0;
        }
        last = x;
    }
    if(seq == 1){
        printf("C\n");
    }else if(seq == -1){
        printf("D\n");
    }else{
        printf("N\n");
    }
    return 0;
}
