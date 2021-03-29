#include <stdio.h>
int main(){
    float n[100], num;
    int i;
    for(i = 0; i < 100; i++){
        scanf("%f", &num);
        n[i] = num;
    }
    for(i = 0; i < 100; i++)
        if(n[i] <= 10)
            printf("A[%d] = %.1f\n", i, n[i]);
    return(0);
}
