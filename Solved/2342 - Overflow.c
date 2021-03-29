#include <stdio.h>

int main() {
  int max, n1, n2, res;
  char op;
  scanf("%d", &max);
  scanf("%d %c %d", &n1, &op, &n2);
  if(op == '+'){
    res = n1 + n2;
  }else if(op == '*') {
    res = n1 * n2;
  }
  if(res <= max){
    printf("OK\n");  
  } else {
    printf("OVERFLOW\n");
  }
  
  return 0;
}