#include <stdio.h>

int main() {
  int c, n, end;
  scanf("%d %d", &c, &n);
  end = c % n;
  printf("%d\n", end);
  return 0;
}