#include <stdio.h>
#define MAX 100

int main(){
    unsigned long long int p;
    while(scanf("%llu", &p)){
        if(p == -1)
            break;
        if(p == 0){
            printf("0\n");
            continue;
        }
        printf("%llu\n", p-1);
    }
    return(0);
}

