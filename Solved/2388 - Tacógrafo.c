#include <stdio.h>

int main() {
  int n, t, v, sum = 0;
  scanf("%d", &n);
  while(n > 0){
    scanf("%d %d", &t, &v);
    sum += t * v;
    n--;
  }
  printf("%d\n", sum);
  return 0;
}