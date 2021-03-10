#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int cash;
  float balance;
  cin >> cash;
  cin >> balance;
  if (cash % 5 == 0) {
    if (balance >= (cash + 0.5)){
      balance = balance - cash - 0.5;
    } 
  }
  cout << fixed << setprecision(2) <<balance;
	return 0;
}
