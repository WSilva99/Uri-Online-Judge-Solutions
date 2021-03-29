#include <stdio.h>
#define VISIBLE 40000000

int main() {
  int a, n, f, v = 0;
  scanf("%d", &a);
  scanf("%d", &n);
  while(n > 0){
    scanf("%d", &f);
    if(a*f >= VISIBLE){
      v++;
    }
    n--;
  }
  printf("%d\n", v);
  return 0;
}