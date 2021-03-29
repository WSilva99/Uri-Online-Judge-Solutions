#include <stdio.h>

int main() {
  int n, l, c, total = 0;
  scanf("%d", &n);
  while(n > 0){
    scanf("%d %d", &l, &c);
    if(l > c){
      total += c;
    }
    n--;
  }
  printf("%d\n", total);
  return 0;
}