#include <stdio.h>

int main(void) {
  int x[5], y[5];
  int i = 0;
  while(i < 5){
    scanf("%d", &x[i]);
    i++;
  }
  i = 0;
  while(i < 5){
    scanf("%d", &y[i]);
    i++;
  }
  i = 0;
  while(i < 5){
    if(x[i] == y[i]){
      printf("N\n");
      return 0;
    }
    i++;
  }
  printf("Y\n");
  return 0;
}