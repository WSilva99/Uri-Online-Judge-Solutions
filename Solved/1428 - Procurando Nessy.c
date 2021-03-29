#include <stdio.h>
#include <math.h>

int main() {
  int t, n, m;
  scanf("%d", &t);
  while(t--) {
    scanf("%d %d", &n, &m);
    n /= 3;
    m /= 3;
    printf("%d\n", n*m);
  }
  return 0;
}