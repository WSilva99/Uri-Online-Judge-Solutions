#include <stdio.h>

int main() {
    int n, num, cin = 0, cout = 0;
    scanf("%d", &n);
    for(n; n>0; n--){
        scanf("%d", &num);
        if(num >= 10 && num <= 20)
            cin++;
        else
            cout++;
    }
    printf("%d in\n", cin);
    printf("%d out\n", cout);
    return 0;
}
