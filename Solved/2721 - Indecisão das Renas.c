#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, i = 0, b = 0;
    while(i < 9){
        scanf("%d", &x);
        b += x;
        i++;
    }
    while(b > 9){
        b -= 9;
    }
    switch(b){
    case 1:
        printf("Dasher\n");
        break;
    case 2:
        printf("Dancer\n");
        break;
    case 3:
        printf("Prancer\n");
        break;
    case 4:
        printf("Vixen\n");
        break;
    case 5:
        printf("Comet\n");
        break;
    case 6:
        printf("Cupid\n");
        break;
    case 7:
        printf("Donner\n");
        break;
    case 8:
        printf("Blitzen\n");
        break;
    case 9:
        printf("Rudolph\n");
        break;
    default:
        break;
    }
    return(0);
}
