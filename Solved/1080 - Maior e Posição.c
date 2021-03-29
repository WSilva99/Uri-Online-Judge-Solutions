#include <stdio.h>

int main() {
    int i, num, mv = 0, mp = 0;
    for(i = 1; i <= 100; i++){
        scanf("%d", &num);
        if(num>mv){
            mv = num;
            mp = i;
        }
    }
    printf("%d\n%d\n", mv, mp);
    return 0;
}
