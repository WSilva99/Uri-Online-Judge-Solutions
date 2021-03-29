 #include <stdio.h>
 #include <math.h>

 int main(){
    int t, r1, r2, r;
    scanf("%d", &t);
    while(t > 0){
        scanf("%d %d", &r1, &r2);
        r = r1+r2;
        printf("%d\n", r);
        t--;
    }
    return(0);
 }