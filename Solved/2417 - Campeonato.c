#include <stdio.h>
#include <math.h>

int main() {
  int i = 0;
  int  cv, ce, cs, ct, fv, fe, fs, ft;
  scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);
  ct = cv * 3 + ce * 1;
  ft = fv * 3 + fe * 1;
  if(ct > ft || ((ct == ft) && cs > fs)) {
    printf("C\n");
  } else if(ft > ct || ((ft == ct) && fs > cs)) {
    printf("F\n");
  } else {
    printf("=\n");
  }
  return 0;
}