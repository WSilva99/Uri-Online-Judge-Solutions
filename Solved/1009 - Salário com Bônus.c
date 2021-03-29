#include <stdio.h>
 
int main() {
 
    char nome[100];
    double sf, mv, sl;
    scanf("%s", &nome);
    setbuf(stdin, NULL);
    scanf("%lf %lf", &sf, &mv);
    sl = sf + (mv*15)/100;
    printf("TOTAL = R$ %.2lf\n", sl);
 
    return 0;
}