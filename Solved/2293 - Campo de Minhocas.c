#include <stdio.h>

int main() {
  int i, j;
  int n, m, x;
  int sum = 0, res = 0;
  scanf("%d %d", &n, &m);
  int c[n][m];
  for(i = 0; i < n; i++) {
    for(j = 0; j < m; j++) {
      scanf("%d", &c[i][j]);
      sum += c[i][j];
    }
    if(sum > res) {
      res = sum;
    }
    sum = 0;
  }
  for(i = 0; i < m; i++) {
    for(j = 0; j < n; j++) {
      sum += c[j][i];
    }
    if(sum > res) {
      res = sum;
    }
    sum = 0;
  }
  printf("%d\n", res);
  return 0;
}