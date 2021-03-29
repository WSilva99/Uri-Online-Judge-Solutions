#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    char p[100];
    scanf("%d", &n);
    while(n > 0){
        setbuf(stdin, NULL);
        scanf("%s", p);
        printf("gzuz\n");
        n--;
    }
    return 0;
}
