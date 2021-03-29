#include <stdio.h>

int main() {

    int i, a, b, s = 0;
    scanf("%d %d", &a, &b);
    if(a>b){
        a = a + b;
        b = a - b;
        a = a - b;
    }
    for(i=a+1; i<b; i++)
        if(i%2 != 0)
            s = s + i;
    printf("%d\n", s);
    return 0;
}
