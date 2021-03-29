#include <stdio.h>

int main(){
    int n, e, m2 = 0, m3 = 0, m4 = 0, m5 = 0;
    scanf("%d", &n);
    while(n > 0){
        scanf("%d", &e);
        if(e%2 == 0)
            m2++;
        if(e%3 == 0)
            m3++;
        if(e%4 == 0)
            m4++;
        if(e%5 == 0)
            m5++;
        n--;
    }
    printf("%d Multiplo(s) de 2\n", m2);
    printf("%d Multiplo(s) de 3\n", m3);
    printf("%d Multiplo(s) de 4\n", m4);
    printf("%d Multiplo(s) de 5\n", m5);
    return(0);
}
