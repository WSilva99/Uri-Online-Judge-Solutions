#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d", &a, &b);
    if(a != b)
        if(a > b)
            c = a;
        else
            c = b;
    else
        c = a;
    printf("%d\n", c);
    return(0);
}

