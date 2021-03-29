#include <stdio.h>
#include <math.h>

int main(){
    int t, m, maluno;
    double n, naluno = 7;
    scanf("%d", &t);
    while(t > 0){
        scanf("%d %lf", &m, &n);
        if(n > naluno){
            naluno = n;
            maluno = m;
        }
        t--;
    }
    if(naluno >= 8)
        printf("%d\n", maluno);
    else
        printf("Minimum note not reached\n");

    return(0);
}



