#include <stdio.h>

int main() {

    int t, a, b, c, d, e, cnt = 0;
    scanf("%d", &t);
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if(t == a){
        cnt++;
    }
    if(t == b){
        cnt++;
    }
    if(t == c){
        cnt++;
    }
    if(t == d){
        cnt++;
    }
    if(t == e){
        cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}
