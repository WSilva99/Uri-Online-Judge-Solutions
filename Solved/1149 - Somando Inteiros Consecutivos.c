#include <stdio.h>

int main(){
    int a, n, x, rs = 0;
    scanf("%d %d", &a, &n);
    while(n<=0)
        scanf(" %d", &n);
    for(x = 0; x <= n-1; x++){
        rs += a;
        a++;
    }
    printf("%d\n", rs);
    return(0);
}
