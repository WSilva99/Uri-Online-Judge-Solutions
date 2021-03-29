#include <stdio.h>

int main() {
    int i;
    float n1, n2, n3, m;
    scanf("%d", &i);
    for(i; i > 0; i--){
        scanf("%f %f %f", &n1, &n2, &n3);
        m = (n1*2+n2*3+n3*5)/10;
        printf("%.1f\n", m);
    }
    return 0;
}
