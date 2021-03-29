#include <stdio.h>
#include <math.h>

int main(){
    double conta = 0, prods[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
    int n, q, x;
    scanf("%d", &n);
    while(n > 0){
        scanf("%d %d", &x, &q);
        conta += q * prods[x-1001];
        n--;
    }
    printf("%.2lf\n", conta);
    return(0);
}
