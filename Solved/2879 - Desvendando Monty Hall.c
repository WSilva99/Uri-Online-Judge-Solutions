#include <stdio.h>

int main() {
  int n, i;
  scanf("%d", &n);
  int win = n;
  while(n > 0) {
    scanf("%d", &i);
    if(i == 1) {
      win--;
    }
    n--;
  }
  printf("%d\n", win);
  return 0;
}