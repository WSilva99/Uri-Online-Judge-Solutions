#include <stdio.h>

int main() {
    int i, qc, qcc = 0, qcr = 0, qcs = 0;
    float pcc, pcr, pcs;
    char tc;
    scanf("%d", &i);
    for(i; i > 0; i--){
        scanf("%d %c", &qc, &tc);
        if(tc == 'C'){
            qcc += qc;
        }
        if(tc == 'R'){
            qcr += qc;
        }
        if(tc == 'S'){
            qcs += qc;
        }
    }

    qc = qcc+qcr+qcs;
    pcc = qcc*100.0/qc;
    pcr = qcr*100.0/qc;
    pcs = qcs*100.0/qc;
    printf("Total: %d cobaias\n", qc);
    printf("Total de coelhos: %d\n", qcc);
    printf("Total de ratos: %d\n", qcr);
    printf("Total de sapos: %d\n", qcs);
    printf("Percentual de coelhos: %.2f %%\n", pcc);
    printf("Percentual de ratos: %.2f %%\n", pcr);
    printf("Percentual de sapos: %.2f %%\n", pcs);
    return 0;
}
