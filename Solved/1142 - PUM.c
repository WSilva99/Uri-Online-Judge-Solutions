#include <stdio.h>

int main(){
    int l, i = 0, j = 4;
    scanf("%d", &l);
    while (l > 0){
        for(i += 1; i < j; i++){
            printf("%d ", i);
        }
        printf("PUM\n");
        j+=4;
        l--;
    }
    return(0);
}
