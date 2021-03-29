#include <stdio.h>
#include <string.h>
#define MAX 28

int main(){
    char alf[MAX];
    int n, i;
    while(scanf("%s", &alf) != EOF){
        scanf("%d", &n);
        int l[n];
        for(i = 0; i < n; i++){
            scanf("%d", &l[i]);
        }
        setbuf(stdin, NULL);
        for(i = 0; i < n; i++){
            printf("%c", alf[l[i]-1]);
        }
        printf("\n");
    }
    return(0);
}



