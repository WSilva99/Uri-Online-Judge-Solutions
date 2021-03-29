#include <stdio.h>

int main (){
    int x, y, i = 1, j = 1;
    scanf("%d %d", &x, &y);
    for(i; i <= y; i++){
        if(i%x == 0)
            printf("%d\n",i);
        else
            printf("%d ", i);
    }
    return(0);
}
