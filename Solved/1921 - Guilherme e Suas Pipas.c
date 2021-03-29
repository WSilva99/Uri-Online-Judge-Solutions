#include <stdio.h>

int main(){
    unsigned long long int n, s;
    scanf("%llu", &n);
    s = (n/2.0)*(n-3);
    printf("%llu\n", s);
    return(0);
}

