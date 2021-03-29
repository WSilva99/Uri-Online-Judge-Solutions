#include <stdio.h>

int main(){
    int c, n, op[] = {1, -1}, r = 0, i;
    scanf("%d", &c);
    while(c > 0){
        scanf("%d", &n);
        i = 0;
        while(n > 0){
            r += op[i];
            i++;
            if(i == 2)
                i = 0;
            n--;
        }
        c--;
        printf("%d\n", r);
        r = 0;
    }
    return(0);
}