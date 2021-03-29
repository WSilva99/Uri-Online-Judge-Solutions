#include <stdio.h>

int main(){
    int s, t, f, h;
    scanf("%d %d %d", &s, &t, &f);
    h = s;
    h += t;
    if(h > 24)
        h -= 24;
    if(h < 0)
        h += 24;
    h += f;
    if(h > 24)
        h -=24;
    if(h < 0)
        h += 24;
    printf("%d\n", h);
    return(0);
}



