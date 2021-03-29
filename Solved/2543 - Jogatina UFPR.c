#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, id, j, cont = 0;
    while(scanf("%d", &n) != EOF){
        scanf("%d", &i);
        while(n--){
            scanf("%d %d", &id, &j);
            if(id == i && j == 0)
                cont++;
        }
        printf("%d\n", cont);
        cont = 0;
    }
    return(0);
}
