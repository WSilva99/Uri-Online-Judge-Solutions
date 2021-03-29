#include <stdio.h>

int main() {
  int n, x, sum = 0;
  scanf("%d", &n);
  sum -= n;
  while(n--) {
    scanf("%d", &x);
    sum += x;
  }
  printf("%d\n", sum);
  return 0;
}