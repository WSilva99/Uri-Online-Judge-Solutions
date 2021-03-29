#include <stdio.h>
 
int main() {
 
    int tv, vm;
    double g;
    scanf("%d %d", &tv, &vm);
    g = (tv * vm)/12.0;
    printf("%.3lf\n", g);
 
    return 0;
}