#include <stdio.h>

int main() {
  int n;
  while(1) {
    scanf("%d", &n);
    if(n == 0) {
      break;
    }
    int res = 0;
    while(n > 0) {
      res += n * n;
      n--;
    }
    printf("%d\n", res);
  }
  return 0;
}