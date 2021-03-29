#include <stdio.h>

int main() {

    int i, c = 0;
    float num, m = 0;
    for(i=1; i<=6; i++){
        scanf("%f", &num);
        if(num > 0){
            m = m + num;
            c++;
        }
    }
    printf("%d valores positivos\n", c);
    printf("%.1f\n", (m/c));

    return 0;
}
