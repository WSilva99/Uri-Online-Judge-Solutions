 #include <stdio.h>

int main() {
    int a, b, c, x;
    scanf("%d %d %d", &a, &b, &c);

    /* Ordem Decrescente */
    if(a<b){
        x = a;
        a = b;
        b = x;
    }
    if(b<c){
        x = b;
        b = c;
        c = x;
    }
    if(a<b){
        x = a;
        a = b;
        b = x;
    }

    if(a >= b+c){
        printf("Invalido\n");
    }else{
        if(a == b && b == c){
            printf("Valido-Equilatero\n");
        }else if(a == b || a == c || b == c){
            printf("Valido-Isoceles\n");
        }else{
            printf("Valido-Escaleno\n");
        }

        if(a*a == b*b + c*c){
            printf("Retangulo: S\n");
        }else{
            printf("Retangulo: N\n");
        }
    }
    return (0);
}

