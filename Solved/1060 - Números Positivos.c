#include <stdio.h>

int main() {

    int i, c = 0;
    float num;
    for(i=1; i<=6; i++){
        scanf("%f", &num);
        if(num > 0)
            c++;
    }
    printf("%d valores positivos\n", c);


    return 0;
}
