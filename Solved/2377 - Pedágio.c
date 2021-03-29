#include <stdio.h>

int main() {
  int l, d, k, p, custo = 0;
  scanf("%d %d", &l, &d);
  scanf("%d %d", &k, &p);
  custo += l * k;
  custo += l/d * p;
  printf("%d\n", custo);
  return 0;
}