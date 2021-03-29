#include <stdio.h>
int main(){
    int t, pa, pb, i;
    double g1, g2;
    scanf("%d", &t);
    while (t>0){
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        for(i = 0; pa <= pb; i++){
            pa += (pa*g1)/100;
            pb += (pb*g2)/100;
            if(i > 100){
                break;
            }
        }
        if(i <= 100)
            printf("%d anos.\n", i);
        else
            printf("Mais de 1 seculo.\n");
        t--;
    }
    return(0);
}
