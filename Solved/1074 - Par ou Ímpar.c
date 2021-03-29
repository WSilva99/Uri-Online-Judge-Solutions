#include <stdio.h>

int main() {
    int i, num;
    scanf("%d", &i);
    for(i; i > 0; i--){
        scanf("%d", &num);
        if(num == 0){
            printf("NULL\n");
        }else{
            if(num%2 == 0){
                printf("EVEN ");
            }else{
                printf("ODD ");
            }
            if(num > 0){
                printf("POSITIVE\n");
            }else{
                printf("NEGATIVE\n");
            }
        }
    }
    return 0;
}