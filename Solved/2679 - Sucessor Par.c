#include <stdio.h>
#include <string.h>

int main(){
    unsigned long long int x;
    scanf("%llu", &x);
    if(x%2 != 0)
        printf("%llu\n", x+1);
    else
        printf("%llu\n", x+2);
    return(0);
}

