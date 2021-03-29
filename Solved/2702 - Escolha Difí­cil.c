#include <stdio.h>

int main(){
    int ca, ba, pa, cr, br, pr, ins = 0;
    scanf("%d %d %d", &ca, &ba, &pa);
    scanf("%d %d %d", &cr, &br, &pr);
    if(ca < cr)
        ins += (cr-ca);
    if(ba < br)
        ins += (br-ba);
    if(pa < pr)
        ins += (pr-pa);
    printf("%d\n", ins);
    return(0);
}
