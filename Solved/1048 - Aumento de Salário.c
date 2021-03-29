#include <stdio.h>

int main() {

    float s, aj, ns;
    scanf("%f", &s);

    if(s <= 400.00){
        aj = s*15/100;
        ns = s + aj;
        printf("Novo salario: %.2f\n", ns);
        printf("Reajuste ganho: %.2f\n", aj);
        printf("Em percentual: 15 %%\n");
    }else if(s <= 800.00){
        aj = s*12/100;
        ns = s + aj;
        printf("Novo salario: %.2f\n", ns);
        printf("Reajuste ganho: %.2f\n", aj);
        printf("Em percentual: 12 %%\n");
    }else if(s <= 1200.00){
        aj = s*10/100;
        ns = s + aj;
        printf("Novo salario: %.2f\n", ns);
        printf("Reajuste ganho: %.2f\n", aj);
        printf("Em percentual: 10 %%\n");
    }else if(s <= 2000.00){
        aj = s*7/100;
        ns = s + aj;
        printf("Novo salario: %.2f\n", ns);
        printf("Reajuste ganho: %.2f\n", aj);
        printf("Em percentual: 7 %%\n");
    }else{
        aj = s*4/100;
        ns = s + aj;
        printf("Novo salario: %.2f\n", ns);
        printf("Reajuste ganho: %.2f\n", aj);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
