#include <stdio.h>

int main() {
  int v, t, res;
  while(scanf("%d %d", &v, &t) != EOF) {
    res = 2 * t * v;
    printf("%d\n", res);
  }
  return 0;
}