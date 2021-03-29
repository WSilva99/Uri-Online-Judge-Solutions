#include <stdio.h>
#include <stdlib.h>

int main(){
  char entrada[51];
  while(scanf("%s", entrada) != EOF) {
    int p, i, aux = 0, cicle = 0;
    scanf("%d", &p);
    for(i = 0; entrada[i] != '\0'; i++) {
        if(entrada[i] == 'W') {
          cicle++;
          aux = 0;
        } else if(entrada[i] == 'R' && aux == 0) {
          cicle++;
          aux++;
        } else if(entrada[i] == 'R') {
          aux++;
        }
        if(aux == p)
          aux = 0;
    }
    printf("%d\n", cicle);
  }
  return(0);
}
