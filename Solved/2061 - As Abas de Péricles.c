#include <stdio.h>
#include <string.h>

int main(){
    int n, m;
    char acao[7];
    scanf("%d %d", &n, &m);
    while(m > 0){
        setbuf(stdin, NULL);
        scanf("%s", &acao);
        if(strcmp(acao, "fechou") == 0)
            n++;
        if(strcmp(acao, "clicou") == 0)
            n--;
        m--;
    }
    printf("%d\n", n);
    return(0);
}
