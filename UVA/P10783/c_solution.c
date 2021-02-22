#include <stdio.h>

int main(void) {
  int test_cases;
  int lower_limit;
  int upper_limit;
  int sum;
  int i;
  int j;

  scanf("%d", &test_cases);
  for (i = 1; i <= test_cases; i++){
    sum = 0;
    scanf("%d", &lower_limit);
    scanf("%d", &upper_limit);
    for (j = lower_limit; j <= upper_limit; j++){
      if (j % 2 != 0){
        sum += j;
      }
    }
    printf("Case %d: %d \n", i, sum);
  }

  return 0;
}