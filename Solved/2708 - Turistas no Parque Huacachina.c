#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char inf[7];
    int x;
    int jipes = 0, turistas = 0;

    while(1){
        setbuf(stdin, NULL);
        scanf("%s", &inf);
        if(strcmp(inf, "ABEND") == 0){
            break;
        }
        scanf("%d", &x);
        if(strcmp(inf, "SALIDA") == 0){
            jipes++;
            turistas += x;
        }else if(strcmp(inf, "VUELTA") == 0){
            jipes--;
            turistas -= x;
        }
    }
    printf("%d\n%d\n", turistas, jipes);
    return 0;
}

