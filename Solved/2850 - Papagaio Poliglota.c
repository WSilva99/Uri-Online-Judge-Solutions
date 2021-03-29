#include <stdio.h>
#include <string.h>

int main(){
    char ent[9];
    while(gets(ent)){
        if(ent == EOF)
            break;
        if(strcmp(ent, "esquerda") == 0){
            printf("ingles\n");
        }else if(strcmp(ent, "direita") == 0){
            printf("frances\n");
        }else if(strcmp(ent, "nenhuma") == 0){
            printf("portugues\n");
        }else if(strcmp(ent, "as duas") == 0){
            printf("caiu\n");
        }
    }
    return(0);
}
