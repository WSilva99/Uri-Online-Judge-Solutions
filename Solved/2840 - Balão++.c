#include <stdio.h>
#include <stdlib.h>

int main() {
    float r, l, v;
    int x;
    scanf("%f", &r);
    scanf("%f", &l);
    v = (4*3.1415*(r*r*r))/3;
    x = l / v;
    printf("%d\n", x);
    return(0);
}
