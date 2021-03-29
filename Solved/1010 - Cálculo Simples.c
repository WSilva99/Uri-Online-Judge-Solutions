#include <stdio.h>
 
int main() {
 
    int p1, p1u, p2, p2u;
    float p1v, p2v, preco;
    scanf("%d %d %f", &p1, &p1u, &p1v);
    scanf("%d %d %f", &p2, &p2u, &p2v);
    preco = p1u * p1v + p2u * p2v;
    printf("VALOR A PAGAR: R$ %.2f\n", preco);
 
    return 0;
}