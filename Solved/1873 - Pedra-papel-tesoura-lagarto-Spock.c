 #include <stdio.h>
 #include <string.h>

 int main(){
    int t, n = 1, i, f;
    char opcoes[5][8] = {"pedra", "papel", "tesoura", "lagarto", "spock"};
    char sheldon[8], raj [8];
    scanf("%d", &t);
    setbuf(stdin, NULL);
    while(t > 0){
        scanf("%s%s", &raj, &sheldon);

        if(strcmp(sheldon, raj) == 0){
            printf("empate\n", n);
        }else{

            if(strcmp(sheldon, opcoes[0]) == 0){

                if(strcmp(raj, opcoes[3]) == 0){
                    printf("sheldon\n", n);
                }else if(strcmp(raj, opcoes[2]) == 0){
                    printf("sheldon\n", n);
                }else{
                    printf("rajesh\n", n);
                }

            }else if(strcmp(sheldon, opcoes[1]) == 0){

                if( strcmp(raj, opcoes[3]) == 0){
                    printf("rajesh\n", n);
                }else if( strcmp(raj, opcoes[2]) == 0){
                    printf("rajesh\n", n);
                }else{
                    printf("sheldon\n", n);
                }

            }else if( strcmp(sheldon, opcoes[2]) == 0){

                if( strcmp(raj, opcoes[3]) == 0){
                    printf("sheldon\n", n);
                }else if( strcmp(raj, opcoes[1]) == 0){
                    printf("sheldon\n", n);
                }else{
                    printf("rajesh\n", n);
                }

            }else if( strcmp(sheldon, opcoes[3]) == 0){

                if( strcmp(raj, opcoes[4]) == 0){
                    printf("sheldon\n", n);
                }else if( strcmp(raj, opcoes[1]) == 0){
                    printf("sheldon\n", n);
                }else{
                    printf("rajesh\n", n);
                }

            }else if( strcmp(sheldon, opcoes[4]) == 0){

                if( strcmp(raj, opcoes[3]) == 0){
                    printf("rajesh\n", n);
                }else if( strcmp(raj, opcoes[1]) == 0){
                    printf("rajesh\n", n);
                }else{
                    printf("sheldon\n", n);
                }
            }
        }

        t--;
    }
    return(0);
 }

