#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int c, n, m;
  scanf("%d", &c);
  while(c--) {
    scanf("%d %d", &n, &m);
    printf("%d\n", (int) ceil((double) n/m));
  }
  return 0;
}