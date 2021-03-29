#include <stdio.h>

int main(){
    int ct, xd, yd, xx, yy, i;

    while(1){
        scanf("%d", &ct);
        if(ct == 0){
            break;
        }
        scanf("%d %d", &xd, &yd);
        while(ct > 0){
            scanf("%d %d", &xx, &yy);
            if(yy == yd || xx == xd){
                printf("divisa\n");
            }else if(yy > yd){
                if(xx > xd){
                    printf("NE\n");
                }else{
                    printf("NO\n");
                }
            }else{
                if(xx > xd){
                    printf("SE\n");
                }else{
                    printf("SO\n");
                }
            }
            ct--;
        }
    }
    return(0);
}
