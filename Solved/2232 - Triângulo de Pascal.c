#include <stdio.h>
#include <math.h>

int main() {
  int t, n;
  scanf("%d", &t);
  while(t > 0){
    int sum = 0;
    scanf("%d", &n);
    sum += pow(2, n) - 1;
    t--;
    printf("%d\n", sum);
  }
  return 0;
}