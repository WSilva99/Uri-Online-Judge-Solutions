#include <stdio.h>

int main(){
    int n, f = 1;
    scanf("%d", &n);
    for(n; n > 0; n--){
        f *= n;
    }
    printf("%d\n", f);
    return(0);
}
