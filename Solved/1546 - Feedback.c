#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int n, k, x;
  scanf("%d", &n);
  while(n--) {
    scanf("%d", &k);
    while(k--) {
      scanf("%d", &x);
      if(x == 1) {
        printf("Rolien\n");
      } else if(x == 2) {
        printf("Naej\n");
      } else if(x == 3) {
        printf("Elehcim\n");
      } else if(x == 4) {
        printf("Odranoel\n");
      }
    }
  }
  return 0;
}