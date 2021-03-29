 #include <stdio.h>
 #include <math.h>

 int main(){
    int a, b, c, area, lado;
    while(1){
    scanf("%d", &a);
    if(a == 0){
        break;
    }
    scanf("%d", &b);
    scanf("%d", &c);
    area = (a*b*100)/c;
    lado = sqrt(area);

    printf("%d\n", lado);

    }

    return(0);
 }
