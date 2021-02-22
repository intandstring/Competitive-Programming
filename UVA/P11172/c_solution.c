#include <stdio.h>

char comparator(int num1, int num2){
  if (num1 > num2){
    return '>';
  } 
  else if (num1 < num2){ 
    return '<';
  } 
  else {
    return '=';
  }
}

int main(void) {

  int input_amount = 0;
  int num1 = 0;
  int num2 = 0;
  int i;

  scanf("%d", &input_amount);
  for (i = 0; i < input_amount; i++){
    scanf("%d %d", &num1, &num2);
    char ans = comparator(num1, num2);
    printf("%c \n", ans);
  }

  return 0;
}