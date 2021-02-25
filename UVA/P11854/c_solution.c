#include <stdio.h>

int main(void) {
  int a, b, c;
  int temp;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  while ((a != 0) && (b != 0) && (c != 0)){
    a *= a;
    b *= b;
    c *= c;
    temp = a + b;
    if (temp == c){
      printf("right\n");
    } else {
      printf("wrong\n");
    }
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
  }
  return 0;
}