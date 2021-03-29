#include <stdio.h>

int main(){
    int n, x, y;
    float div = 0;
    scanf("%d", &n);
    while (n > 0){
        scanf("%d %d", &x, &y);
        if(y == 0){
            printf("divisao impossivel\n");
        }else{
            div = (float) x/y;
            printf("%.1f\n", div);
        }
        n--;
    }
    return(0);
}
