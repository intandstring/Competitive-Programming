#include <stdio.h>

int main() {
  int test_cases;
  int num;
  scanf("%d", &test_cases);
  while (test_cases != 0)
  {
    scanf("%d", &num);
    num = (((((num * 567) / 9 ) + 7492 ) * 235 ) / 47 ) - 498;
    if (num < 0) {
      num *= -1;
    }
    printf("%d \n", (num / 10) % 10);
    test_cases--;
  }
  
  return 0;
}