#include <stdio.h>

int main(){
    unsigned long long int v, n;
    int nn = 0;
    scanf("%llu", &v);
    n = v;
    while (n != 0){
        nn++;
        n /= 10;
    }
    int ninv[nn], i = 0;
    while (v != 0){
        ninv[i] = v % 10;
        v /= 10;
        i++;
    }
    for(i = 0; i < nn; i++)
        printf("%d", ninv[i]);
    printf("\n");
    return(0);
}


