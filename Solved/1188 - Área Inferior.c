#include <stdio.h>

int main(){
    int c, pl, pc;
    char op[3];
    double soma = 0, m[12][12];

    scanf("%d", &c);
    scanf("%s", &op);

    for(pl = 0; pl < 12; pl++)
        for(pc = 0; pc < 12; pc++)
            scanf("%lf", &m[pl][pc]);

    for(pl = 11; pl > 6; pl--)
        for(pc = abs(pl-12); pc < pl; pc++){
            soma += m[pl][pc];
        }

    if(op[0] == 'S'){
        printf("%.1lf\n", soma);
    }else if(op[0] == 'M'){
        printf("%.1lf\n", (soma/30));
    }

    return(0);
}
