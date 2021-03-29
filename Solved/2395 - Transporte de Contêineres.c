#include <stdio.h>

int main() {
  int a, b, c, x, y, z;
  int res;
  scanf("%d %d %d", &a, &b, &c);
  scanf("%d %d %d", &x, &y, &z);
  res = (x/a) * (y/b) * (z/c);
  printf("%d\n", res);
  return 0;
}