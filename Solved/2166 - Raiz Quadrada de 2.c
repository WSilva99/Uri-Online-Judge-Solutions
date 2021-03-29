#include <stdio.h>

int main() {
  int n, i;
  float res = 0;
  scanf("%d", &n);
  for (i = 0 ; i < n ; i++) {
		res += 2.0;
		res = 1.0/res;
	}
  res += 1;
  printf("%.10f\n", res);
  return 0;
}