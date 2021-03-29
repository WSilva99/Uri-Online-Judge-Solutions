 #include <stdio.h>
 #include <string.h>

 int main(){
    int t, n = 1, i, f;
    char opcoes[5][8] = {"pedra", "papel", "tesoura", "lagarto", "Spock"};
    char sheldon[8], raj [8];
    scanf("%d", &t);
    setbuf(stdin, NULL);
    while(n <= t){
        scanf("%s%s", &sheldon, &raj);

        if(strcmp(sheldon, raj) == 0){
            printf("Caso #%d: De novo!\n", n);
        }else{

            if(strcmp(sheldon, opcoes[0]) == 0){

                if(strcmp(raj, opcoes[3]) == 0){
                    printf("Caso #%d: Bazinga!\n", n);
                }else if(strcmp(raj, opcoes[2]) == 0){
                    printf("Caso #%d: Bazinga!\n", n);
                }else{
                    printf("Caso #%d: Raj trapaceou!\n", n);
                }

            }else if(strcmp(sheldon, opcoes[1]) == 0){

                if( strcmp(raj, opcoes[3]) == 0){
                    printf("Caso #%d: Raj trapaceou!\n", n);
                }else if( strcmp(raj, opcoes[2]) == 0){
                    printf("Caso #%d: Raj trapaceou!\n", n);
                }else{
                    printf("Caso #%d: Bazinga!\n", n);
                }

            }else if( strcmp(sheldon, opcoes[2]) == 0){

                if( strcmp(raj, opcoes[3]) == 0){
                    printf("Caso #%d: Bazinga!\n", n);
                }else if( strcmp(raj, opcoes[1]) == 0){
                    printf("Caso #%d: Bazinga!\n", n);
                }else{
                    printf("Caso #%d: Raj trapaceou!\n", n);
                }

            }else if( strcmp(sheldon, opcoes[3]) == 0){

                if( strcmp(raj, opcoes[4]) == 0){
                    printf("Caso #%d: Bazinga!\n", n);
                }else if( strcmp(raj, opcoes[1]) == 0){
                    printf("Caso #%d: Bazinga!\n", n);
                }else{
                    printf("Caso #%d: Raj trapaceou!\n", n);
                }

            }else if( strcmp(sheldon, opcoes[4]) == 0){

                if( strcmp(raj, opcoes[3]) == 0){
                    printf("Caso #%d: Raj trapaceou!\n", n);
                }else if( strcmp(raj, opcoes[1]) == 0){
                    printf("Caso #%d: Raj trapaceou!\n", n);
                }else{
                    printf("Caso #%d: Bazinga!\n", n);
                }
            }
        }

        n++;
    }
    return(0);
 }

