#include <stdio.h>

int main(){
    int t, n, i;
    long long phi[61];
    phi[0] = 0;
    phi[1] = 1;
    for(i = 2; i < 61; i++){
        phi[i] = phi[i-2] + phi[i-1];
    }
    scanf("%d", &t);
    while(t > 0){
        scanf("%d", &n);
        printf("Fib(%d) = %lld\n", n, phi[n]);
        t--;
    }
    return(0);
}
