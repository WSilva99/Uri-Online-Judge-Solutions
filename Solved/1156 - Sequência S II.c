#include <stdio.h>

int main(){
    int dividendo = 3, divisor = 2;
    double s = 1;
    for(dividendo; dividendo <= 39; dividendo+=2){
        s += dividendo*1.0/divisor;
        divisor+=divisor;
    }
    printf("%.2lf\n", s);
    return(0);
}
