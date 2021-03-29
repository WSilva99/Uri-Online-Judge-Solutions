#include <stdio.h>
 
int main() {
 
    int x, y, z, m;
    scanf("%d %d %d", &x, &y, &z);
    m = (x+y+abs(x-y))/2;
    m = (m+z+abs(m-z))/2;
    printf("%d eh o maior\n", m);
 
    return 0;
}