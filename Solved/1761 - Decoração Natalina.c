#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592654

int main() {
  double a, b, c, d;
  while(scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
    d = 5 * (tan(a * PI/180.0) * b + c);
    printf("%.2lf\n", d);
  }
  return 0;
}