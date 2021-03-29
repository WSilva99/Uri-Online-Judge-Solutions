#include <stdio.h>

int main() {
  int n, c, max = 0, v;
  scanf("%d", &n);
  scanf("%d", &c);
  while(--n) {
    scanf("%d", &v);
    if(v > max) {
      max = v;
    }
  }
  if(c >= max) {
    printf("S\n");
  } else {
    printf("N\n");
  }
  return 0;
}