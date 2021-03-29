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
    for(x; x <= y; x++){
        if(x%13 != 0){
            s += x;
        }
    }
    printf("%d\n", s);

    return(0);
}
