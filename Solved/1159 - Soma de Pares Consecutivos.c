#include <stdio.h>

int main(){
    int x, i, s = 0;

    do{
        scanf("%d", &x);
        if(x == 0)
            break;
        for(i = x; i < x + 10; i++)
            if(i%2 == 0)
                s += i;
        printf("%d\n", s);
        s=0;
    }while(x != 0);

    return(0);
}
