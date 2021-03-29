#include <stdio.h>

int main() {
    int x, z, v = 0, cont=0;
    scanf("%d", &x);
    do{
    	scanf("%d", &z);
    }while(z <= x);
    for(z; z >= v; x++){
    	v += x;
    	cont++;
    }
    printf("%d\n", cont);
    return 0;
}
