 #include <stdio.h>

int main() {
    int n, x, y, z;
    int ts = 0, tb = 0, ta = 0;
    int as = 0, ab = 0, aa = 0;
    float ms, mb, ma;
    char nome[50];
    scanf("%d", &n);
    while(n--){
        setbuf(stdin, NULL);
        scanf("%s", &nome);
        scanf("%d %d %d", &x, &y, &z);
        ts += x;
        tb += y;
        ta += z;
        scanf("%d %d %d", &x, &y, &z);
        as += x;
        ab += y;
        aa += z;
    }
    ms = 100.0*as/ts;
    mb = 100.0*ab/tb;
    ma = 100.0*aa/ta;
    printf("Pontos de Saque: %.2f %%.\n", ms);
    printf("Pontos de Bloqueio: %.2f %%.\n", mb);
    printf("Pontos de Ataque: %.2f %%.\n", ma);
    return (0);
}



