#include <stdio.h>

int main() {

    int i, num, cpar = 0, cimp = 0, cpos = 0, cneg = 0;
    for(i=1; i<=5; i++){
        scanf("%d", &num);
        if(num%2 == 0)
            cpar++;
        else
            cimp++;
        if(num>0)
            cpos++;
        if(num<0)
            cneg++;
    }
    printf("%d valor(es) par(es)\n", cpar);
    printf("%d valor(es) impar(es)\n", cimp);
    printf("%d valor(es) positivo(s)\n", cpos);
    printf("%d valor(es) negativo(s)\n", cneg);

    return 0;
}
