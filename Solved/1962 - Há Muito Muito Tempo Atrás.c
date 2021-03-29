#include <stdio.h>
#include <math.h>

int main(){
    int n, t, s;
    scanf("%d", &n);
    while(n > 0){
        scanf("%d", &t);
        s = 2015 - t;
        if(s <= 0)
            printf("%d A.C.\n", abs(s)+1);
        else
            printf("%d D.C.\n", s);
        n--;
    }
    return(0);
}

