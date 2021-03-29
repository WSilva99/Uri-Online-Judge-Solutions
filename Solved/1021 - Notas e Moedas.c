#include <stdio.h>
 
int main() {
 
    double valor;
    int v, n100, n50, n20, n10, n5, n2;
    int m1, m50, m25, m10, m5, m01, r;
    scanf("%lf", &valor);
    v = valor * 100;
    n100 = v/10000; r = v%10000;
    n50 = r/5000; r = r%5000;
    n20 = r/2000; r = r%2000;
    n10 = r/1000; r = r%1000;
    n5 = r/500; r = r%500;
    n2 = r/200; r = r%200;
    m1 = r/100; r = r%100;
    m50 = r/50; r = r%50;
    m25 = r/25; r = r%25;
    m10 = r/10; r = r%10;
    m5 = r/5; r = r%5;
    m01 = r/1; r = r%1;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m5, m01);

 
    return 0;
}