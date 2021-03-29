#include <stdio.h>

int main() {
  char cpf[17];
  scanf("%s", cpf);
  cpf[16] = '\0';
  int i = 0;
  while(cpf[i] != '\0') {
    if(cpf[i] == '.' ||cpf[i] == '-'){
      printf("\n");
    } else {
      printf("%c", cpf[i]);
    }
    i++;
  }
  printf("\n");
  return 0;
}