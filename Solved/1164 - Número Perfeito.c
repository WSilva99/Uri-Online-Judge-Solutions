#include <stdio.h>

int main(){
    int n, x, i, sd = 0;
    scanf("%d", &n);
    while(n > 0){
        scanf("%d", &x);
        for(i = 1; i < x; i++)
            if(x%i == 0)
                sd += i;
        if(sd == x)
                printf("%d eh perfeito\n", x);
        else
                printf("%d nao eh perfeito\n", x);
        sd = 0;
        n--;
    }
    return(0);
}
