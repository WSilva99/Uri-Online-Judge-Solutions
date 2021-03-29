#include <stdio.h>
#include <math.h>

int main() {
  int t, n, k, bottles;
  scanf("%d", &t);
  while(t > 0) {
    scanf("%d %d", &n, &k);
    bottles = n - ((n/k) * k) + (n/k);
    printf("%d\n", bottles);
    t--;
  }
  return 0;
}