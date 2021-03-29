#include <stdio.h>
#define MAX 100

int main(){
    char atleta[MAX];
    int n, i, j;
    float gd, nota;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        float soma = 0, maior = -1, menor = 11;
        setbuf(stdin, NULL);
        scanf("%s", &atleta);
        scanf("%f", &gd);
        for(j = 0; j < 7; j++){
            scanf("%f", &nota);
            soma += nota;
            if(nota > maior)
                maior = nota;
            if(nota < menor)
                menor = nota;
        }
        soma -= maior;
        soma -= menor;
        soma *= gd;
        printf("%s %.2f\n", atleta, soma);
    }
    return(0);
}

