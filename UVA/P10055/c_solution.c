#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num1 = 0;
  int num2 = 0;
  while(scanf("%d %d", &num1, &num2) != EOF){
    int ans = num1 - num2;
    printf("%d \n", abs(ans));
  }
  return 0;
}