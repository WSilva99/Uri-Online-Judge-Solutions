#include <stdio.h>
#include <math.h>

int main() {
  int n, d1, d3, result;
  char d2;
  scanf("%d", &n);
  while(n > 0) {
    scanf("%d%c%d", &d1, &d2, &d3);
    if(d1 == d3) {
      result = d1*d3;
    } else if(d2 < 97) {
      result = d3-d1;
    } else {
      result = d1+d3;
    }
    printf("%d\n", result);
    n--;
  }
  return 0;
}