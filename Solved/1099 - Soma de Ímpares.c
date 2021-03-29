#include <stdio.h>

int main(){
    int n, x, y, s = 0;
    scanf("%d", &n);
    for(n; n > 0; n--){
        scanf("%d %d", &x, &y);
        if(x > y){
            x = x + y;
            y = x - y;
            x = x - y;
        }
        for(x+=1; x < y; x++){
            if(x%2 != 0){
                s += x;
            }
        }
        printf("%d\n", s);
        s = 0;
    }
    return(0);
}
