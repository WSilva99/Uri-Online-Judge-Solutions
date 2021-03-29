 #include <stdio.h>

 int main(){
    int l, v, maior = 0, nivel;
    while(scanf("%d", &l) != EOF){
        while(l > 0){
            scanf("%d", &v);
            if(v > maior)
                maior = v;
            l--;
        }
        if(maior < 10)
            nivel = 1;
        else if(maior >= 10 && maior < 20)
            nivel = 2;
        else
            nivel = 3;

        printf("%d\n", nivel);

        maior = 0;
    }
    return(0);
 }
