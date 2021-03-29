#include <stdio.h>

int main(){
    int c, i, p;
    for(i = 0; i < 4; i++){
        scanf("%d", &c);
        if(c == 1)
            p = i+1;
    }
    printf("%d\n", p);
    return(0);
}
