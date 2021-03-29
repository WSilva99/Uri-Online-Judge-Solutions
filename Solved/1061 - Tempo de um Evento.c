#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int dia1, hr1, min1, seg1, dia2, hr2, min2, seg2;
  char c[4];
  int ts1, ts2;
  int W, X, Y, Z, total;

  scanf("%s %d", c, &dia1);
  setbuf(stdin, NULL);
  scanf("%d %s %d %s %d", &hr1, c, &min1, c, &seg1);
  setbuf(stdin, NULL);
  scanf("%s %d", c, &dia2);
  setbuf(stdin, NULL);
  scanf("%d %s %d %s %d", &hr2, c, &min2, c, &seg2);
  setbuf(stdin, NULL);

  ts1 = seg1 + min1*60 + hr1*3600 + dia1*3600*24;
  ts2 = seg2 + min2*60 + hr2*3600 + dia2*3600*24;
  total = ts2 - ts1;
  W = total/(3600*24);
  total = total%(3600*24);
  X = total/(3600);
  total = total%(3600);
  Y = total/60;
  total = total%60;
  Z = total;

  printf("%d dia(s)\n", W);
  printf("%d hora(s)\n", X);
  printf("%d minuto(s)\n", Y);
  printf("%d segundo(s)\n", Z);

  return 0;
}