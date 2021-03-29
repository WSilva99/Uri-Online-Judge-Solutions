#include <stdio.h>
 
int main() {
 
    int nf, qh;
    float hv, salario;
    scanf("%d %d %f", &nf, &qh, &hv);
    salario = qh * hv;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", nf, salario);
 
    return 0;
}