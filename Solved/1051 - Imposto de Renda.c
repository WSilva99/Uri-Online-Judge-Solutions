#include <stdio.h>

int main() {

    float s, ir;
    scanf("%f", &s);

    if(s <= 2000.00){
        printf("Isento\n");
    }else if(s <= 3000.00){
        ir = (s-2000)*8/100;
        printf("R$ %.2f\n", ir);
    }else if(s <= 4500.00){
        ir = 80 + (s-3000)*18/100;
        printf("R$ %.2f\n", ir);
    }else{
        ir = 80 + 270 + (s-4500)*28/100;
        printf("R$ %.2f\n", ir);
    }

    return 0;
}
