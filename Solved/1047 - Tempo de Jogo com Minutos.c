#include <stdio.h>
int main(){
    int h1, m1, h2, m2, tf, h, m, r;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    if(h1 < h2 || h1 == h2 && m1 < m2){
        tf = (h2*60 + m2) - (h1*60 + m1);
        h = tf/60;
        m = tf%60;
    }else if(h2 < h1 || h2 == h1 && m2 <= m1){
        tf = (h2*60 + m2) - (h1*60 + m1);
        r = abs(tf)-24*60;
        h = abs(r)/60;
        m = abs(r)%60;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);

}
