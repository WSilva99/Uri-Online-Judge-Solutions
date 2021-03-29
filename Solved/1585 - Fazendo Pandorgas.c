#include <stdio.h>

int main() {
  int n, d, D, a;
  scanf("%d", &n);
  while(n--){
    scanf("%d %d", &d, &D);
    a = (d*D)/2;
    printf("%d cm2\n", a);
  }
  return 0;
}