#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void) {
  int test_cases = 0;
  int nums[3];

  scanf("%d", &test_cases);
  int i, j;
  for (i = 1; i <= test_cases; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &nums[j]);
    }
    qsort(nums, 3, sizeof(int), cmpfunc);
    printf("Case %d: %d \n", i, nums[1]);
  }
  return 0;
}