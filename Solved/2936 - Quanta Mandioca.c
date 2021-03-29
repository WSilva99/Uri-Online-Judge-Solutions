#include <stdio.h>
 
int main() {
    int x, sum = 225;
    scanf("%d", &x);
    sum += x * 300;
    scanf("%d", &x);
    sum += x * 1500;
    scanf("%d", &x);
    sum += x * 600;
    scanf("%d", &x);
    sum += x * 1000;
    scanf("%d", &x);
    sum += x * 150;
    printf("%d\n", sum);
    return 0;
}