#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, k = 0;
    char x[3][31], y[31];
    for(i = 1; i <=10; i++){
        setbuf(stdin, NULL);
        if(i == 3 || i == 7 || i == 9){
            scanf("%s", &x[k]);
            k++;
        }else{
            scanf("%s", &y);
        }
    }
    printf("%s\n", x[0]);
    printf("%s\n", x[1]);
    printf("%s\n", x[2]);
    return 0;
}

