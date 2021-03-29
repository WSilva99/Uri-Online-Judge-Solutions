#include <stdio.h>

int main(){
    int n, x, y, i, s = 0;
    scanf("%d", &n);
    while(n > 0){
        scanf("%d %d", &x, &y);
        while(y > 0){
            if(x%2 != 0){
                s += x;
                y--;
            }
            x++;
        }
        printf("%d\n", s);
        s = 0;
        n--;
    }
    return(0);
}
