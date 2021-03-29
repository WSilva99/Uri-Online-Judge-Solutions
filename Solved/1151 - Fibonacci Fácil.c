#include <stdio.h>

int main(){
    int n, n1 = 0, n2 = 1, phi = 1;
    scanf("%d", &n);
    printf("%d %d ", n1, n2);
    for(n; n > 2; n--){
        phi = n1 + n2;
        n1 = n2;
        n2 = phi;
        if(n != 3){
            printf("%d ", phi);
        }else{
            printf("%d\n", phi);
        }

    }
    return(0);
}
