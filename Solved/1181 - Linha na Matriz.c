#include <stdio.h>

int main(){
    int l, pl, pc;
    char op[3];
    double soma = 0, m[12][12];
    
    scanf("%d", &l);
    scanf("%s", &op);
    
    for(pl = 0; pl < 12; pl++)
        for(pc = 0; pc < 12; pc++)
            scanf("%lf", &m[pl][pc]);

    for(pc = 0; pc < 12; pc++)
        soma += m[l][pc];

    if(op[0] == 'S'){
        printf("%.1lf\n", soma);
    }else if(op[0] == 'M'){
        printf("%.1lf\n", (soma/12));
    }

    return(0);
}
