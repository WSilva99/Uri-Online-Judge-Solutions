#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int l, c, d, t1 = 0, t2 = 0;
    scanf("%d %d", &l, &c);
    d = 1*sqrt(2);
    t2 += 2 * ((l/d)-1);
    t2 += 2 * ((c/d)-1);
    t1 += (l/d)*(c/d)+((l/d)-1)*((c/d)-1);
    printf("%d\n%d\n", t1, t2);
    return 0;
}

