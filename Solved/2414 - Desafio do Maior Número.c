#include <stdio.h>
#include <math.h>

int main() {
  int x, max = -1;
  while(1) {
    scanf("%d", &x);
    if(x == 0) {
      break;
    }
    if(x > max) {
      max = x;
    }
  }
  printf("%d\n", max);
  return 0;
}