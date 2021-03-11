#include <stdio.h>

int main(void) {
	int cash;
	float balance;
	scanf("%d", &cash);
	scanf("%f", &balance);
	if (cash % 5 == 0){
	  if (balance - 0.5 >= cash){
	    balance = balance - cash - 0.5;
	  }
	}
	printf("%.2f", balance);
	return 0;
}

