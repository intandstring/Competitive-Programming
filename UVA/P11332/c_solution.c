#include <stdio.h>

int main(void)
{
  int number;
  int sum;
  scanf("%d", &number);

  while (number != 0){
    while (number > 10){
      sum = 0;
      while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
      }
      number = sum;
    }
    printf("%d \n", number);
    scanf("%d", &number);
  }

  return 0;
}
