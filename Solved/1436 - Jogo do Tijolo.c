#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main() {
  int t, n, i, j = 0;
  scanf("%d", &t);
  while(t--) {
    j++;
    scanf("%d", &n);
    int arr[n];
    i = 0;
    while(i < n) {
      scanf("%d", &arr[i]);
      i++;
    }
    qsort(arr, n, sizeof(int), cmpfunc);
    printf("Case %d: %d\n", j, arr[n/2]);
  }
  return 0;
}