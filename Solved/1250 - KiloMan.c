#include <stdio.h>

int main() {
  int n, t, i;
  scanf("%d", &n);
  while(n > 0) {
    scanf("%d", &t);
    int fires[t], res = 0;
    char skips[t+1];
    i = 0;
    while(i < t) {
      scanf("%d", &fires[i]);
      i++;
    }
    scanf("%s", skips);
    i = 0;
    while(i < t) {
      if(skips[i] == 'S' && fires[i] >= 1 && fires[i] <= 2) {
        res++;
      }else if(skips[i] == 'J' && fires[i] >= 3 && fires[i] <= 7) {
        res++;
      }
      i++;
    }
    printf("%d\n", res);
    n--;
  }
  return 0;
}