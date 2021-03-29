#include <stdio.h>

int main() {
  int n, s, x, min;
  scanf("%d %d", &n, &s);
  min = s;
  while(n--) {
    scanf("%d", &x);
    s += x;
    if(s < min) {
      min = s;
    }
  }
  printf("%d\n", min);
  return 0;
}