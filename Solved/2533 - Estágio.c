#include <stdio.h>

int main(){
    int m, n, c;
    float sup = 0, inf = 0, ira;
    while(scanf("%d", &m) != EOF){
        while(m--){
            scanf("%d %d", &n, &c);
            sup += n * c;
            inf += c;
        }
        ira = sup/(inf*100.0);
        printf("%.4f\n", ira);
        sup = 0;
        inf = 0;
    }
    return(0);
}




