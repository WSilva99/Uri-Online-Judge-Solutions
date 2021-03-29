#include <stdio.h>
#include <math.h>

int teste(int x, int y, int z){
    if(abs(x-y) < z && z < x+y)
        return (1);
    return (0);
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(teste(a, b, c) == 1 && teste(a, b, c) == teste(a, c, b) && teste(a, b, c) == teste(b, c, a))
        printf("S\n");
    else if(teste(a, b, d) == 1 && teste(a, b, d) == teste(a, d, b) && teste(a, b, d) == teste(b, d, a))
        printf("S\n");
    else if(teste(a, d, c) == 1 && teste(a, d, c) == teste(a, c, d) && teste(a, d, c) == teste(d, c, a))
        printf("S\n");
    else if(teste(d, b, c) == 1 && teste(d, b, c) == teste(d, c, b) && teste(d, b, c) == teste(b, c, d))
        printf("S\n");
    else
        printf("N\n");
    return(0);
}

