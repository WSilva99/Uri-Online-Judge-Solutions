#include <stdio.h>

int main(){
    int x, y, s = 0;
    scanf("%d", &x);
    scanf("%d", &y);
    if(x > y){
        x = x + y;
        y = x - y;
        x = x - y;
    }
    for(x += 1; x < y; x++){
        if(x%5 == 2 || x%5 == 3){
            printf("%d\n", x);
        }
    }
    return(0);
}
