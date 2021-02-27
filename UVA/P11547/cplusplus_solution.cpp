#include <iostream>

using namespace std;

int main() {
  int test_cases;
  int num;
  cin >> test_cases;
  while (test_cases != 0)
  {
    cin >> num;
    num = (((((num * 567) / 9 ) + 7492 ) * 235 ) / 47 ) - 498;
    if (num < 0) {
      num *= -1;
    }
    cout << (num / 10) % 10 << endl;
    test_cases--;
  }
  
  return 0;
}