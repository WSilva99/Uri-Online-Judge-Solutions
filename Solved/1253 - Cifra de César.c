#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  while(n--) {
    char cifra[51];
    scanf("%s", cifra);
    int s;
    scanf("%d", &s);
    int i;
    for(i = 0; cifra[i] != '\0'; i++) {
      if(cifra[i] - s >= 65)
        cifra[i] -= s;
      else
        cifra[i] = cifra[i] - s + 26;
    }
    printf("%s\n", cifra);
  }
  return 0;
}